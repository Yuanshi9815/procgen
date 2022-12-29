#include "dodgeball-context-option.h"
#include "../cpp-utils.h"

DodgeballContextOption::DodgeballContextOption(/* args */)
{
}
    

DodgeballContextOption::~DodgeballContextOption()
{
}

void DodgeballContextOption::parse_options(VecOptions *opts)
{
    // opts->consume_float("start_r", &start_r);
    opts->consume_int("world_dim", &world_dim, true, 20); // The dimension of the world
    opts->consume_int("fire_interval", &fire_interval, true, 7); // The interval of the agent's fire
    opts->consume_float("thickness", &thickness, true, 0.6); // The thickness of the walls
    opts->consume_float("enemy_r", &enemy_r, true, 0.5); // The radius of the enemy
    opts->consume_float("ball_r", &ball_r, true, 0.5); // The radius of the ball
    opts->consume_float("ball_vscale", &ball_vscale, true, 0.5); // The speed of the ball
    opts->consume_float("maxspeed", &maxspeed, true, 0.75); // The maximum speed of the agent
    opts->consume_float("exit_r", &exit_r, true, 1.5); // The radius of the exit erea
    opts->consume_float("enemy_speed", &enemy_speed, true, 0.05); // The speed of the enemy
    opts->consume_int("enemy_reward", &enemy_reward, true, 2); // The reward of killing an enemy
    opts->consume_int("num_iterations", &num_iterations, true, 2);  // The number of walls increases with iterations
    opts->consume_bool("allow_left_exit", &allow_left_exit, true, true); 
    opts->consume_bool("allow_right_exit", &allow_right_exit, true, true);
    opts->consume_bool("allow_top_exit", &allow_top_exit, true, true);
    opts->consume_bool("allow_bottom_exit", &allow_bottom_exit, true, true);

    opts->consume_int("max_extra_enemies", &max_extra_enemies, true, 3); // The maximum number of extra enemies
    opts->consume_int("base_num_enemies", &base_num_enemies, true, 3); // The number of base enemies. The sum of base_num_enemies and max_extra_enemies is the number of all enemies

}