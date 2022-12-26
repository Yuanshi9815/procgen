#pragma once
#include "../vecoptions.h"

class NinjaContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    NinjaContextOption(/* args */);
    ~NinjaContextOption();
    void parse_options(VecOptions *opts);
};