//2. New linked list [Normal]

#include <iostream>
#include <string>
using namespace std;



struct node
{
	int data;
	node* next;
	int index;

	node(int d, node* n, int i): data(d), next(n), index(i) {}
};

class slist
{
private:
	node* head; // 첫 노드를 가리킴 
	node* tail; // 마지막 노드를 가리킴
	node* current; // 현재 노드를 가리킴(가정)
	int index;

public:
	slist() {
		head = tail = 0;
	}
	slist(): head(0), tail(0), current(0), index(0) {}
	void push_front(const int &d) { head = new node(d, head, index++); }

	slist& next()
	{
		if (!current) current = head; // 현재 노드가 없다면 현재 노드는 시작 노드이자 끝인 헤드가 됨. 
		else current = current->next; // 현재 노드가 있으면 현재는 다음 노드를 추가함

		return *this;
	}

	void slist::push_back(int n) {
		node* temp = new node;

		//temp의 데이터는 n
		temp->data = n;
		//temp의 nextNode = NULL값
		temp->next = NULL;

		//LinkedList가 비어있으면
		if (head == NULL) {
			//첫 node는 temp
			head = temp;
			//마지막 node는 temp
			tail = temp;
		}
		//LinkedList에 데이터가 있으면
		else {
			//현재 마지막 node의 nextNode는 temp
			tail->next = temp;
			//마지막 node는 temp
			tail = temp;
		}
	}
	}

	int get()
	{
		return current->data;
	}

	int operator[](int i)
	{
		node* s;

		for (s = head; s->index != i; s = s->next);

		return s->data;
	}

};

int main()
{
	slist s;

	s.push_back(10);
	s.push_back(20);
	s.push_back(30);
	s.push_front(40);
	s.push_front(50);


	//int i = 0;
	//cout << s[1] << endl;
	//cout << s[i++] << endl;
	//cout << s[i++] << endl;
	s.prev();
	cout << s.get() << endl;
	s.prev();
	cout << s.get() << endl;
	s.prev();
	cout << s.get() << endl;

	s.next();
	cout << s.get() << endl;
	s.next();
	cout << s.get() << endl;
	//cout << s.next().get() << endl;

	

}