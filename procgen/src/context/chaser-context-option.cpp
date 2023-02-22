#include "chaser-context-option.h"
#include "../cpp-utils.h"

ChaserContextOption::ChaserContextOption(/* args */)
{
}
    

ChaserContextOption::~ChaserContextOption()
{
}

void ChaserContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("maze_dim", &maze_dim, true, 11);
    opts->consume_int("total_enemies", &total_enemies, true, 1);
    // opts->consume_int("extra_orb_sign", &extra_orb_sign, true, 1);

    opts->consume_int("eat_time", &eat_time, true, 75);
    opts->consume_int("egg_time", &egg_time, true, 50);

    opts->consume_int("total_orbs", &total_orbs, true, 4);
}

void ChaserContextOption::copy_options(ChaserContextOption *opts)
{
    maze_dim = opts->maze_dim;
    total_enemies = opts->total_enemies;
    // opts->extra_orb_sign = opts->extra_orb_sign;

    eat_time = opts->eat_time;
    egg_time = opts->egg_time;

    total_orbs = opts->total_orbs;
}