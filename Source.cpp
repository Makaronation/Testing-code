// Let us hope for a different outcome!

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class bag
{


public:
	vector <int> vec;

	bag()
	{
		cout << "Bag initialized" << endl;
	}

	bool insert(int member)
	{
		vec.insert(vec.begin(), member);
		return true;
	}
	void remove(int member)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (member == vec.at(i))
			{
				vec.erase(vec.begin() + i);
			}
		}
	}
	int size()
	{
		return vec.size();
	}
	void clear()
	{
		while (!vec.empty())
		{
			vec.pop_back();
		}
	}
	bool inbag(int member)
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (member == vec.at(i))
			{
				return true;
			}
		}
	}
	int howmany(int member)
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
};

int main(void)
{
	bag bag1;
	bag1.insert(32);
	cout << bag1.size() << endl;
	bag1.insert(32);
	cout << bag1.inbag(32) << endl;
}