#pragma once
#include "../vecoptions.h"

class NinjaContextOption
{
private:
    /* data */
public:
    float gravity;
    float max_jump;
    float jump_charge_inc;
    float air_control;
    float maxspeed;
    int visibility;
    float bomb_prob;
    int min_num_sections;
    int max_num_sections;
    int max_difficulty;
    int min_difficulty;
    int max_gap_inc;

    NinjaContextOption(/* args */);
    ~NinjaContextOption();
    void parse_options(VecOptions *opts);
    void copy_options(NinjaContextOption *opts);
    void init_episode_context(struct libenv_options *e_context);
};