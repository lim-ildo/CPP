//// 3. Lotto
//
//#include <iostream>
//#include <random>
//
//using namespace std;
//
//int main() {
//	random_device rd; // random seed
//	mt19937 gen(rd()); // random seed init
//	int n1, n2, n3, n4, n5, n6;
//	n1 = n2 = n3 = n4 = n5 = n6 = 0;
//	int temp = 0;
//	
//	while(true) {
//		temp = (gen() % 45 + 1);
//		if (n1 == 0) 
//		{
//			n1 = temp;
//			continue;
//		}
//
//		if (n2 == 0)
//		{
//			if (n1 != temp)
//			{
//				n2 = temp;
//			} continue;	
//		}
//		
//		if (n3 == 0)
//		{
//			if (n1 != temp && n2 != temp)
//			{
//				n3 = temp;
//			}continue;
//		}
//
//		if (n4 == 0)
//		{
//			if (n1 != temp && n2 != temp && n3 != temp)
//			{
//				n4 = temp;
//			}continue;
//		}
//
//		if (n5 == 0)
//		{
//			if (n1 != temp && n2 != temp && n3 != temp && n4 != temp)
//			{
//				n5 = temp;
//			}continue;
//		}
//
//		if (n6 == 0)
//		{
//			if (n1 != temp && n2 != temp && n3 != temp && n4 != temp && n5 != temp)
//			{
//				n6 = temp;
//			}continue;
//		}
//
//		if (n1 != 0 && n2 != 0 && n3 != 0 && n4 != 0 && n5 != 0 && n6 != 0) {
//			break;
//		}	
//	}
//	cout << n1 << "\n" << n2 << "\n" << n3 << "\n" << n4 << "\n" << n5 << "\n" << n6 << "\n";
//
//	return 0;
//}
