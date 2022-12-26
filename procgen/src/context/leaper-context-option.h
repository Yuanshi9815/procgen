#pragma once
#include "../vecoptions.h"

class LeaperContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    LeaperContextOption(/* args */);
    ~LeaperContextOption();
    void parse_options(VecOptions *opts);
};