#include "starpilot-context-option.h"
#include "../cpp-utils.h"

StarpilotContextOption::StarpilotContextOption(/* args */)
{
}
    

StarpilotContextOption::~StarpilotContextOption()
{
}

void StarpilotContextOption::parse_options(VecOptions *opts)
{
    // opts->consume_float("start_r", &start_r);
    opts->consume_float("maxspeed", &maxspeed, true, 0.75);
    opts->consume_int("max_group_size", &max_group_size, true, 5);
    opts->consume_bool("can_spawn_left", &can_spawn_left, true, false);
    opts->consume_float("left_prob", &left_prob, true, 0.1);
    opts->consume_int("min_enemy_delta_t", &min_enemy_delta_t, true, 10);
    opts->consume_int("max_enemy_delta_t", &max_enemy_delta_t, true, 30);
    opts->consume_int("flyer_prob_weight", &flyer_prob_weight, true, 1);
    opts->consume_int("meteor_prob_weight", &meteor_prob_weight, true, 0);
    opts->consume_int("cloud_prob_weight", &cloud_prob_weight, true, 0);
    opts->consume_int("turret_prob_weight", &turret_prob_weight, true, 0);
    opts->consume_int("fastflyer_prob_weight", &fastflyer_prob_weight, true, 0);
}