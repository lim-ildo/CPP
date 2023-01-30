//// 3. Digits two
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//
//{
//    int num, one;
//    float thd, hud, ten;
//
//    std::cout << "Input your number: ";
//    cin >> num;
//      
//    thd = (float)num / 1000;
//    hud = (float)(num % 1000) / 100;
//    ten = (float)((num % 1000) % 100) / 10;
//    one = ((num % 1000) % 100) % 10;
//
//    if (thd >= 1) {
//        cout << "thousands: ";
//        switch ((int)thd) {
//        case 1:
//            cout << "one" << endl;
//
//            break;
//        case 2:
//            cout << "two" << endl;
//            break;
//        case 3:
//            cout << "three" << endl;
//            break;
//        case 4:
//            cout << "four" << endl;
//            break;
//        case 5:
//            cout << "five" << endl;
//            break;
//        case 6:
//            cout << "six" << endl;
//            break;
//        case 7:
//            cout << "seven" << endl;
//            break;
//        case 8:
//            cout << "eight" << endl;
//            break;
//        case 9:
//            cout << "nine" << endl;
//            break;
//        case 0:
//            cout << "zero" << endl;
//            break;
//
//        default:
//            break;
//        }
//    }
//    
//    if (hud >= 1) {
//        cout << "hundreds: ";
//        switch ((int)hud) {
//        case 1:
//            cout << "one" << endl;
//
//            break;
//        case 2:
//            cout << "two" << endl;
//            break;
//        case 3:
//            cout << "three" << endl;
//            break;
//        case 4:
//            cout << "four" << endl;
//            break;
//        case 5:
//            cout << "five" << endl;
//            break;
//        case 6:
//            cout << "six" << endl;
//            break;
//        case 7:
//            cout << "seven" << endl;
//            break;
//        case 8:
//            cout << "eight" << endl;
//            break;
//        case 9:
//            cout << "nine" << endl;
//            break;
//        case 0:
//            cout << "zero" << endl;
//            break;
//
//        default:
//            break;
//        }
//    }
//    
//    if (ten >= 1) {
//        cout << "tens: ";
//        switch ((int)ten) {
//        case 0:
//            cout << "zero" << endl;
//            break;
//        case 1:
//            cout << "one" << endl;
//
//            break;
//        case 2:
//            cout << "two" << endl;
//            break;
//        case 3:
//            cout << "three" << endl;
//            break;
//        case 4:
//            cout << "four" << endl;
//            break;
//        case 5:
//            cout << "five" << endl;
//            break;
//        case 6:
//            cout << "six" << endl;
//            break;
//        case 7:
//            cout << "seven" << endl;
//            break;
//        case 8:
//            cout << "eight" << endl;
//            break;
//        case 9:
//            cout << "nine" << endl;
//            break;
//
//        default:
//            break;
//        }
//    }
//    
//    if (one >= 0) {
//        cout << "ones: ";
//        switch (one) {
//        case 0:
//            cout << "zero" << endl;
//            break;
//        case 1:
//            cout << "one" << endl;
//
//            break;
//        case 2:
//            cout << "two" << endl;
//            break;
//        case 3:
//            cout << "three" << endl;
//            break;
//        case 4:
//            cout << "four" << endl;
//            break;
//        case 5:
//            cout << "five" << endl;
//            break;
//        case 6:
//            cout << "six" << endl;
//            break;
//        case 7:
//            cout << "seven" << endl;
//            break;
//        case 8:
//            cout << "eight" << endl;
//            break;
//        case 9:
//            cout << "nine" << endl;
//            break;
//
//        default:
//            break;
//        }
//    }
//   
//    return 0;
//}