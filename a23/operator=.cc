#include "uniquewordlist.ih"

UniqueWordList &UniqueWordList::operator=(UniqueWordList const &uwl)
{
	UniqueWordList copy(uwl);
	swap(copy);
	return *this;
}
