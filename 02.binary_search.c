#include <stdio.h>

int BinarySearch(int arr[], int len, int target)	// ���� Ž���� �����ϴ� �Լ�
{
	int first = 0;			// Ž�� ����� ���� ��ġ
	int last = len - 1;		// Ž�� ����� ������ ��ġ
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;	// Ž�� ����� �߾� ��ġ

		if (target == arr[mid])		// ã���� �ϴ� ���� �߾ӿ� �ִٸ�
			return mid;				// Ž�� �Ϸ�
		else						// �׷��� �ʰ�
		{
			if (target < arr[mid])	// ã���� �ϴ� ���� �߾Ӻ��� �տ� �ִٸ�
				last = mid - 1;		// Ž�� ����� ������ ��ġ�� �߾� �ٷ� ������ ����
			else					// �׷��� �ʴٸ�
				first = mid + 1;	// Ž�� ����� ù��° ��ġ�� �߾� �ٷ� �ڷ� ����
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BinarySearch(arr, sizeof(arr) / sizeof(int), 5);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	idx = BinarySearch(arr, sizeof(arr) / sizeof(int), 8);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
}

// ���� Ž�� �˰����� �����Ѵ�.

// ���� Ž�� �˰���� ��

// 1. ���� Ž�� �˰���
// �ð� ���⵵�� O(n)�̴�.
// �־��� ��� �ڷᰡ n�� ���� ��� n���� �޸� �＼���� �ؾ� �Ѵٴ� ���̴�.

// 2. ���� �˻� �˰���
// �ð� ���⵵�� O(log n)�̴�.
// �־��� ��� �ڷᰡ n�� ���� ��� log n���� �޸� �＼���� �ؾ� �Ѵٴ� ���̴�.

// �� �޸� �＼���� �������� �ð� ���⵵�� ���ұ�?
// �޸� ���� �ð��� ���� ���� �ð��� ��ƸԱ� ����