#pragma once
#include "../vecoptions.h"

class BossfightContextOption
{
private:
    /* data */
public:
    int completion_bonus;
    int positive_reward;

    float boss_r; // The radius of the boss
    int player_bullet_vel; // The velocity of the player's bullet
    int bottom_margin; // The bottom margin of barriers

    int boss_vel_timeout; // The interval time of boss's velocity change
    int boss_damage_timeout; // The timeout of boss's round health decrease to 0


    BossfightContextOption(/* args */);
    ~BossfightContextOption();
    void parse_options(VecOptions *opts);
};