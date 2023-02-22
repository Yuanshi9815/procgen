#pragma once
#include "../vecoptions.h"

class HeistContextOption
{
private:
    /* data */
public:
    // float start_r;
    int world_dim;
    int min_maze_dim;
    int min_keys;
    int max_keys;

    HeistContextOption(/* args */);
    ~HeistContextOption();
    void parse_options(VecOptions *opts);
    void copy_options(HeistContextOption *opts);
};