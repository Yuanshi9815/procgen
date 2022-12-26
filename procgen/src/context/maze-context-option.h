#pragma once
#include "../vecoptions.h"

class MazeContextOption
{
private:
    /* data */
public:
    // float start_r;
    // int fish_interval;

    MazeContextOption(/* args */);
    ~MazeContextOption();
    void parse_options(VecOptions *opts);
};