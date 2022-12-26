#pragma once
#include "../vecoptions.h"

class CaveflyerContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    CaveflyerContextOption(/* args */);
    ~CaveflyerContextOption();
    void parse_options(VecOptions *opts);
};