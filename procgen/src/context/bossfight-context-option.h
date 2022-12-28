#pragma once
#include "../vecoptions.h"

class BossfightContextOption {
  private:
    /* data */
  public:
    int completion_bonus;
    int positive_reward;

    float boss_r;          // The radius of the boss
    int player_bullet_vel; // The velocity of the player's bullet
    int bottom_margin;     // The bottom margin of barriers

    int boss_vel_timeout;    // The interval time of boss's velocity change
    int boss_damage_timeout; // The timeout of boss's round health decrease to 0

    int max_rounds_num;
    int min_rounds_num;
    int max_round_health;
    int min_round_health;

    bool enable_attack_mode_0;
    bool enable_attack_mode_1;
    bool enable_attack_mode_2;
    bool enable_attack_mode_3;

    bool enable_shield;

    BossfightContextOption(/* args */);
    ~BossfightContextOption();
    void parse_options(VecOptions *opts);
};