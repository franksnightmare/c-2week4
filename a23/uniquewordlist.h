#ifndef UNIQUEWORDLIST_H_
#define UNIQUEWORDLIST_H_

#include <vector>
#include <string>

class UniqueWordList
{
	std::vector<std::string> d_list;
	
	public:
		UniqueWordList() = default;
		UniqueWordList(UniqueWordList const &uwl) = default;
		
		UniqueWordList &operator=(UniqueWordList const &uwl);
		
		void swap(UniqueWordList &uwl);
		
		void addWord(std::string word);
		
		std::size_t size();
		std::size_t capacity();
		
		std::size_t size() const;
		std::size_t capacity() const;
};

#endif
