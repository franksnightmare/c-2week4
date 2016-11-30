#include <unordered_map>
#include <set>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	unordered_multimap<string, string> container;
	
	// fill the container with data
	// (no need to implement this)
	
	
	set<string> keys;
	for (size_t bucket = 0;
		bucket != container.bucket_count(); ++bucket)
	{
		for (auto it = container.begin(bucket);
			it != container.end(bucket); ++it)
			
			keys.insert(it->first)
	}
	size_t nUniqueKeys = keys.size();
	
	cout << "There are " << nUniqueKeys
		<< " in the container\n";
}
