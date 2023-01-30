//// 2. Discount
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//
//{
//    int nitem, price, discount;
//    const int item = 1000;
//    
//    cout << "number of items? ";
//    cin >> nitem;
//    price = (nitem * item);
//    discount = (price * 0.9);
//
//    if (nitem > 0 && nitem < 10) {
//        cout << "price:" << price << "KRW" << "\n";
//    }
//
//    else if (nitem >= 10){
//        cout << "original price:" << price << "KRW" << "\n";
//        cout << "discounted price:" << discount << "KRW" << "\n";
//    }
//
//    else {
//        cout << "you didn't buy anything";
//    }
//
//    return 0;
//}