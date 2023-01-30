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
	node* head; // ù ��带 ����Ŵ 
	node* tail; // ������ ��带 ����Ŵ
	node* current; // ���� ��带 ����Ŵ(����)
	int index;

public:
	slist() {
		head = tail = 0;
	}
	slist(): head(0), tail(0), current(0), index(0) {}
	void push_front(const int &d) { head = new node(d, head, index++); }

	slist& next()
	{
		if (!current) current = head; // ���� ��尡 ���ٸ� ���� ���� ���� ������� ���� ��尡 ��. 
		else current = current->next; // ���� ��尡 ������ ����� ���� ��带 �߰���

		return *this;
	}

	void slist::push_back(int n) {
		node* temp = new node;

		//temp�� �����ʹ� n
		temp->data = n;
		//temp�� nextNode = NULL��
		temp->next = NULL;

		//LinkedList�� ���������
		if (head == NULL) {
			//ù node�� temp
			head = temp;
			//������ node�� temp
			tail = temp;
		}
		//LinkedList�� �����Ͱ� ������
		else {
			//���� ������ node�� nextNode�� temp
			tail->next = temp;
			//������ node�� temp
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