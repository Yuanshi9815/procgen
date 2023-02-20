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

void BigfishContextOption::copy_options(BigfishContextOption *opts)
{
    start_r = opts->start_r;
    fish_prob = opts->fish_prob;
    completion_bonus = opts->completion_bonus;
    positive_reward = opts->positive_reward;
    fish_min_r = opts->fish_min_r;
    fish_max_r = opts->fish_max_r;
    fish_quota = opts->fish_quota;
    from_left_prob = opts->from_left_prob;
    min_speed = opts->min_speed;
    max_speed = opts->max_speed;
}