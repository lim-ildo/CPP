//// 3. Digits three
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string num;
//int digit;
//int cmpl; // comma place
//
//void comma(string num);
//
//int main()
//{
//	
//	cout << "input number:";
//	cin >> num;
//
//	comma(num);
//
//		
//	
//	return 0;
//}
//
//void comma(string num)
//{
//	
//	
//	digit = num.length();
//	
//	cmpl = (digit % 3);
//
//	for (int i = 0; i < digit; i++)
//	{
//		if (cmpl > 0)
//		{
//			if (i % 3 == cmpl)
//			{
//				cout << ",";
//			}
//		}
//
//		else
//			if (i > 0 && i % 3 == cmpl)
//			{
//				cout << ",";
//			}
//	
//		cout << num[i];
//	}
//}