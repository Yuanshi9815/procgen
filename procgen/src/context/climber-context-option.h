#pragma once
#include "../vecoptions.h"

class ClimberContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    ClimberContextOption(/* args */);
    ~ClimberContextOption();
    void parse_options(VecOptions *opts);
};