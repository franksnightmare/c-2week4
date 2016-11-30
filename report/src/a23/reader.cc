#include "main.ih"

#include <algorithm>

void reader(istream &stream, vector<string> &wordList)
{
	string word;
	while (stream >> word)
	{
		if (find(wordList.begin(), wordList.end(), word) == wordList.end())
			wordList.push_back(word);
	}
}
