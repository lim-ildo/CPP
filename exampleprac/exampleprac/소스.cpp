#include <iostream>
#include <random>
#include <climits>
#include <string>

using namespace std;

//#define MAKE_ADD_F(T) T add(T a, T b) {return a+b; }

//MAKE_ADD_F(int)
//MAKE_ADD_F(double)


int main()
{
	int number = 9;
	bool even;
	bool odd;

	(number % 2 == 0) ? even = true : even = false;
	cout << even << endl;

	odd = (number % 2 != 0) ? true : even = false;
	cout << odd << endl;
	return 0;
} 

