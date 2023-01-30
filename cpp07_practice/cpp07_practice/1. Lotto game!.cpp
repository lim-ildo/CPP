//1. Lotto game!

#include <iostream>
#include <random>

using namespace std;

int a, b, c, d, e, f;
int A, B, C, D, E, F;
int match = 0;

void lotto();
void comparison();

int main()
{
	cout << "Guese lottery numbers: " << endl;
	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;
	cin >> E;
	cin >> F;

	cout << endl;

	cout << "Number:";
	lotto(); 
	comparison();
	
	return 0;
}

void lotto()
{
	random_device rd;
	mt19937 gen(rd());


	a = gen() % 45 + 1; b = gen() % 45 + 1; c = gen() % 45 + 1;
	d = gen() % 45 + 1; e = gen() % 45 + 1; f = gen() % 45 + 1;

	while (true) {

		if (a == b || a == c || a == d || a == e || a == f) continue;
		if (b == c || b == d || b == e || b == f) continue;
		if (c == d || c == e || c == f) continue;
		if (d == e || d == f) continue;
		if (e == f) continue;
		else break;
	}

	cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
}

void comparison()
{
	if (A == a || A == b || A == c || A == d || A == e || A == f) match++;
	if (B == a || B == b || B == c || B == d || B == e || B == f) match++;
	if (C == a || C == b || C == c || C == d || C == e || C == f) match++;
	if (D == a || D == b || D == c || D == d || D == e || D == f) match++;
	if (E == a || E == b || E == c || E == d || E == e || E == f) match++;
	if (F == a || F == b || F == c || F == d || F == e || F == f) match++;

	if (match == 6) cout << "You match 6 numbers! You are in 1th place!" << endl;
	else if (match == 5) cout << "You match 5 numbers! You are in 2th place!" << endl;
	else if (match == 4) cout << "You match 4 numbers! You are in 3th place!" << endl;
	else if (match == 3) cout << "You match 3 numbers! You are in 4th place!" << endl;
	else if (match == 2) cout << "You match 2 numbers! You are in 5th place!" << endl;
	else if (match == 1) cout << "You match 1 numbers! You are in 6th place!" << endl;
	else cout << "You don't match numbers!" << endl;

}
