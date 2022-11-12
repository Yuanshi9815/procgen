#pragma once
#include "../vecoptions.h"

class CoinrunContextOption
{
private:
    /* data */
public:
    // float start_r;
    
    // int fish_interval;
    
    // int completion_bonus;
    // int positive_reward;
    
    // float fish_min_r;
    // float fish_max_r;

    // int fish_quota;

    // float from_left_prob;
    // float min_speed;
    // float max_speed;


    CoinrunContextOption(/* args */);
    ~CoinrunContextOption();
    void parse_options(VecOptions *opts);
};