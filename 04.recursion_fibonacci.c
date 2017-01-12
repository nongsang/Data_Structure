#include <stdio.h>

int count = 1;

int fibonacci(int n)
{
	printf("%3d. 피보나치 호출 : %d\n",count ,n);
	++count;
	if (1 == n)			// 함수 호출시 n이 1일 경우 0을 반환
		return 0;
	else if (2 == n)	// 함수 호출시 n이 2일 경우 1을 반환
		return 1;
	else				// 그 이외의 수행
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int i;
	printf("최종 값 : %d\n", fibonacci(10));
}
// 재귀함수 중 피보나치 수열을 구현하였다.

// 재귀함수의 장점
// 매우 간단하고 보기 쉽게 알고리즘을 구현할 수 있다.

// 재귀함수의 단점
// 함수 호출을 매우 많이 한다.
// 피보나치 수열을 10까지만 하는데에도 109번의 함수호출을 동반한다.

// 9 ~ 12번째 줄
// 재귀함수는 많은 함수를 호출하기 때문에 많이 호출되는 함수의 값은 미리 정해주는 것이 속도 향상에 기여한다.
// 이를 동적 프로그래밍(dynamic programming)이라고 한다.
// 알고리즘에서 다시 설명한다.

// 재귀함수의 경우 트리 구조로 표현을 하면 매우 쉽게 설명이 가능하다.
// 이진 트리로 표현하고 왼쪽으로 내려가면서 하나씩 채워간다.