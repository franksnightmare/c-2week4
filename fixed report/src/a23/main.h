#ifndef MAIN_H_
#define MAIN_H_

#include <iostream>
#include "uwl/uniquewordlist.h"

void reader(std::istream &stream,
	std::vector<std::string> &wordList);
void printer(std::ostream &stream,
	std::vector<std::string> const &wordList);
void printer(std::ostream &stream,
	UniqueWordList const &wordList);

#endif
