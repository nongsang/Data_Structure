#include <stdio.h>

int BinarySearch(int arr[], int len, int target)
{
	int first = 0;
	int last = len - 1;
	int mid;
	int count = 0;				// 비교 연산 횟수

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
	printf("비교 연산 횟수 : %d\n", count);
	return -1;
}

int main()
{
	int arr1[500] = { 0, };			// int형 배열 500개 안에 0으로만 채워넣는다.
	int arr2[5000] = { 0, };		// int형 배열 5000개 안에 0으로만 채워넣는다.
	int arr3[50000] = { 0, };		// int형 배열 50000개 안에 0으로만 채워넣는다.
	int arr4[200000] = { 0, };		// int형 배열 200000개 안에 0으로만 채워넣는다. 여기까지가 한계
	int idx;

	// 배열 arr1 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BinarySearch(arr1, sizeof(arr1) / sizeof(int), 1);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	// 배열 arr2 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BinarySearch(arr2, sizeof(arr2) / sizeof(int), 1);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	// 배열 arr3 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BinarySearch(arr3, sizeof(arr3) / sizeof(int), 1);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	// 배열 arr4 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
	idx = BinarySearch(arr4, sizeof(arr4) / sizeof(int), 1);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);
}

// 이진 탐색 알고리즘으로 실제 접근횟수를 계산해보았다.

// 8번째 줄
// 접근 횟수를 세기위한 변수를 선언하였다.

// 31 ~ 34번째 줄
// int형이면서 갯수가 다른 배열들을 전부 0으로 저장한다.
// arr[20] = { 0, }; 으로 초기화하면 배열의 모든 값을 0으로 초기화 한다.

// 34번째 줄
// 코딩을 하면 지역변수는 스택에 쌓게 된다.
// int는 4byte를 차지하고 스택의 크기는 default가 1Mb이기 때문에 int형 변수는 262,144개를 선언할 수 있다.
// 따라서 너무 많은 변수를 사용하면 오버플로우를 일으키게 된다.

// 37 ~ 63번째 줄
// 각 배열에 대해서 이진 탐색 알고리즘을 수행하여 횟수를 계산한다.
// 배열의 갯수가 많아질 수록 탐색 횟수의 증가폭이 줄어든다.
// 따라서 이진 탐색 알고리즘은 O(log n)의 증가폭을 가진다.