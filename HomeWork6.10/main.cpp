#include <iostream>
void numbers6()
{
	int num;
	int a, b, c, d, e, f;
	while (true)
	{
		std::cout << "�������� ������������ �����: ";
		std::cin >> num;
		if (num >= 100000 && num <= 999999)
		{
			break;
		}
		std::cout << "������ �� ����� �� ������������ �����!\n";
	}

	a = num % 10;
	b = num % 100 / 10;
	c = num % 1000 / 100;
	d = num % 10000 / 1000;
	e = num % 100000 / 10000;
	f = num % 1000000 / 100000;

	if (a + b + c == d + e + f)
	{
		std::cout << "���������� �� ����� ���������� �����!";
	}
	else
	{
		std::cout << "��� ����� �� �������� ���������� �����!";
	}
}

void numbers4()
{
	int num;
	int a, b, c, d;
	while (true)
	{
		std::cout << "�������� ������������� �����: ";
		std::cin >> num;
		if (num >= 1000 && num <= 9999)
		{
			break;
		}
		std::cout << "������ �� ����� �� ������������� �����!\n";
	}

	a = num % 10;
	b = num % 100 / 10;
	c = num % 1000 / 100;
	d = num % 10000 / 1000;
	
	num = c * 1000 + d * 100 + a * 10 + b;
	std::cout << "�������� �����: " << num;
	
}

void numMax()
{
	const int size = 7;
	int num1, num2, num3, num4, num5, num6, num7, maxNum{};


	std::cout << "������� ���� ����� (����� ������): ";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

	int arr[size]{ num1, num2, num3, num4, num5, num6, num7 };

	for (int i = 0; i < size; i++)
	{
		if (maxNum < arr[i])
		{
			maxNum = arr[i];
		}
	}
	std::cout << "����������� �����: " << maxNum;
}

int main()
{
	setlocale(LC_ALL, "ru");
	numbers6();
	numbers4();
	numMax();
}