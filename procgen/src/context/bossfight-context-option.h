#pragma once
#include "../vecoptions.h"

class BossfightContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    BossfightContextOption(/* args */);
    ~BossfightContextOption();
    void parse_options(VecOptions *opts);
};