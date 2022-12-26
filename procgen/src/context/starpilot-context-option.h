#pragma once
#include "../vecoptions.h"

class StarpilotContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    StarpilotContextOption(/* args */);
    ~StarpilotContextOption();
    void parse_options(VecOptions *opts);
};