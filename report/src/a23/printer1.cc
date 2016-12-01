#include "main.ih"

void printer(ostream &stream,
	vector<string> const &wordList)
{
	stream << "size: " << wordList.size()
		<< " capacity: " << wordList.capacity() << '\n';
}
