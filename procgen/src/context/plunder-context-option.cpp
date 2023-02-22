#include "plunder-context-option.h"
#include "../cpp-utils.h"

PlunderContextOption::PlunderContextOption(/* args */)
{
}
    

PlunderContextOption::~PlunderContextOption()
{
}

void PlunderContextOption::parse_options(VecOptions *opts)
{
    opts->consume_float("target_time_reward", &target_time_reward, true, 0.1);
    opts->consume_float("target_time_penalty", &target_time_penalty, true, 0.1);
    opts->consume_float("step_time_penalty", &step_time_penalty, true, 0.0015);
    opts->consume_float("fire_time_penalty", &fire_time_penalty, true, 0.02);
    opts->consume_int("target_quota", &target_quota, true, 20);
    opts->consume_float("spawn_prob", &spawn_prob, true, 0.06);
    opts->consume_int("num_lanes", &num_lanes, true, 5);
    opts->consume_float("r_scale", &r_scale, true, 1.5);
    opts->consume_float("left_prob", &left_prob, true, 0.5);
    opts->consume_float("enemy_prob", &enemy_prob, true, 0.5);
    opts->consume_float("max_speed", &max_speed, true, 0.15);
    opts->consume_float("min_speed", &min_speed, true, 0.25);
}

void PlunderContextOption::copy_options(PlunderContextOption *opts)
{
    opts->target_time_reward = opts->target_time_reward;
    opts->target_time_penalty = opts->target_time_penalty;
    opts->step_time_penalty = opts->step_time_penalty;
    opts->fire_time_penalty = opts->fire_time_penalty;
    opts->target_quota = opts->target_quota;
    opts->spawn_prob = opts->spawn_prob;
    opts->num_lanes = opts->num_lanes;
    opts->r_scale = opts->r_scale;
    opts->left_prob = opts->left_prob;
    opts->enemy_prob = opts->enemy_prob;
    opts->max_speed = opts->max_speed;
    opts->min_speed = opts->min_speed;
}