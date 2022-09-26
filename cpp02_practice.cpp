//1. Simple calculator



#include <iostream>

using namespace std;



int main()

{

	int input1, input2, Add, Sub, Mul, Div;



	cout << "input1: ";

	cin >> input1;



	cout << "input2: ";

	cin >> input2;



	Add = input1 + input2;

	Sub = input1 - input2;

	Mul = input1 * input2;

	Div = input1 / input2;



	cout << "Add: " << Add << endl;

	cout << "Sub: " << Sub << endl;

	cout << "Mul: " << Mul << endl;

	cout << "Div: " << Div << endl;



	return 0;

}



// 2. ID card (?)



#include <iostream>

using namespace std;



int main()

{

	int number;

	string name1, name2;



	cout << "Your student number: ";

	cin >> number;



	cout << "Your name: ";

	cin >> name1;

	cin >> name2;



	cout << "My name is " << name1 << " " << name2 << "." << endl;

	cout << "My student ID is " << number << "." << endl;

	cout << "My name and ID is " << name1 << " " << name2 << " and " << number << "." << endl;



	return 0;

}



// 3. Wrong number



#include <iostream>

using namespace std;



int main()

{

	int var;



	cout << "input a string variable: ";

	cin >> var;



	cout << "result: " << var << endl;

	return 0;



	// answer: 0이 출력된다.

}



// 4. How old are you?



#include <iostream>

using namespace std;



int main()

{

	int age;

	int months = 12;



	cout << "Enter your age: ";

	cin >> age;



	int Mage = age * months;



	cout << "Your age in months is " << Mage << "." << endl;

	return 0;

}



// 5. Celsius and Fahrenheit



#include <iostream>

using namespace std;



int main()

{

	int Celsius, Fahrenheit;



	cout << "Plese enter a Celsius value: ";

	cin >> Celsius;



	Fahrenheit = (1.8 * Celsius) + 32.0;



	cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;

	return 0;

}