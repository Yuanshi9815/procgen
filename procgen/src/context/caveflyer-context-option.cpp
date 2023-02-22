#include "caveflyer-context-option.h"
#include "../cpp-utils.h"

CaveflyerContextOption::CaveflyerContextOption(/* args */)
{
}
    

CaveflyerContextOption::~CaveflyerContextOption()
{
}

void CaveflyerContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("world_dim", &world_dim, true, 30);
    opts->consume_int("objects_factor", &objects_factor, true, 3);

    opts->consume_bool("enable_obstacle", &enable_obstacle, true, true);
    opts->consume_bool("enable_target", &enable_target, true, true);
    opts->consume_bool("enable_enemy", &enable_enemy, true, true);

    opts->consume_float("enemy_v_fast", &enemy_v_fast, true, .2);
    opts->consume_float("enemy_v_slow", &enemy_v_slow, true, .1);
}

void CaveflyerContextOption::copy_options(CaveflyerContextOption *opts)
{
    world_dim = opts->world_dim;
    objects_factor = opts->objects_factor;

    enable_obstacle = opts->enable_obstacle;
    enable_target = opts->enable_target;
    enable_enemy = opts->enable_enemy;

    enemy_v_fast = opts->enemy_v_fast;
    enemy_v_slow = opts->enemy_v_slow;
}