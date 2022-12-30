#pragma once
#include "../vecoptions.h"

class StarpilotContextOption
{
private:
    /* data */
public:
    float maxspeed;
    int max_group_size;
    bool can_spawn_left;
    float left_prob;
    int min_enemy_delta_t;
    int max_enemy_delta_t;
    int flyer_prob_weight;
    int meteor_prob_weight;
    int cloud_prob_weight;
    int turret_prob_weight;
    int fastflyer_prob_weight;

    // int fish_interval;

    StarpilotContextOption(/* args */);
    ~StarpilotContextOption();
    void parse_options(VecOptions *opts);
};