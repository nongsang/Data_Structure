#include <stdio.h>

int BinarySearch(int arr[], int len, int target)	// 이진 탐색을 수행하는 함수
{
	int first = 0;			// 탐색 대상의 시작 위치
	int last = len - 1;		// 탐색 대상의 마지막 위치
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2;	// 탐색 대상의 중앙 위치

		if (target == arr[mid])		// 찾고자 하는 값이 중앙에 있다면
			return mid;				// 탐색 완료
		else						// 그렇지 않고
		{
			if (target < arr[mid])	// 찾고자 하는 값이 중앙보다 앞에 있다면
				last = mid - 1;		// 탐색 대상의 마지막 위치를 중앙 바로 앞으로 설정
			else					// 그렇지 않다면
				first = mid + 1;	// 탐색 대상의 첫번째 위치를 중앙 바로 뒤로 설정
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
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);

	idx = BinarySearch(arr, sizeof(arr) / sizeof(int), 8);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);
}

// 이진 탐색 알고리즘을 수행한다.

// 선형 탐색 알고리즘과 비교

// 1. 선형 탐색 알고리즘
// 시간 복잡도가 O(n)이다.
// 최악의 경우 자료가 n개 있을 경우 n번의 메모리 억세스를 해야 한다는 뜻이다.

// 2. 이진 검색 알고리즘
// 시간 복잡도가 O(log n)이다.
// 최악의 경우 자료가 n개 있을 경우 log n번의 메모리 억세스를 해야 한다는 뜻이다.

// 왜 메모리 억세스를 기준으로 시간 복잡도를 평가할까?
// 메모리 접근 시간이 가장 많은 시간을 잡아먹기 때문