#include <iostream>

using namespace std;

int main()  // cpu�� ������꿡 Ưȭ / �������ؼ��� int
{			// �ڵ�ǥ�� -> ù���ڴ� �빮��
	int Number1 = 0; // �ʱ�ȭ�� ������Ѵ� 0; �־� �� �� �ƴϸ� �̻��� ���� ����.
	int Number2 = 0; // å������ int Number1, Number2 = 0; ó�� �ٿ� �����ٵ� �̰� ��������. ������ ������ �ְ�

	cin >> Number1;  // cin cout�� Console In, Consle Out ��, ����� �� �� �̴�.
	cin >> Number2;
	//�Ա��ϰ� �����ϰ� �۱��ϰ� ������� -> Ʋ���� ��������
	cout << Number1 + Number2 << endl;
	cout << Number1 - Number2 << endl;
	cout << Number1 / Number2 << endl;
	cout << Number1 * Number2 << endl;

	return 0;

	// ���ĺ��� �������� �غ��ڴ�
}