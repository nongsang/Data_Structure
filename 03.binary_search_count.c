#include <stdio.h>

int BinarySearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int count = 0;				// �� ���� Ƚ��

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (target == arr[mid])
			return mid;
		else
		{
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
		count += 1;
	}
	printf("�� ���� Ƚ�� : %d\n", count);
	return -1;
}

int main()
{
	int arr1[500] = { 0, };			// int�� �迭 500�� �ȿ� 0���θ� ä���ִ´�.
	int arr2[5000] = { 0, };		// int�� �迭 5000�� �ȿ� 0���θ� ä���ִ´�.
	int arr3[50000] = { 0, };		// int�� �迭 50000�� �ȿ� 0���θ� ä���ִ´�.
	int arr4[200000] = { 0, };		// int�� �迭 200000�� �ȿ� 0���θ� ä���ִ´�. ��������� �Ѱ�
	int idx;

	// �迭 arr1 �������, ������� ���� ���� 1�� ã����� ���
	idx = BinarySearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	// �迭 arr2 �������, ������� ���� ���� 1�� ã����� ���
	idx = BinarySearch(arr2, sizeof(arr2) / sizeof(int), 1);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	// �迭 arr3 �������, ������� ���� ���� 1�� ã����� ���
	idx = BinarySearch(arr3, sizeof(arr3) / sizeof(int), 1);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	// �迭 arr4 �������, ������� ���� ���� 1�� ã����� ���
	idx = BinarySearch(arr4, sizeof(arr4) / sizeof(int), 1);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
}

// ���� Ž�� �˰������� ���� ����Ƚ���� ����غ��Ҵ�.

// 8��° ��
// ���� Ƚ���� �������� ������ �����Ͽ���.

// 31 ~ 34��° ��
// int���̸鼭 ������ �ٸ� �迭���� ���� 0���� �����Ѵ�.
// arr[20] = { 0, }; ���� �ʱ�ȭ�ϸ� �迭�� ��� ���� 0���� �ʱ�ȭ �Ѵ�.

// 34��° ��
// �ڵ��� �ϸ� ���������� ���ÿ� �װ� �ȴ�.
// int�� 4byte�� �����ϰ� ������ ũ��� default�� 1Mb�̱� ������ int�� ������ 262,144���� ������ �� �ִ�.
// ���� �ʹ� ���� ������ ����ϸ� �����÷ο츦 ����Ű�� �ȴ�.

// 37 ~ 63��° ��
// �� �迭�� ���ؼ� ���� Ž�� �˰����� �����Ͽ� Ƚ���� ����Ѵ�.
// �迭�� ������ ������ ���� Ž�� Ƚ���� �������� �پ���.
// ���� ���� Ž�� �˰����� O(log n)�� �������� ������.