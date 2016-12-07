#include "main.ih"

#include <algorithm>

void reader(istream &stream, vector<string> &wordList)
{
	string word;
	while (stream >> word)
	{
		if (!findWord(wordList, word))
			wordList.push_back(word);
	}
}
