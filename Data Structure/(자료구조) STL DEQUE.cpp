#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> mydeque;
	int mydequeback;

	mydeque.push_front(100);//��ť�� �տ� ������ 100�� �����Ѵ�.
	mydeque.push_front(200);//��ť�� �տ� ������ 200�� �����Ѵ�.
	mydeque.push_front(300);//��ť�� �տ� ������ 300�� �����Ѵ�.

	cout << "mydeque contains:";

	for (deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it) {//begin���� end���� begin�� 1�� �������� ��ť���� �ִ� ��� ��Ҹ� ����Ѵ�.
		cout << ' ' << *it;
	}
	cout << "\n";//�ٹٲ�

	while (!mydeque.empty()) {//��ť�� ������� �ʴٸ� ����
		cout << "pop_front:" << ' ' << mydeque.front() << endl;//��ť�� ���� �� ��Ҹ� ����Ѵ�.
		mydeque.pop_front();//��ť�� �տ�� pop
	}

	mydeque.push_back(10);//��ť�� ���� ���� ������ 10�� ����
	mydeque.push_front(15);//��ť�� ���� �տ� �����͸� 15����
	mydeque.push_back(20);//10�ڿ� ������20�� ����
	mydeque.push_front(25);//15�տ� ������ 25�� ����
	mydeque.push_back(30);//20�ڿ� ������ 30�� ����


	cout << "mydeque contains:";

	for (deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it) {//ó������ �������� ������ ����� �����ǿ� ���� ����
		cout << ' ' << *it;//���
	}
	cout << "\n";

	cout << "mydeque stores:" << (int)mydeque.size() << " number.\n";//��ť�� ��ü ũ�⸦ ����Ѵ�

	while (!mydeque.empty()) {//��ť�� ������� �ʴٸ� ���

		cout << "pop back:" << mydeque.back() << endl;//deque�� ���� �� ��Ҹ� ���
		mydeque.pop_back();//��ť���� ���� �� ��Ҹ� pop
	}

	return 0;
}