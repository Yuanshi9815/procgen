#pragma once
#include "../vecoptions.h"

class CoinrunContextOption
{
private:
    /* data */
public:
    int visibility;
    float maxspeed;
    int main_width;
    int main_height;

    bool allow_pit;
    bool allow_crate;
    bool unenven_ground;
    bool allow_lava;
    bool allow_saw;
    bool allow_monsters;

    int min_crate_height;
    int max_crate_height;


    CoinrunContextOption(/* args */);
    ~CoinrunContextOption();
    void parse_options(VecOptions *opts);
    void copy_options(CoinrunContextOption *opts);
};