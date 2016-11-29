#include <unordered_map>
#include <vector>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	unordered_multimap<string, string> container;
	
	// fill the container with data (no need to implement this)
	
	size_t nUniqueKeys = 0;
	Vector<string> keys;
	for (size_t bucket = 0; bucket != container.bucket_count(); ++bucket)
	{
		for (auto it = container.begin(bucket); it != container.end(bucket); ++it)
		{
			if (find(keys.begin(), keys.end(), it->first) == keys.end())
				keys.push_back(it->first);
				++nUniqueKeys;
		}
	}
	
	cout << "There are " << nUniqueKeys << " in the container\n";
}
