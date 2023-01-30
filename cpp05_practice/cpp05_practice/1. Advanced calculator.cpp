// 1. Advanced calculator

//#include <iostream>
//
//using namespace std;
//
//int main()
//
//{
//    cout << "--------------" << "\n";
//    cout << "+ : add"  << "\n";
//    cout << "- : subtract" << "\n";
//    cout << "* : multiply" << "\n";
//    cout << "/ : divide" << "\n";
//    cout << "q : quit" << "\n";
//    cout << "--------------" << "\n";
//
//       
//
//    int a, b;
//    char opt;
//    cout << "select an operator:";
//    cin >> opt;
//    
//    switch (opt){
//        case 'q':
//            cout << "quit calulator" << endl;
//            break;
//        
//        case '+':
//            cout << "input two number:";
//            cin >> a >> b;
//            cout << "answer:" << a + b << endl;
//            break;
//        case '-':
//            cout << "input two number:";
//            cin >> a >> b;
//            cout << "answer:" << a - b << endl;
//            break;
//        case '*':
//            cout << "input two number:";
//            cin >> a >> b;
//            cout << "answer:" << a * b << endl;
//            break;
//        case '/':
//            cout << "input two number:";
//            cin >> a >> b;
//            if (b == 0) {
//                cout << "answer:" << "cannot divide by 0." << endl;
//                break;
//            }
//            else
//            {
//                cout << "answer:" << a / (float)b << endl;
//                break;
//            } 
//
//        default:
//            break;
//        }
//
//    return 0;
//}