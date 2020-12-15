#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int>mylist;

	mylist.push_front(100);//����Ʈ�� �տ� �����Ͱ� 100�� �����Ѵ�.

	mylist.clear();//����Ʈ�� Ŭ�����Ѵ�.

	mylist.push_front(200);//����Ʈ�� �����Ͱ� 200�� �����Ѵ�.

	cout << "mylist contains:";
	for (list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it) {//begin����end���� ����Ʈ�� ����Ѵ�.
		cout << ' ' << *it;
	}
	cout << "\n";

	mylist.push_back(100);//����Ʈ�� �ڿ� �����Ͱ� 100�� �����Ѵ�.
	mylist.push_back(200);//�� ���� ��忡 �����Ͱ� 200�� �����Ѵ�.

	cout << "mylist contains:";
	while (!mylist.empty()) {//����Ʈ�� ������� �ʴٸ�
		cout << ' ' << mylist.front();//����Ʈ�� ���� �� ��Ҹ� �����Ѵ�.
		mylist.pop_front();//����Ʈ�� �տ�Ҹ� �̾Ƴ���.
	}

	cout << "\n";

	cout << "mylistSize:" << mylist.size() << endl;//����Ʈ�� ����� ǥ���Ѵ�.
	return 0;
}
