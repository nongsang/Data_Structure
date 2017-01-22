#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0

/*** ArrayList�� ���� ****/
#define LIST_LEN	100
typedef int LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];		// int�� �迭 100���� ����� �� �ִ�.
	int numOfData;				// data�� � ��� �ִ�?
	int curPosition;			// ������ ��ġ�� �˷��ش�.
} ArrayList;


/*** ArrayList�� ���õ� ����� ****/
typedef ArrayList List;

void ListInit(List * plist);				// ����Ʈ �ʱ�ȭ
void LInsert(List * plist, LData data);		// ������ ����

int LFirst(List * plist, LData * pdata);	// ù��° ������ �˻�
int LNext(List * plist, LData * pdata);		// ���� ������ �˻�

LData LRemove(List * plist);				// ������ ����
int LCount(List * plist);					// ������ ���� ��ȸ

#endif