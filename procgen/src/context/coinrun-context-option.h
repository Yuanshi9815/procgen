#pragma once
#include "../vecoptions.h"

class CoinrunContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    CoinrunContextOption(/* args */);
    ~CoinrunContextOption();
    void parse_options(VecOptions *opts);
};