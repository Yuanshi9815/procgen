#include "bossfight-context-option.h"
#include "../cpp-utils.h"
#include <iostream>

BossfightContextOption::BossfightContextOption(/* args */)
{
}
    

BossfightContextOption::~BossfightContextOption()
{
}

void BossfightContextOption::parse_options(VecOptions *opts)
{
    opts->consume_int("completion_bonus", &completion_bonus, true, 10);
    opts->consume_int("positive_reward", &positive_reward, true, 1);

    opts->consume_float("boss_r", &boss_r, true, 3.0);
    opts->consume_int("player_bullet_vel", &player_bullet_vel, true, 1);
    opts->consume_int("bottom_margin", &bottom_margin, true, 6);

    opts->consume_int("boss_vel_timeout", &boss_vel_timeout, true, 50);
    opts->consume_int("boss_damage_timeout", &boss_damage_timeout, true, 40);
    
    std::cout << "boss_r: " << boss_r << std::endl;
    // opts->consume_int("fish_interval", &fish_interval);
}