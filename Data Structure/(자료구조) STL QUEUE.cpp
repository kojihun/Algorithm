#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> myqueue;

	cout << "Empty Queue True/False:" << boolalpha << myqueue.empty() << endl;//Queue�� ����ִٸ� True�� ��ȯ�ϰ�, ������� �ʴٸ� False�� ��ȯ�Ѵ�. �� ���忡�� ������ ������ �̷������ �ʾ����Ƿ� True�� ��ȯ�Ѵ�.

	myqueue.push(0);//Queue�� ���ο� ��Ҹ� �����Ѵ�. ������ 0�� �����Ѵ�.

	cout << "Empty Queue True/False:" << boolalpha << myqueue.empty() << endl;//Queue�� ������ 0�� ���ԵǾ����Ƿ� Queue�� ������� ���� ���°� �ȴ�. False�� ��ȯ�Ѵ�.

	cout << "myqueueSize:" << myqueue.size() << "\n";//11�ٿ��� myqueue.push�� �Ͼ���Ƿ� �����ʹ� �� 1�� ���ԵǾ��� Size�� ũ��� 1�� ��ȯ�ȴ�.

	cout << "myqueueFront:" << myqueue.front() << "\n";//Queue���� ���� ������ ��Ҹ� ��ȯ�Ѵ�. �� ó�� ���� ��Ҹ� ��ȯ�ϴµ�, ���⼭push�� �� �� �Ͼ���Ƿ� ó�� ���Ե� �������� 0�� ��ȯ�ȴ�.

	myqueue.push(1);//myqueue�� ������ 1�� �����Ͽ���.

	cout << "myqueueBack:" << myqueue.back() << "\n";//Queue���� ���� �ֱٿ� ���Ե� ��Ҹ� ��ȯ�Ѵ�. 19�ٿ��� push�� �̿��� ������ 1�� �����Ͽ����Ƿ� 1�� ��ȯ�ȴ�.

	cout << "myqueue contains: ";
	while (!myqueue.empty())//����ֱ� ������ ����
	{
		cout << ' ' << myqueue.front();
		myqueue.pop();//ť ���ο� ��ҵ� �߿� ���� ������ ��Ҹ� �����Ѵ�.������  Queue�� ������ �� ��ȯ�� �Ͽ� pop�� �Ͽ��� �� �ٷ� ����� �Ͽ��µ�, �� Queue�� ���ϰ��� ���⶧���� ����� pop�� �Ǿ����� Ȯ���ϱ� ���� front�� ����Ͽ���.
	}
	cout << "\n";

	cout << "Empty Queue True/False:" << boolalpha << myqueue.empty() << endl;//Queue�� ��� ��Ҹ� pop�ϰ�, Queue�� ���ΰ� ����ִ��� Ȯ��

	return 0;
}