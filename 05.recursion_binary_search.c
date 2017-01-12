#include <stdio.h>

int RecursionBinarySearch(int arr[], int first, int last, int target)	// ����Լ��� �̿��� ���� Ž�� �˰��� �Լ��̴�.
{
	int mid;

	if (first > last)			// ������ �� ���ϰԲ�
		return -1;
	mid = (first + last) / 2;

	if (target == arr[mid])
		return mid;
	else if (target < arr[mid])
		return RecursionBinarySearch(arr, first, mid - 1, target);		// ����Լ� ���
	else
		return RecursionBinarySearch(arr, mid + 1, last, target);		// ����Լ� ���
}

int main()
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = RecursionBinarySearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 5);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);

	idx = RecursionBinarySearch(arr, 0, sizeof(arr) / sizeof(int) - 1, 8);
	if (-1 == idx)
		printf("Ž�� ����!\n");
	else
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
}

// ����Լ��� �̿��� ���� Ž�� �˰��� �Լ��� �����Ѵ�.

// 3��° ��
// ã���� �ϴ� ������ �Է��ϰԲ� �����Ͽ���.

// 7��° ��
// ������ �Ųٷ� ������ Ž�� ����

// 14��° ��
// ã�����ϴ� ���� �߰����� �տ� �ִٸ� last�� �ٿ��� �ٽ� �Լ��� �θ���.

// 16��° ��
// ã�����ϴ� ���� �߰����� �ڿ� �ִٸ� first�� �÷��� �ٽ� �Լ��� �θ���.

// �Ϲ� ���� Ž�� �˰������ ��
// �Ϲ� ���� Ž�� �˰����� while���� ����Ѵ�.
// �Լ� ������ ������ ������ �� ���� �ݺ��ϴ� �����̴�.
// ��� ���� Ž�� �˰����� ���ǿ� ���� �ʴٸ� ������ ������ �˰������� �ٽ� ȣ���Ѵ�.

// ���⿡ ����ϰ� �������� ������ ������ ���� �ʴ�.
// ���� Ž�� �˰����� �Ϲ��� �� ����.
// �Լ��� �ѹ� �θ��� �Լ� ������ �ݺ��ϱ⿡ �ӵ��鿡�� ������ �� �ִ�.
// �׳� ����Լ��� �ͼ�������� ���� �˰����ϻ�