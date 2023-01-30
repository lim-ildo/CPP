//#include <iostream>
//
//using namespace std;
//
//class NumPair
//{
//private:
//	int x,y;
//
//public:
//	NumPair(int x, int y):x(x), y(y){}
//
//	void print(){
//		cout << "x: " << x << ", y: " << y << endl;
//	}
//
//	void add(int a, int b)
//	{
//		x += a; y += b;
//	}
//
//	int getX() { return x; }
//	int getY() { return y; }
//
//	/*void operator+(NumPair& n)
//	{
//		x += n.getX(), y += n.getY();
//	}*/
//
//	NumPair operator+ (int i, NumPair& n) // num2¸¦ °¡¸®Å´
//	{
//		return NumPair(n.getX()+i, n.getY()+i);
//	}
//
//	/*NumPair operator+(int i) 
//	{
//		return NumPair(x + i, y +i);
//	}*/
//
//
//};
//
//int main()
//{
//	NumPair num1(10, 20);
//	NumPair num2(30, 40);
//	
//	num1 = num1 + 10;
//	num1 = 10 + num1;
//	num1.print();
//
//	return 0;
//}