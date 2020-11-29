//���� ������� �����, ���� ������ ����������� ������� s0, �, sn, �.³����, ��
//����� ��� ������� � �� ������ �� ��� ������.
//1. ������ ����� � ����, �� s� � ����� �� �������� ������.
//2. ������� ������ ��������� ������ �������.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int find_index(char* str, int i, int count)
{
	int result;
	if (str[i] == '.')
	{
		count++;
	}

	if (!(str[i] == '\0' || count == 3))
	{
		result = find_index(str, i + 1, count);
	}
	else if (count == 3)
	{
		result = i;
	}
	else
	{
		result = 0;
	}
	return result;
		
}

void replace_every_fourth(char* str, const char sym, int i)
{
	if (str[i] != '\0')
	{
		if ((i + 1) % 4 == 0)
		{
			str[i] = sym;
		}
		replace_every_fourth(str, sym, i + 1);
	}
}

int main()
{
	//��������� �������� �����
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	// ����� ������� �, si- ����� �� �������� ������
	cout << "String contained " << find_index(str,0,0) << "  '.'" << endl;
	// �����
	char sym = '.';
	replace_every_fourth(str, sym, 3);
	cout << "Modified string  : " << str << endl;
	return 0;
}