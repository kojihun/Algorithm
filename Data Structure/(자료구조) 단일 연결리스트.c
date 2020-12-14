#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int data;//�������ʵ�
	struct ListNode *link;//��ũ�ʵ�
}ListNode;

//�������Լ�
ListNode *createNode(int data) {//��带 �����ϴ� �Լ�
	ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL) {
		printf("�����Ҵ� ����\n");
		return;
	}

	newNode->data = data;//�����ͻ���
	newNode->link = NULL;//��ũ�ʵ�NULL

	return newNode;
}
//�������Լ�

void insertNode(ListNode **phead, ListNode *newNode) {//��带 �����ϴ� �Լ�
	if (*phead == NULL) {
		*phead = newNode;
	}
	else {
		newNode->link = *phead;
		*phead = newNode;
	}
}

void display(ListNode *phead) {
	while (phead != NULL) {
		printf("%d", phead->data);
		phead = phead->link;
		printf("\n");
	}
	printf("\n");
}

int main() {
	ListNode *list = NULL;
	insertNode(&list, createNode(10));
	insertNode(&list, createNode(11));
	insertNode(&list, createNode(12));
	display(list);

	return 0;
}