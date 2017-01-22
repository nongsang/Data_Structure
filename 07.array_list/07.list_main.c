#include <stdio.h>
#include "array_list.h"

int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;			// 배열을 가진 구조체 생성
	int data;			// 저장할 데이터 값
	ListInit(&list);

	/*** 5개의 데이터 저장 ***/
	LInsert(&list, 11);  LInsert(&list, 11);
	LInsert(&list, 22);  LInsert(&list, 22);
	LInsert(&list, 33);

	/*** 저장된 데이터의 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &data))    // 첫 번째 데이터 조회
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))    // 두 번째 이후의 데이터 조회
			printf("%d ", data);
	}
	printf("\n\n");

	/*** 숫자 22을 탐색하여 모두 삭제 ***/
	if(LFirst(&list, &data))		// 첫번째 데이터를 탐색하는데
	{
		if(data == 22)				// 데이터가 22라면
			LRemove(&list);			// 값을 지운다.
		
		while(LNext(&list, &data))	// 다음 위치에도 탐색하는데
		{
			if(data == 22)			// 데이터가 22라면
				LRemove(&list);		// 값을 지운다.
		}
	}

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}