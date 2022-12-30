#pragma once
#include "../vecoptions.h"

class MazeContextOption
{
private:
    /* data */
public:
    int world_dim;
    int min_maze_dim;
    int max_maze_dim;

    MazeContextOption(/* args */);
    ~MazeContextOption();
    void parse_options(VecOptions *opts);
};