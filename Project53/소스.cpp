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
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true)
	{
		int x = dis(gen);
		int y = dis(gen);

		cout << x << " " << y << "\n";
		cout << "������ �Է��ϱ�" << endl;
		cin >> ch;
		cout << "��� �Է��ϱ�" << endl;
		cin >> answer;

		if (ch == '+')
		{
			if (x + y == answer)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
		else if (ch == '-')
		{
			if (x - y == answer)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
		else if (ch == '/')
		{
			if (x / y == answer)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
		}
		else if (ch == '%')
		{
			if (x % y == answer)
			{
				cout << "�¾ҽ��ϴ�." << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�." << endl;
		}

	}
	return 0;
}
