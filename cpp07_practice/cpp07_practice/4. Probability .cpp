//// 4. Probability 
//
//#include <iostream>
//#include <random>
//
//using namespace std;
//
//int d1, d2, d3, d4, d5, d6;
//int times;
//
//void dice();
//void graph(int len, int dot);
//
//
//
//int main() 
//{
//    cout << "Roll a dice 'n' times: ";
//    cin >> times;
//    dice();
//    cout << "1:";
//    graph(times, d1);
//    cout << "2:";
//    graph(times, d2);
//    cout << "3:";
//    graph(times, d3);
//    cout << "4:";
//    graph(times, d4);
//    cout << "5:";
//    graph(times, d5);
//    cout << "6:";
//    graph(times, d6);
//}
//
//void dice()
//{
//    random_device rd;
//    mt19937 gen(rd());
//
//    d1 = d2 = d3 = d4 = d5 = d6 = 0;
//
//    for (int i = 0; i < times; i++)
//    {
//        int dicenum = gen() % 6 + 1;
//
//        if (dicenum == 1) d1++;
//        else if (dicenum == 2) d2++;
//        else if (dicenum == 3) d3++;
//        else if (dicenum == 4) d4++;
//        else if (dicenum == 5) d5++;
//        else d6++;
//    }
//}
//
//void graph(int len, int dot)
//{
//    for (int i = 0; i < len; i++)
//    {
//        if (i < dot)  cout << "@";
//        else         cout << "*";
//    }
//    cout << endl;
//}