#include "uniquewordlist.ih"

bool findWord(vector<string> &wordList,
	string word)
{
	for (auto it = wordList.begin();
		it != wordList.end(); ++it)
	{
		if (*it == word)
			return true;
	}

	return false;
}
