#include <iostream>
#include <stdlib.h>
#include <random>
using namespace std;

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 10);

	int i, answer;
	char ch;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true)
	{
		int x = dis(gen);
		int y = dis(gen);

		cout << x << " " << y << "\n";
		cout << "연산자 입력하기" << endl;
		cin >> ch;
		cout << "결과 입력하기" << endl;
		cin >> answer;

		if (ch == '+')
		{
			if (x + y == answer)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
		}
		else if (ch == '-')
		{
			if (x - y == answer)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
		}
		else if (ch == '/')
		{
			if (x / y == answer)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
		}
		else if (ch == '%')
		{
			if (x % y == answer)
			{
				cout << "맞았습니다." << endl;
				break;
			}
			else
				cout << "틀렸습니다." << endl;
		}

	}
	return 0;
}
