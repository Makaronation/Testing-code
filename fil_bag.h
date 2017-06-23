#pragma once
#include <vector>
#include <iostream>

using namespace std;

class fil_bag
{
private:
	vector <int> vec;
public:

	fil_bag();
	bool insert(int);
	void remove(int);
	int size();
	void clear();
	bool inbag(int);
	int howmany(int);
	~fil_bag();
};

