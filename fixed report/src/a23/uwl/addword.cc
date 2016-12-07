#include "uniquewordlist.ih"

#include <algorithm>

void UniqueWordList::addWord(string word)
{
	if (!findWord(d_list, word))
		d_list.push_back(word);
}
