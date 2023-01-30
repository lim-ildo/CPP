////1. Build your own menu!
//#include <iostream>
//#include <string>
//#include <vector>
//#include <conio.h>
//
//using namespace std;
//
//#define clrscr() system("cls")
//#define getkey() getch()
//
//
//class AbstractMenu {
//	string title;
//public:
//	AbstractMenu(string s) :title(s) {}
//
//	virtual ~AbstractMenu(){}
//
//	string getTitle() { return title; }
//
//	virtual void command() = 0;
//};
//
//class MenuItem : public AbstractMenu {
//	int id;
//public:
//	MenuItem(string s, int n): AbstractMenu(s), id(n){}
//
//	virtual void command() {
//		cout << getTitle() << " is selected." << endl;
//	}
//};
//
//class PopupMenu : public AbstractMenu {
//	vector<AbstractMenu*> v;
//
//public:
//	PopupMenu(string s) : AbstractMenu(s){}
//	~PopupMenu() {
//		for (int i = 0; i < v.size(); i++)
//			delete v[i];
//	}
//
//	void addMenu(AbstractMenu* p) { v.push_back(p); }
//
//
//	virtual void command() {
//		while (true) {
//			clrscr();
//
//			int size = v.size();
//			for (int i = 0; i < size; i++)
//				cout << i + 1 << ". " << v[i]->getTitle() << endl;
//			cout << size + 1 << ". << Back" << endl;
//
//			cout << "���� ������ �����ϼ��� >> ";
//			int cmd;
//			cin >> cmd;
//
//			if (cmd == size + 1) break;
//			if (cmd <1 || cmd > size + 1)continue;
//
//			v[cmd - 1]->command();
//		}
//	}
//};
//
//int main() {
//	//rootmenubar
//	PopupMenu* menubar = new PopupMenu("MENUBAR");
//
//	//submenu
//	PopupMenu* p1 = new PopupMenu("��ġ");
//	PopupMenu* p2 = new PopupMenu("����");
//	PopupMenu* p3 = new PopupMenu("����");
//	PopupMenu* p4 = new PopupMenu("������");
//
//	
//	//root�� ����޴� �߰�
//	menubar->addMenu(p1);
//	menubar->addMenu(p2);
//	menubar->addMenu(p3);
//	menubar->addMenu(p4);
//
//	//p1�� ������ �߰�
//	p1->addMenu(new MenuItem("�̱��� ��Ģ �ı��ڡ� ���� ȸ�㼭 �̷��� ڸ ������ ��", 11));
//	p1->addMenu(new MenuItem("������ ���� 3�� �����ȸ ġ���ߡ��������� �ݿ� ��ҵ� �û�", 12));
//	p1->addMenu(new MenuItem("�� `���� ���á����� ����` Ű����� ���μ� ���� ��ö �ѷ���", 13));
//	
//
//	//p2
//	p2->addMenu(new MenuItem("�������׷�, �������� ��۷κ� ������� ����", 21));
//	p2->addMenu(new MenuItem("������������α�� ���س��� 42�� ���δ١���Ÿ ���� 2õ������", 21));
//
//	//p3�� ������ �߰�
//	p3->addMenu(new MenuItem("��ź�ҳ�� ���� ��, ��� ���� �߰ſ� ��� �� ������ �Դ�", 31));
//	p3->addMenu(new MenuItem("���� D-1 '�ƹ�Ÿ2', ��ǥ �ŷ� ��¡�13�� �� ���ں�", 32));
//	p3->addMenu(new MenuItem("������ �� ���÷� ���� ����������� 300����, ��ó��", 33));
//
//	//p4�� ������ �߰�
//	p4->addMenu(new MenuItem("���Լ�, ����� �� �ճ���Ƣ��Ű�� ������ �ּ�", 41));
//	p4->addMenu(new MenuItem(" 2������ ���� ��ǥ�� ���� ���ӡ������౸��ȸ ���⵵ ���� 1,581��", 42));
//	
//
//
//	//p2�� ����޴� 
//	PopupMenu* p5 = new PopupMenu("�缳)�� �ֽ��� ������?");
//	p2->addMenu(p5);
//
//	//p5�� ������ �߰�
//	p5->addMenu(new MenuItem("������", 51));
//	p5->addMenu(new MenuItem("��������", 52));
//	
//
//	menubar->command();
//
//	delete menubar;
//}