// Let us hope for a different outcome!

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#ifndef __FIL_BAG_H_INCLUDED__   // if x.h hasn't been included yet...
#define __FIL_BAG_H_INCLUDED__   //   #define this so the compiler knows it has been included
#include "fil_bag.h"



using namespace std;

int main(void)
{
	fil_bag bag1;
	bag1.insert(32);
	cout << bag1.size() << endl;
	bag1.insert(32);
	cout << bag1.inbag(32) << endl;
}

#endif