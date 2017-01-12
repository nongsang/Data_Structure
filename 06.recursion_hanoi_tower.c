#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (1 == num)
		printf("원반 1을 %c에서 %c로 이동\n", from, to);			// 원반이 1개라면 바로 목적지로 보낸다.
	else
	{
		HanoiTowerMove(num - 1, from, to, by);					// num - 1개 쟁반은 from으로 부터 to를 거쳐서 by로 이동하는 재귀함수를 수행
		printf("원반 %d를 %c에서 %c로 이동\n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);					// num - 1개 쟁반은 by로부터 from을 거쳐서 to로 이동하는 재귀함수를 수행
	}
}

int main()
{
	HanoiTowerMove(3, 'A', 'B', 'C');
}

// 재귀함수로 하노이의 탑을 수행하는 과정이다.
// 이것은 다시한번 보고 이해할 것