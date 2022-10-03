#ifndef ARRAY_OF_POINTERS_H
#define ARRAY_OF_POINTERS_H

#include <vector>
#include <memory>
#include "Company.h"

typedef std::vector < std::shared_ptr<Company>> VecSharedPtrCompanies;

class ArrayOfPointers {
private:
	VecSharedPtrCompanies pointers;
public:
	ArrayOfPointers() {}

	void add(Company* company) {
		pointers.push_back(std::shared_ptr<Company>(company));
	}
	int getSize() const{
		return pointers.size();
	}
	Company* get(int index) const {
		return pointers.at(index).get();
	}
};



#endif // !ARRAY_OF_POINTERS_H
