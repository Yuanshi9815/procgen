#pragma once
#include "../vecoptions.h"

class LeaperContextOption
{
private:
    /* data */
public:
    // float start_r;
    int world_dim;

    float min_car_speed;
    float max_car_speed;
    float min_log_speed;
    float max_log_speed;

    int max_extra_space;

    int max_road;
    int min_road;
    int max_log;
    int min_log;

    float car_left_prob;

    LeaperContextOption(/* args */);
    ~LeaperContextOption();
    void parse_options(VecOptions *opts);
};