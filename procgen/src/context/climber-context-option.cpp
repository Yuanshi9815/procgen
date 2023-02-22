#include "climber-context-option.h"
#include "../cpp-utils.h"

ClimberContextOption::ClimberContextOption(/* args */)
{
}
    

ClimberContextOption::~ClimberContextOption()
{
}

void ClimberContextOption::parse_options(VecOptions *opts)
{
    opts->consume_float("gravity", &gravity, true, 0.2);
    opts->consume_float("max_jump", &max_jump, true, 1.5);
    opts->consume_float("air_control", &air_control, true, 0.15);
    opts->consume_float("maxspeed", &maxspeed, true, 0.5);
    opts->consume_int("min_platforms", &min_platforms, true, 1);
    opts->consume_int("max_platforms", &max_platforms, true, 10);
    opts->consume_float("enemy_prob", &enemy_prob, true, 0.3);
    opts->consume_float("coin_prob", &coin_prob, true, 0.5);
    opts->consume_int("max_plat_len", &max_plat_len, true, 11);
    opts->consume_int("min_plat_len", &min_plat_len, true, 2);
    opts->consume_int("world_width", &world_width, true, 16);
    opts->consume_int("margin_bottom", &margin_bottom, true, 5);
    // opts->consume_float("start_r", &start_r);
    // opts->consume_int("fish_interval", &fish_interval);
}

void ClimberContextOption::copy_options(ClimberContextOption *opts)
{
    opts->gravity = opts->gravity;
    opts->max_jump = opts->max_jump;
    opts->air_control = opts->air_control;
    opts->maxspeed = opts->maxspeed;
    opts->min_platforms = opts->min_platforms;
    opts->max_platforms = opts->max_platforms;
    opts->enemy_prob = opts->enemy_prob;
    opts->coin_prob = opts->coin_prob;
    opts->max_plat_len = opts->max_plat_len;
    opts->min_plat_len = opts->min_plat_len;
    opts->world_width = opts->world_width;
    opts->margin_bottom = opts->margin_bottom;
    // opts->start_r = opts->start_r;
    // opts->fish_interval = opts->fish_interval;
}