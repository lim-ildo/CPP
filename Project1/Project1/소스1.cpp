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
//			cout << "관심 주제롤 선택하세요 >> ";
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
//	PopupMenu* p1 = new PopupMenu("정치");
//	PopupMenu* p2 = new PopupMenu("경제");
//	PopupMenu* p3 = new PopupMenu("연예");
//	PopupMenu* p4 = new PopupMenu("스포츠");
//
//	
//	//root에 서브메뉴 추가
//	menubar->addMenu(p1);
//	menubar->addMenu(p2);
//	menubar->addMenu(p3);
//	menubar->addMenu(p4);
//
//	//p1에 아이템 추가
//	p1->addMenu(new MenuItem("미국은 규칙 파괴자” 한중 회담서 이례적 美 비판한 中", 11));
//	p1->addMenu(new MenuItem("정진석 내년 3월 전당대회 치러야…여론조사 반영 축소도 시사", 12));
//	p1->addMenu(new MenuItem("여 `서민 혜택·中企 생존` 키워드로 법인세 인하 관철 총력전", 13));
//	
//
//	//p2
//	p2->addMenu(new MenuItem("현대차그룹, 자율주행 배송로봇 실증사업 추진", 21));
//	p2->addMenu(new MenuItem("공기업·준정부기관 기준높여 42곳 줄인다…예타 기준 2천억으로", 21));
//
//	//p3에 아이템 추가
//	p3->addMenu(new MenuItem("방탄소년단 맏형 진, 멤버 전원 뜨거운 배웅 속 조용한 입대", 31));
//	p3->addMenu(new MenuItem("개봉 D-1 '아바타2', 암표 거래 기승…13년 전 데자뷔", 32));
//	p3->addMenu(new MenuItem("아이유 측 악플러 범죄 인정→벌금형 300만원, 선처無", 33));
//
//	//p4에 아이템 추가
//	p4->addMenu(new MenuItem("조규성, 김민재 뒤 잇나…튀르키예 이적설 솔솔", 41));
//	p4->addMenu(new MenuItem(" 2월까지 차기 대표팀 감독 선임…대한축구협회 내년도 예산 1,581억", 42));
//	
//
//
//	//p2에 서브메뉴 
//	PopupMenu* p5 = new PopupMenu("사설)내 주식은 오를까?");
//	p2->addMenu(p5);
//
//	//p5에 아이템 추가
//	p5->addMenu(new MenuItem("오른다", 51));
//	p5->addMenu(new MenuItem("떨어진다", 52));
//	
//
//	menubar->command();
//
//	delete menubar;
//}