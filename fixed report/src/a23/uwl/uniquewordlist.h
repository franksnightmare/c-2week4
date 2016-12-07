#ifndef UNIQUEWORDLIST_H_
#define UNIQUEWORDLIST_H_

#include <vector>
#include <string>

class UniqueWordList
{
	std::vector<std::string> d_list;
	
	public:
		UniqueWordList &operator=(
			UniqueWordList const &uwl);
		
		void swap(UniqueWordList &uwl);
		
		void addWord(std::string word);
		
		std::size_t size();
		std::size_t capacity();
		
		std::size_t size() const;
		std::size_t capacity() const;
};

bool findWord(std::vector<std::string> &wordList,
	std::string word);

#endif
