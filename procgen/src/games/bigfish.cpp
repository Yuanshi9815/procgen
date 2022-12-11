#include "../basic-abstract-game.h"
#include "../assetgen.h"
#include "../context/bigfish-context-option.h"
#include <set>
#include <queue>

const std::string NAME = "bigfish";

const int FISH = 2;


class BigFish : public BasicAbstractGame {
  public:
    int fish_eaten = 0;
    float r_inc = 0.0;

    BigFish()
        : BasicAbstractGame(NAME) {
        timeout = 6000;

        main_width = 20;
        main_height = 20;
    }

    void load_background_images() override {
        main_bg_images_ptr = &water_backgrounds;
    }

    void asset_for_type(int type, std::vector<std::string> &names) override {
        if (type == PLAYER) {
            names.push_back("misc_assets/fishTile_072.png");
        } else if (type == FISH) {
            names.push_back("misc_assets/fishTile_074.png");
            names.push_back("misc_assets/fishTile_078.png");
            names.push_back("misc_assets/fishTile_080.png");
        }
    }

    void handle_agent_collision(const std::shared_ptr<Entity> &obj) override {
        BasicAbstractGame::handle_agent_collision(obj);

        if (obj->type == FISH) {
            if (obj->rx > agent->rx) {
                step_data.done = true;
            } else {
                step_data.reward += bigfish_context_option->positive_reward;
                obj->will_erase = true;
                agent->rx += r_inc;
                agent->ry += r_inc;
                fish_eaten += 1;
            }
        }
    }

    void game_reset() override {
        BasicAbstractGame::game_reset();

        options.center_agent = false;
        fish_eaten = 0;

        float start_r = bigfish_context_option->start_r;

        // if (options.distribution_mode == EasyMode) {
        //     start_r = 1;
        // }

        r_inc = (bigfish_context_option->fish_max_r - start_r) / bigfish_context_option->fish_quota;

        agent->rx = start_r;
        agent->ry = start_r;
        agent->y = 1 + agent->ry;
    }

    void game_step() override {
        BasicAbstractGame::game_step();

        if (rand_gen.randn(bigfish_context_option->fish_interval) == 0) {
            float ent_r = (bigfish_context_option->fish_max_r - bigfish_context_option->fish_min_r) * pow(rand_gen.rand01(), 1.4) + bigfish_context_option->fish_min_r;
            float ent_y = rand_gen.rand01() * (main_height - 2 * ent_r);
            float moves_right = rand_gen.randrange(0, 1) < bigfish_context_option->from_left_prob;
            float ent_vx = (bigfish_context_option->min_speed + rand_gen.randrange(0, 1) * bigfish_context_option->max_speed) * (moves_right ? 1 : -1);
            float ent_x = moves_right ? -1 * ent_r : main_width + ent_r;
            int type = FISH;
            auto ent = add_entity(ent_x, ent_y, ent_vx, 0, ent_r, type);
            choose_random_theme(ent);
            match_aspect_ratio(ent);
            ent->is_reflected = !moves_right;
        }

        if (fish_eaten >= bigfish_context_option->fish_quota) {
            step_data.done = true;
            step_data.reward += bigfish_context_option->completion_bonus;
            step_data.level_complete = true;
        }

        if (action_vx > 0)
            agent->is_reflected = false;
        if (action_vx < 0)
            agent->is_reflected = true;
    }

    void serialize(WriteBuffer *b) override {
        BasicAbstractGame::serialize(b);
        b->write_int(fish_eaten);
        b->write_float(r_inc);
    }

    void deserialize(ReadBuffer *b) override {
        BasicAbstractGame::deserialize(b);
        fish_eaten = b->read_int();
        r_inc = b->read_float();
    }
};

REGISTER_GAME(NAME, BigFish);
