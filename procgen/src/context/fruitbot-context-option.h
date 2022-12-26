#pragma once
#include "../vecoptions.h"

class FruitbotContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    FruitbotContextOption(/* args */);
    ~FruitbotContextOption();
    void parse_options(VecOptions *opts);
};