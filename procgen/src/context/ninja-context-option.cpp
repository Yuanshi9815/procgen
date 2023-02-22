#include "ninja-context-option.h"
#include "../cpp-utils.h"

NinjaContextOption::NinjaContextOption(/* args */) {
}

NinjaContextOption::~NinjaContextOption() {
}

void NinjaContextOption::parse_options(VecOptions *opts) {
    opts->consume_float("gravity", &gravity, true, .2);
    opts->consume_float("max_jump", &max_jump, true, 1.25);
    opts->consume_float("jump_charge_inc", &jump_charge_inc, true, .25);
    opts->consume_float("air_control", &air_control, true, .15);
    opts->consume_float("maxspeed", &maxspeed, true, .5);
    opts->consume_int("visibility", &visibility, true, 16);
    opts->consume_float("bomb_prob", &bomb_prob, true, .5); // The probability of a bomb appearing in each section
    opts->consume_int("max_num_sections", &max_num_sections, true, 6);
    opts->consume_int("max_gap_inc", &max_gap_inc, true, 1);
}

void NinjaContextOption::copy_options(NinjaContextOption *opts) {
    gravity = opts->gravity;
    max_jump = opts->max_jump;
    jump_charge_inc = opts->jump_charge_inc;
    air_control = opts->air_control;
    maxspeed = opts->maxspeed;
    visibility = opts->visibility;
    bomb_prob = opts->bomb_prob;
    max_num_sections = opts->max_num_sections;
    max_gap_inc = opts->max_gap_inc;
}