#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0

/*** ArrayList의 정의 ****/
#define LIST_LEN	100
typedef int LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];		// int형 배열 100개를 사용할 수 있다.
	int numOfData;				// data가 몇개 들어 있니?
	int curPosition;			// 현재의 위치를 알려준다.
} ArrayList;


/*** ArrayList와 관련된 연산들 ****/
typedef ArrayList List;

void ListInit(List * plist);				// 리스트 초기화
void LInsert(List * plist, LData data);		// 데이터 삽입

int LFirst(List * plist, LData * pdata);	// 첫번째 데이터 검색
int LNext(List * plist, LData * pdata);		// 이후 데이터 검색

LData LRemove(List * plist);				// 데이터 삭제
int LCount(List * plist);					// 데이터 갯수 조회

#endif