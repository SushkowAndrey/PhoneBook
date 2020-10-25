#pragma once
#include <vector>
#include "RecordPhopneBook.h"

using namespace std;

class PhoneBook
{
public:
	vector <RecordPhopneBook> records;
	PhoneBook() {}
	PhoneBook(vector <RecordPhopneBook> records)
	{
		this->records = records;
	}
};

