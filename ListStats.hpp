#pragma once

#include "Employment.hpp"

/* implement these functions */
unsigned long total_annual_wages(Employment *emp);

unsigned long min_annual_wages(Employment *emp);

unsigned long max_annual_wages(Employment *emp);

float stdev_annual_wages(Employment *emp);

int unique_annual_wages(Employment *emp);

int distinct_annual_wages(Employment *emp);
