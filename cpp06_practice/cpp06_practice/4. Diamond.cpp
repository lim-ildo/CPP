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
//	if (height % 2 == 1) { // Ȧ��
//		for (int i = 0; i < (height / 2) + 1; i++) { //��� �ﰢ���� ���� �ݺ�
//			for (int j = (height / 2) - i; j > 0; j--) {  // ��ĭ, �������� �ϳ��� �پ���. 
//				cout << " ";
//			}
//			for (int k = 0; k < (2 * i) + 1; k++) { // ��, �ΰ��� �þ��.
//				cout << "*";
//			}
//			cout << endl;
//		}
//
//		for (int i = 1; i <= (height / 2); i++) { // �ϴ� �ﰢ���� ���� �ݺ�
//			for (int j = 0; j < i; j++) { // ��ĭ, �ϳ��� �þ��. 
//				cout << " ";
//			}
//			for (int k = (height - (i * 2)); k >= 1; k--) { // ��, �ΰ��� �پ���.
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//	else //¦��, �� ���̰� �� �� �� ����
//		for (int i = 0; i < (height / 2); i++) { //��� �ﰢ���� ���� �ݺ�
//			for (int j = ((height / 2) - 1) - i; j > 0; j--) {
//				cout << " ";
//			}
//			for (int k = 0; k < (2 * i) + 1; k++) {
//				cout << "*";// ��, �ΰ��� �þ��.
//			}
//			cout << endl;
//		}
//	for (int i = 1; i <= (height / 2); i++) { // �ϴ� �ﰢ���� ���� �ݺ�
//		for (int j = 0; j < i - 1; j++) {
//			cout << " "; // ��ĭ, �ϳ��� �þ��.
//		}
//		for (int k = (height - (i * 2)) + 1; k >= 1; k--) { 
//			cout << "*"; // ��, �ΰ��� �پ���.
//		}
//		cout << endl;
//	}
//}
