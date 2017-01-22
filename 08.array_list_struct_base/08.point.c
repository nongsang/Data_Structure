#include <stdio.h>
#include "point.h"

void SetPointPos(Point * ppos, int xpos, int ypos)				// 구조체 변수에 값을 저장
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}

void ShowPointPos(Point * ppos)									// 구조체의 값을 출력
{
	printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point * pos2)						// 구조체의 값을 비교
{
	if(pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)	// x, y가 같다면
		return 0;												// 0 반환
	else if(pos1->xpos == pos2->xpos)							// x만 같다면
		return 1;												// 1 반환
	else if(pos1->ypos == pos2->ypos)							// y만 같다면
		return 2;												// 2 반환
	else														// 전부 다르면
		return -1;												// -1 반환
}