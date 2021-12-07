#include <iostream>
#include <string>
using namespace std;
#define M 3

class HashTable {

public:
	int Arr[M];

	struct Node {
		struct Node*link;
		int data;
	};

	void addFirst(struct Node *target, string key) {
		struct Node * newNode = new Node;
		newNode->link = target->link;
		newNode->data = getHashCode(key);

		target->link = newNode;

	}

	int getHashCode(string key) {
		int hashcode = 0;
		for (int i = 0; i < key.length(); i++) {
			hashcode += key[i];
		}
		return hashcode;
	}

	int convertToIndex(int hashcode) {
		return hashcode % M;
	}

	void add(string key) {
		int hashcode = getHashCode(key);
		int index = convertToIndex(hashcode);
		Arr[index] = hashcode;
	}
};

int main(void)
{
	HashTable a;
	


}

//�迭�� �ε����� ù��° ��带 ������ ���̵� �������� ����.
//�����Ϳ� ���� Ȯ���� ������ΰ� �ʿ�

/*int i, j;
for ( i = 2; i <= 100; i++){
for ( j = 2; j <= i; j++) {
if (i%j == 0)	break;
}
if (j == i) {
cout << i << ' ';
}
}
return 0;*/