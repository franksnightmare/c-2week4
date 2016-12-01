#include "uniquewordlist.ih"

#include <algorithm>

void UniqueWordList::addWord(string word)
{
	if (find(d_list.begin(), d_list.end(), word)
		== d_list.end())
		
		d_list.push_back(word);
}
