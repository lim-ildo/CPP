//#include <stdio.h>
//
//class myPrint
//{
//private:
//	int len;
//
//public:
//	void print(const char* str)
//	{
//		len += printf("%s ", str);
//	}
//
//	void print(int i)
//	{
//		len += printf("%d ", i);
//	}
//
//	void print(double d)
//	{
//		len += printf("%lf ", d);
//	}
//
//	myPrint operator<< (const char* str)
//	{
//		print(str);
//		return *this;
//	}
//
//	myPrint operator<< (int i)
//	{
//		print(i);
//		return *this;
//	}
//
//	myPrint operator<< (double d)
//	{
//		print(d);
//		return *this;
//	}
//
//};
//
//int main()
//{
//	myPrint p;
//	p << "hello"<< 1234 << 3.14;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//
//class my_queue : private vector<int> {
//
//public:
//	vector<int> v;
//	void enqueue(int a) {
//		v.push_back(a);
//	};
//
//	void dequeue() {
//		if (!v.empty())
//			v.erase(v.begin() + 0);
//		else
//			cout << "empty " << endl;
//	};
//
//	int peek() {
//		return v[0];
//	};
//
//};
//
//
//
//int main()
//{
//	my_queue q;
//
//	q.enqueue(10);
//	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//
//
//
//	cout << q.peek() << endl; // 10
//	q.dequeue();
//	cout << q.peek() << endl; // 20
//	q.dequeue();
//	cout << q.peek() << endl; // 30
//	q.dequeue();
//	cout << q.peek() << endl; // 40
//	q.dequeue();
//
//}