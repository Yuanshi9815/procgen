#pragma once
#include "../vecoptions.h"

class DodgeballContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    DodgeballContextOption(/* args */);
    ~DodgeballContextOption();
    void parse_options(VecOptions *opts);
};