#include "coinrun-context-option.h"
#include "../cpp-utils.h"

CoinrunContextOption::CoinrunContextOption(/* args */)
{
}
    

CoinrunContextOption::~CoinrunContextOption()
{
}

void CoinrunContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("visibility", &visibility, true, 13);
    opts->consume_float("maxspeed", &maxspeed, true, 0.5);
    opts->consume_int("main_width", &main_width, true, 64);
    opts->consume_int("main_height", &main_height, true, 64);
    opts->consume_bool("allow_pit", &allow_pit, true, true);
    opts->consume_bool("allow_crate", &allow_crate, true, true);
    opts->consume_bool("unenven_ground", &unenven_ground, true, true);
    opts->consume_bool("allow_lava", &allow_lava, true, true);
    opts->consume_bool("allow_saw", &allow_saw, true, true);
    opts->consume_bool("allow_monsters", &allow_monsters, true, false);
    opts->consume_int("min_crate_height", &min_crate_height, true, 1);
    opts->consume_int("max_crate_height", &max_crate_height, true, 3);
}

void CoinrunContextOption::copy_options(CoinrunContextOption *opts)
{
    opts->visibility = opts->visibility;
    opts->maxspeed = opts->maxspeed;
    opts->main_width = opts->main_width;
    opts->main_height = opts->main_height;
    opts->allow_pit = opts->allow_pit;
    opts->allow_crate = opts->allow_crate;
    opts->unenven_ground = opts->unenven_ground;
    opts->allow_lava = opts->allow_lava;
    opts->allow_saw = opts->allow_saw;
    opts->allow_monsters = opts->allow_monsters;
    opts->min_crate_height = opts->min_crate_height;
    opts->max_crate_height = opts->max_crate_height;
}