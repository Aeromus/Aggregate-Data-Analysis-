#pragma once

#include <string>
#include <dirent.h>
#include <fstream>

#include "Employment.hpp"

/* implement these functions */
Employment* build_empl_list(std::string filename);

void print_every_empl(Employment *emp);

int list_length(Employment *emp);

void append_lists(Employment* head, Employment* tail);
