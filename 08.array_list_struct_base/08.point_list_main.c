#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"
#include "point.h"

int main(void)
{
	List list;
	Point compPos;
	Point * ppos;

	ListInit(&list);				// 리스트 초기화를 먼저 해준다.

	/*** 4개의 데이터 저장 ***/
	ppos = (Point*)malloc(sizeof(Point));	// 구조체 1개만 메모리 동적 할당
	SetPointPos(ppos, 2, 1);				// 구조체에 값을 저장하고
	LInsert(&list, ppos);					// 값을 저장한 구조체를 리스트에 삽입

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	/*** 저장된 데이터의 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** xpos가 2인 모든 데이터 삭제 ***/
	compPos.xpos=2;				// 비교용으로 만든 구조체 변수에 값을 저장
	compPos.ypos=0;				// 마찬가지

	if(LFirst(&list, &ppos))	// 첫번째 데이터부터 검색
	{
		if(PointComp(ppos, &compPos)==1)	// 값을 비교 해서 x값만 동일 하면
		{
			ppos=LRemove(&list);			// 데이터 삭제
			free(ppos);						// 동적 할당 해제
		}
		
		while(LNext(&list, &ppos))			// 첫번째 데이터가 아닌 다음 메모리에 데이터가 있다면
		{
			if(PointComp(ppos, &compPos)==1)	// 같은 작업
			{
				ppos=LRemove(&list);
				free(ppos);
			}
		}
	}

	/*** 삭제 후 남은 데이터 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}