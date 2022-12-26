#pragma once
#include "../vecoptions.h"

class JumperContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    JumperContextOption(/* args */);
    ~JumperContextOption();
    void parse_options(VecOptions *opts);
};