//// 3. ipower()
//
//#include <iostream>
//
//using namespace std;
//
//int ipower(int n, int k);
//
//int main()
//{
//	int num;
//	cout << "input number: ";
//	cin >> num;
//
//	for (int k = 0; k <= 10; k++)
//	{
//		cout << num << "^" << k << " = " << ipower(num, k) << endl;
//	}
//	
//	return 0;
//}
//
//int ipower(int n, int k)
//{
//	int result = 1;
//	for (int i = 0; i < k; i++)
//	{
//		result = result * n;
//	}
//
//	return result;
//}