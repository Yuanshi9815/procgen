#include "bigfish-context-option.h"
#include "../cpp-utils.h"

BigfishContextOption::BigfishContextOption(/* args */)
{
}

BigfishContextOption::~BigfishContextOption()
{
}

void BigfishContextOption::parse_options(VecOptions *opts)
{
    opts->consume_float("start_r", &start_r, true, 1);
    opts->consume_float("fish_prob", &fish_prob, true, .1);

    opts->consume_int("completion_bonus", &completion_bonus, true, 10);
    opts->consume_int("positive_reward", &positive_reward, true, 1);

    opts->consume_float("fish_min_r", &fish_min_r, true, .25);
    opts->consume_float("fish_max_r", &fish_max_r, 2.);

    opts->consume_int("fish_quota", &fish_quota, true, 30);

    opts->consume_float("from_left_prob", &from_left_prob, .5);
    opts->consume_float("min_speed", &min_speed, true, .15);
    opts->consume_float("max_speed", &max_speed, true, .4);
}