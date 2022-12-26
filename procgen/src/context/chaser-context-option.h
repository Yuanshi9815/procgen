#pragma once
#include "../vecoptions.h"

class ChaserContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    ChaserContextOption(/* args */);
    ~ChaserContextOption();
    void parse_options(VecOptions *opts);
};