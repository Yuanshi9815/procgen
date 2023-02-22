#include "maze-context-option.h"
#include "../cpp-utils.h"

MazeContextOption::MazeContextOption(/* args */)
{
}
    

MazeContextOption::~MazeContextOption()
{
}

void MazeContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("world_dim", &world_dim, true, 15);
    opts->consume_int("min_maze_dim", &min_maze_dim, true, 3);
    opts->consume_int("max_maze_dim", &max_maze_dim, true, 15);
}

void MazeContextOption::copy_options(MazeContextOption *opts)
{
    opts->world_dim = opts->world_dim;
    opts->min_maze_dim = opts->min_maze_dim;
    opts->max_maze_dim = opts->max_maze_dim;
}