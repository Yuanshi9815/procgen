#pragma once
#include "../vecoptions.h"

class MinerContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    MinerContextOption(/* args */);
    ~MinerContextOption();
    void parse_options(VecOptions *opts);
};