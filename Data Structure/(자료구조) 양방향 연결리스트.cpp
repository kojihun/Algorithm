#include <iostream>
using namespace std;

//����ü����
typedef struct DoubleLinkedList {
	struct DoubleLinkedList *llink; //���� ��带 ����ų ����ü ������
	int data; //�������ʵ�
	struct DoubleLinkedList *rlink; //���� ��带 ����ų ����ü ������
}DoubleLinkedList;

//������
DoubleLinkedList *createNode(int data) {
	DoubleLinkedList *newNode;//���ο� ����ü �����ͻ���
	newNode = new DoubleLinkedList;

	newNode->llink = NULL; //���� ��ũ�ʵ忡 NULL����
	newNode->data = data; //������ ����
	newNode->rlink = NULL; //������ ��ũ�ʵ忡 NULL����

	return newNode; //����ü ������ ��ȯ
}

//��� ����
void addNode(DoubleLinkedList **phead, DoubleLinkedList *newNode) {//���ڷ� ������ ���ο� ��带 �޴´�.
	if (*phead == NULL) {//��������Ͱ� ����Ű�°� ������� ����
		*phead = newNode;//��������Ϳ� ���ο� ����� �ּҸ� �ִ´�.
	}
	else {
		newNode->rlink = *phead;//���ο� �����  rlink�� ��������Ͱ� ����Ű�� ����� �ּҸ� �ִ´�.
		(*phead)->llink = newNode;//���ο� ����� llink�� ���ο� ����� �ּҸ� �ִ´�.
		*phead = newNode;
	}
}

//��� ����
void removeNode(DoubleLinkedList **phead){//��������͸� ���ڷ� �޴´�.
	DoubleLinkedList *p = *phead; //������ ����� �ּҸ� ���� ����ü�����ͺ���

	*phead = (*phead)->rlink;//��������Ϳ� ������ ����� ��������� �ּҸ� �ִ´�.
	free(p);//������ ��� �����Ҵ� ����
}


//����Ʈ ����Լ�
void display(DoubleLinkedList *list) {
	while (list != NULL) {
		cout<< list->data<<"->";
		list = list->rlink;
	}
	cout << "NULL" << "\n";
}


int main() {
	DoubleLinkedList *list = NULL;

	addNode(&list, createNode(10));
	addNode(&list, createNode(20));
	addNode(&list, createNode(30));
	addNode(&list, createNode(40));
	addNode(&list, createNode(50));

	display(list);


	removeNode(&list);
	display(list);

	return 0;

}