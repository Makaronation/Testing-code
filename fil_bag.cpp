#include "fil_bag.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

fil_bag::fil_bag()
{
	cout <<"Bag at memory address: "<< this <<" initialized" << endl;
}

bool fil_bag::insert(int member)
{
	vec.insert(vec.begin(), member);
	return true;
}
void fil_bag:: remove(int member)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (member == vec.at(i))
		{
			vec.erase(vec.begin() + i);
		}
	}
}
int fil_bag:: size()
{
	return vec.size();
}
void  fil_bag::clear()
{
	while (!vec.empty())
	{
		vec.pop_back();
	}
}
bool fil_bag::inbag(int member)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (member == vec.at(i))
		{
			return true;
		}
	}
	return false;
}
int  fil_bag::howmany(int member)
{
	int count = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (member == vec.at(i))
		{
			count++;
		}
	}
	return count;
}

fil_bag::~fil_bag()
{
	cout <<"Bag at memory address: "<< this << " destroyed." << endl;
}
