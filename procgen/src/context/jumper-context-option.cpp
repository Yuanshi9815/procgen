#include "jumper-context-option.h"
#include "../cpp-utils.h"

JumperContextOption::JumperContextOption(/* args */) {
}

JumperContextOption::~JumperContextOption() {
}

void JumperContextOption::parse_options(VecOptions *opts) {
    opts->consume_int("world_dim", &world_dim, true, 20);
    opts->consume_int("visibility", &visibility, true, 12);
    opts->consume_int("compass_dim", &compass_dim, true, 3);
    opts->consume_int("jump_cooldown", &jump_cooldown, true, 3);
    opts->consume_int("max_jump_count", &max_jump_count, true, 2);
}