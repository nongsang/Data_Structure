#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)				// 리스트 초기화
{
	(plist->numOfData) = 0;				// data의 수는 0
	(plist->curPosition) = -1;			// 현재 위치는 -1    그냥 아무 값이나 저장한거 같은데
}

void LInsert(List * plist, LData data)	// 데이터 삽입
{
	if(plist->numOfData > LIST_LEN)		// data의 수가 100을 넘으면
	{
		puts("저장이 불가능합니다.");		// 저장 불가
		return;							// 함수 종료
	}
											// 그게 아니라면
	plist->arr[plist->numOfData] = data;	// 현재 위치에 data 삽입하고
	(plist->numOfData)++;					// data의 수가 1 늘어남을 알린다.
}

int LFirst(List * plist, LData * pdata)		// 배열 처음 위치 데이터 조회
{
	if(0 == plist->numOfData)				// data의 수가 0이면 FALSE 반환
		return FALSE;

	(plist->curPosition) = 0;				// 현재 위치를 0으로 설정
	*pdata = plist->arr[0];					// pdata가 가리키는 위치는 배열의 첫번째 위치를 전달한다.
	return TRUE;							// TRUE 반환
}

int LNext(List * plist, LData * pdata)				// 첫번째 데이터 이후 데이터 조회
{
	if(plist->curPosition >= (plist->numOfData)-1)	// 현재 위치가 data의 수 - 1보다 크거나 같다면
		return FALSE;								// FALSE 반환

	(plist->curPosition)++;							// 그게 아니라면 현재 위치에서 ++
	*pdata = plist->arr[plist->curPosition];		// pdata의 값에 배열 현재 위치에 있는 값을 전달한다.
	return TRUE;
}

LData LRemove(List * plist)					// 데이터 삭제
{
	int rpos = plist->curPosition;			// 지우기 위한 위치는 현재 위치부터
	int num = plist->numOfData;				// 지울 수는 배열에 있는 data 수로
	int i;
	LData rdata = plist->arr[rpos];			// 지울 데이터는 배열의 현재 위치부터

	for(i=rpos; i<num-1; i++)				// 현재 위치에서 데이터 크기까지 검색
		plist->arr[i] = plist->arr[i+1];	// 배열 다음 위치에 있던 값을 앞으로 끌어온다.

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List * plist)		// 데이터의 크기 반환
{
	return plist->numOfData;
}