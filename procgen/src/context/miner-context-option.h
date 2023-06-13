#pragma once
#include "../vecoptions.h"

class MinerContextOption {
  private:
    /* data */
  public:
    float diamond_pct;
    float boulder_pct;
    int world_dim;

    float completion_bonus;
    float diamond_reward;

    MinerContextOption(/* args */);
    ~MinerContextOption();
    void parse_options(VecOptions *opts);
    void copy_options(MinerContextOption *opts);
};