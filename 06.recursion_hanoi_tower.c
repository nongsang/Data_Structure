#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (1 == num)
		printf("���� 1�� %c���� %c�� �̵�\n", from, to);			// ������ 1����� �ٷ� �������� ������.
	else
	{
		HanoiTowerMove(num - 1, from, to, by);					// num - 1�� ����� from���� ���� to�� ���ļ� by�� �̵��ϴ� ����Լ��� ����
		printf("���� %d�� %c���� %c�� �̵�\n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);					// num - 1�� ����� by�κ��� from�� ���ļ� to�� �̵��ϴ� ����Լ��� ����
	}
}

int main()
{
	HanoiTowerMove(3, 'A', 'B', 'C');
}

// ����Լ��� �ϳ����� ž�� �����ϴ� �����̴�.
// �̰��� �ٽ��ѹ� ���� ������ ��