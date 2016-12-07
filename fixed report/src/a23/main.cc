#include "main.ih"

int main(int argc, char **argv)
{
	vector<string> wordList;
	reader(cin, wordList);
	cout << "size: " << wordList.size()
		<< " capacity: " << wordList.capacity() << '\n';
	
	wordList.push_back("test");
	printer(cout, wordList);
	
	wordList.shrink_to_fit();
	printer(cout, wordList);
	
	UniqueWordList uwl;
	for (auto it = wordList.begin(); it != wordList.end(); ++it)
		uwl.addWord(*it);
	cout << '\n';
	
	printer(cout, uwl);
	
	uwl.addWord("west");
	printer(cout, uwl);
	
	uwl = uwl;
	printer(cout, uwl);
}
