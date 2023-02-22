#include "miner-context-option.h"
#include "../cpp-utils.h"

MinerContextOption::MinerContextOption(/* args */) {
}

MinerContextOption::~MinerContextOption() {
}

void MinerContextOption::parse_options(VecOptions *opts) {
    opts->consume_int("world_dim", &world_dim, true, 15);

    opts->consume_float("diamond_pct", &diamond_pct, true, 12 / 400.);
    opts->consume_float("boulder_pct", &boulder_pct, true, 80 / 400.);
}

void MinerContextOption::copy_options(MinerContextOption *opts) {
    world_dim = opts->world_dim;
    diamond_pct = opts->diamond_pct;
    boulder_pct = opts->boulder_pct;
}