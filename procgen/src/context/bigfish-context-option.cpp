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
}