#include "heist-context-option.h"
#include "../cpp-utils.h"

HeistContextOption::HeistContextOption(/* args */)
{
}
    

HeistContextOption::~HeistContextOption()
{
}

void HeistContextOption::parse_options(VecOptions *opts)
{
    // opts->consume_float("start_r", &start_r);
    opts->consume_int("world_dim", &world_dim, true, 9);
    opts->consume_int("min_maze_dim", &min_maze_dim, true, 5); // 5 is the min maze dim in the original game [5, world_dim].
    opts->consume_int("min_keys", &min_keys, true, 1);
    opts->consume_int("max_keys", &max_keys, true, 3);  // 3 is the max number of keys in the original game. [1, 3]
}