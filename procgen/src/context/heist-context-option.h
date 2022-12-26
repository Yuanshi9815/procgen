#pragma once
#include "../vecoptions.h"

class HeistContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    HeistContextOption(/* args */);
    ~HeistContextOption();
    void parse_options(VecOptions *opts);
};