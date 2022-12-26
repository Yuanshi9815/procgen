#pragma once
#include "../vecoptions.h"

class PlunderContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    PlunderContextOption(/* args */);
    ~PlunderContextOption();
    void parse_options(VecOptions *opts);
};