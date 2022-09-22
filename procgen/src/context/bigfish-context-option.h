#pragma once
#include "../vecoptions.h"

class BigfishContextOption
{
private:
    /* data */
public:
    float start_r;

    BigfishContextOption(/* args */);
    ~BigfishContextOption();
    void parse_options(VecOptions *opts);
};