#include "leaper-context-option.h"
#include "../cpp-utils.h"

LeaperContextOption::LeaperContextOption(/* args */)
{
}
    

LeaperContextOption::~LeaperContextOption()
{
}

void LeaperContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("world_dim", &world_dim, true, 9);
    opts->consume_float("min_car_speed", &min_car_speed, true, 0.05f);
    opts->consume_float("max_car_speed", &max_car_speed, true, 0.2f);
    opts->consume_float("min_log_speed", &min_log_speed, true, 0.05f);
    opts->consume_float("max_log_speed", &max_log_speed, true, 0.1f);
    opts->consume_int("max_extra_space", &max_extra_space, true, 0);
    opts->consume_int("max_road", &max_road, true, 3);
    opts->consume_int("min_road", &min_road, true, 0);
    opts->consume_int("max_log", &max_log, true, 3);
    opts->consume_int("min_log", &min_log, true, 0);
    opts->consume_float("car_left_prob", &car_left_prob, true, .5f);
}