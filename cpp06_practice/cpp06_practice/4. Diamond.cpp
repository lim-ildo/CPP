//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int height;
//	cout << "input height : ";
//	cin >> height;
//
//	if (height % 2 == 1) { // 홀수
//		for (int i = 0; i < (height / 2) + 1; i++) { //상단 삼각형의 높이 반복
//			for (int j = (height / 2) - i; j > 0; j--) {  // 빈칸, 역순으로 하나씩 줄어든다. 
//				cout << " ";
//			}
//			for (int k = 0; k < (2 * i) + 1; k++) { // 별, 두개씩 늘어난다.
//				cout << "*";
//			}
//			cout << endl;
//		}
//
//		for (int i = 1; i <= (height / 2); i++) { // 하단 삼각형의 높이 반복
//			for (int j = 0; j < i; j++) { // 빈칸, 하나씩 늘어난다. 
//				cout << " ";
//			}
//			for (int k = (height - (i * 2)); k >= 1; k--) { // 별, 두개씩 줄어든다.
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//	else //짝수, 긴 길이가 한 번 더 있음
//		for (int i = 0; i < (height / 2); i++) { //상단 삼각형의 높이 반복
//			for (int j = ((height / 2) - 1) - i; j > 0; j--) {
//				cout << " ";
//			}
//			for (int k = 0; k < (2 * i) + 1; k++) {
//				cout << "*";// 별, 두개씩 늘어난다.
//			}
//			cout << endl;
//		}
//	for (int i = 1; i <= (height / 2); i++) { // 하단 삼각형의 높이 반복
//		for (int j = 0; j < i - 1; j++) {
//			cout << " "; // 빈칸, 하나씩 늘어난다.
//		}
//		for (int k = (height - (i * 2)) + 1; k >= 1; k--) { 
//			cout << "*"; // 별, 두개씩 줄어든다.
//		}
//		cout << endl;
//	}
//}
