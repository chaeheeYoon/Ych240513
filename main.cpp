#include <iostream>

using namespace std;

int main()  // cpu는 정수계산에 특화 / 어지간해서는 int
{			// 코딩표준 -> 첫글자는 대문자
	int Number1 = 0; // 초기화를 해줘야한다 0; 넣어 줄 것 아니면 이상한 값이 들어간다.
	int Number2 = 0; // 책에서는 int Number1, Number2 = 0; 처럼 줄여 나올텐데 이거 하지마라. 무조건 직관성 있게

	cin >> Number1;  // cin cout은 Console In, Consle Out 즉, 입출력 할 것 이다.
	cin >> Number2;
	//입금하고 결제하고 송금하고 만명단위 -> 틀려봐 난리나지
	cout << Number1 + Number2 << endl;
	cout << Number1 - Number2 << endl;
	cout << Number1 / Number2 << endl;
	cout << Number1 * Number2 << endl;

	return 0;

	// 이후부턴 버전관리 해보겠다
}