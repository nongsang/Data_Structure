#include <stdio.h>

int LinearSearch(int arr[], int len, int target)	// ���� �˻��� �����ϴ� �Լ�
{
	int i;
	for (i = 0; i < len; ++i)		// ���� ��ŭ ���ʴ��
	{
		if (target == arr[i])		// ã���� �ϴ� ���� ����� ���� ���ϰ�
			return i;				// ã�Ҵٸ� ��ġ�� ��ȯ
	}
	return -1;						// ��ã�Ҵٸ� -1 ��ȯ
}

int main()
{
	int arr[] = { 3, 5, 7, 2, 8 };
	int idx;

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 8);	// 8�� ã�´�.
	if (-1 == idx)				// -1�� ��ȯ��ٸ�
		printf("Ž�� ����!\n");	// Ž�� ���� ���
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);	// ã�Ҵٸ� ��ġ ���

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
}

// ���� �˻��� �����ϴ� �˰����̴�.

// ���� �˰����̶�?
// ������( <, ++, == )�� ���� �����Ͽ� ���� ã�Ƴ��� �˰����̴�.

// ������ �� ����񱳿���( == )�� ���� �߿��ϴ�.
// == ������ �پ��� < ����, ++ ������ �پ���.
// �ݴ�� == ������ �þ�� < ����, ++ ������ �þ��.
// �ٸ� ������� == ���꿡 �������̴�.