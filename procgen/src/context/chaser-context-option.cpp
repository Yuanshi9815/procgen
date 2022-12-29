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