//// 3. digits three
//#include <iostream>
//#include <string>
//using namespace std;
//
//int digit, cmpl;
//string num;
//
//void comma(int digit, int cmp, string num);
//
//int main()
//{
//    
//    cout << "input number: ";
//    cin >> num;
//    if (num[0] == '-') {
//        digit = num.length() - 1;
//    }
//    else digit = num.length();
//    cmpl = digit % 3;
//
//    if (digit == num.length()) {
//        comma(digit, cmpl, num);
//    }
//    else {
//        cout << num[0];
//        comma(digit, cmpl, num);
//    }
//}
//
//void comma(int a, int b, string num) {
//    for (int i = 0; i < a; i++) {
//
//        if (a == 4) {
//            if (i % 3 == b)
//                cout << ",";
//        }
//        else {
//            if (i > 0 && i % 3 == b)
//                cout << ",";
//        }
//        if (a == num.length())
//            cout << num[i];
//        else
//            cout << num[i + 1];
//    }
//}
