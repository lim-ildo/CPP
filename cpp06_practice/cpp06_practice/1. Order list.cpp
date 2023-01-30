//// 1.Order list
//
//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//	int menu; 
//	int buggers = 0; 
//	int fries = 0; 
//	int cokes = 0;
//
//	cout << "Select a menu (1-4)" << endl;
//	
//	while (true)
//	{
//		cout << "1) Bugger, 2) Fries, 3) Coke, 4) Finish" << endl;
//		cin >> menu;
//
//		if (menu == 1)
//		{
//			cout << "You've ordered a Bugger\n" << endl;
//			buggers++;
//		}
//		else if (menu == 2)
//		{
//			cout << "You've ordered a Fries\n" << endl;
//			fries++;
//		}
//
//		else if (menu == 3)
//		{
//			cout << "You've ordered a Coke\n" << endl;
//			cokes++;
//		}
//
//		else if (menu == 4)
//		{
//			cout << "Your order has been received!\n" << endl;
//			break;
//		}
//
//		else
//		{
//			cout << "Wrong input\n" << endl;
//		}
//	}
//	
//	cout << "Your order" << endl;
//
//	if (buggers > 0) 
//	{
//		cout << "1) Bugger*" << buggers << endl;
//	}
//	if (fries > 0)
//	{
//		cout << "2) Fries*" << fries << endl;
//	}
//	if (cokes > 0)
//	{
//		cout << "3) Coke*" << cokes << endl;
//	}
//}