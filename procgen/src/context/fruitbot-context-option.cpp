#include "fruitbot-context-option.h"
#include "../cpp-utils.h"

FruitbotContextOption::FruitbotContextOption(/* args */) {
}

FruitbotContextOption::~FruitbotContextOption() {
}

void FruitbotContextOption::parse_options(VecOptions *opts) {
    // opts->consume_float("start_r", &start_r);
    opts->consume_int("main_width", &main_width, true, 10);
    opts->consume_int("main_height", &main_height, true, 60);
    opts->consume_int("min_sep", &min_sep, true, 4);
    opts->consume_int("num_walls", &num_walls, true, 10);
    opts->consume_int("object_group_size", &object_group_size, true, 6);
    opts->consume_int("buf_h", &buf_h, true, 4);
    opts->consume_float("door_prob", &door_prob, true, .125);
    opts->consume_float("min_pct", &min_pct, true, .1); // If this value is high, the distance between two gate is big, thus aget need move more steps to get to the other gate.
    opts->consume_int("min_fruits", &min_fruits, true, 10);
    opts->consume_int("max_fruits", &max_fruits, true, 19);
    opts->consume_int("min_foods", &min_foods, true, 10);
    opts->consume_int("max_foods", &max_foods, true, 19);
}