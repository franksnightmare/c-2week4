#include "main.ih"

void printer(ostream &stream,
	UniqueWordList const &wordList)
{
	stream << "size: " << wordList.size()
		<< " capacity: " << wordList.capacity() << '\n';
}
