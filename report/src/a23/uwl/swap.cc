#include "uniquewordlist.ih"

#include <cstring>

void UniqueWordList::swap(UniqueWordList &uwl)
{
	char bytes[sizeof(UniqueWordList)];
	memcpy(bytes, this, sizeof(UniqueWordList));
	memcpy(this, &uwl, sizeof(UniqueWordList));
	memcpy(&uwl, bytes, sizeof(UniqueWordList));
}
