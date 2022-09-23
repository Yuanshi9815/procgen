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
    opts->consume_float("start_r", &start_r);
    opts->consume_int("fish_interval", &fish_interval);

    opts->consume_int("completion_bonus", &completion_bonus);
    opts->consume_int("positive_reward", &positive_reward);

    opts->consume_float("fish_min_r", &fish_min_r);
    opts->consume_float("fish_max_r", &fish_max_r);

    opts->consume_int("fish_quota", &fish_quota);

    opts->consume_float("from_left_prob", &from_left_prob);
    opts->consume_float("min_speed", &min_speed);
    opts->consume_float("max_speed", &max_speed);
}