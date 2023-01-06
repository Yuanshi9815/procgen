#include "bossfight-context-option.h"
#include "../cpp-utils.h"
#include <iostream>

BossfightContextOption::BossfightContextOption(/* args */) {
}

BossfightContextOption::~BossfightContextOption() {
}

void BossfightContextOption::parse_options(VecOptions *opts) {
    opts->consume_int("completion_bonus", &completion_bonus, true, 10);
    opts->consume_int("positive_reward", &positive_reward, true, 1);

    opts->consume_float("boss_r", &boss_r, true, 3.0);
    opts->consume_int("player_bullet_vel", &player_bullet_vel, true, 1);
    opts->consume_int("bottom_margin", &bottom_margin, true, 6);

    opts->consume_float("boss_bullet_vel", &boss_bullet_vel, true, 0.5);
    opts->consume_int("max_extra_invulnerable", &max_extra_invulnerable, true, 1);

    opts->consume_int("boss_vel_timeout", &boss_vel_timeout, true, 50);
    opts->consume_int("boss_damage_timeout", &boss_damage_timeout, true, 40);

    opts->consume_int("max_rounds_num", &max_rounds_num, true, 5);
    opts->consume_int("min_rounds_num", &min_rounds_num, true, 1);
    opts->consume_int("max_round_health", &max_round_health, true, 9);
    opts->consume_int("min_round_health", &min_round_health, true, 1);

    opts->consume_bool("enable_attack_mode_0", &enable_attack_mode_0, true, true);
    opts->consume_bool("enable_attack_mode_1", &enable_attack_mode_1, true, true);
    opts->consume_bool("enable_attack_mode_2", &enable_attack_mode_2, true, true);
    opts->consume_bool("enable_attack_mode_3", &enable_attack_mode_3, true, true);
    
    opts->consume_bool("enable_shield", &enable_shield, true, true);

    opts->consume_int("max_barriers_num", &max_barriers_num, true, 3);
    opts->consume_int("min_barriers_num", &min_barriers_num, true, 1);

    std::cout << "boss_r: " << boss_r << std::endl;
    // opts->consume_int("fish_interval", &fish_interval);
}