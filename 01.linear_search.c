#include <stdio.h>

int LinearSearch(int arr[], int len, int target)	// 순차 검색을 수행하는 함수
{
	int i;
	for (i = 0; i < len; ++i)		// 길이 만큼 차례대로
	{
		if (target == arr[i])		// 찾고자 하는 값과 저장된 값을 비교하고
			return i;				// 찾았다면 위치를 반환
	}
	return -1;						// 못찾았다면 -1 반환
}

int main()
{
	int arr[] = { 3, 5, 7, 2, 8 };
	int idx;

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 8);	// 8을 찾는다.
	if (-1 == idx)				// -1이 반환됬다면
		printf("탐색 실패!\n");	// 탐색 실패 출력
	else
		printf("타겟 저장 인덱스 : %d\n", idx);	// 찾았다면 위치 출력

	idx = LinearSearch(arr, sizeof(arr) / sizeof(int), 4);
	if (-1 == idx)
		printf("탐색 실패!\n");
	else
		printf("타겟 저장 인덱스 : %d\n", idx);
}

// 순차 검색을 수행하는 알고리즘이다.

// 좋은 알고리즘이란?
// 연산자( <, ++, == )를 적게 수행하여 답을 찾아내는 알고리즘이다.

// 연산자 중 동등비교연산( == )이 제일 중요하다.
// == 연산이 줄어들면 < 연산, ++ 연산이 줄어든다.
// 반대로 == 연산이 늘어나면 < 연산, ++ 연산이 늘어난다.
// 다른 연산들은 == 연산에 의존적이다.