#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist)				// ����Ʈ �ʱ�ȭ
{
	(plist->numOfData) = 0;				// data�� ���� 0
	(plist->curPosition) = -1;			// ���� ��ġ�� -1    �׳� �ƹ� ���̳� �����Ѱ� ������
}

void LInsert(List * plist, LData data)	// ������ ����
{
	if(plist->numOfData > LIST_LEN)		// data�� ���� 100�� ������
	{
		puts("������ �Ұ����մϴ�.");		// ���� �Ұ�
		return;							// �Լ� ����
	}
											// �װ� �ƴ϶��
	plist->arr[plist->numOfData] = data;	// ���� ��ġ�� data �����ϰ�
	(plist->numOfData)++;					// data�� ���� 1 �þ�� �˸���.
}

int LFirst(List * plist, LData * pdata)		// �迭 ó�� ��ġ ������ ��ȸ
{
	if(0 == plist->numOfData)				// data�� ���� 0�̸� FALSE ��ȯ
		return FALSE;

	(plist->curPosition) = 0;				// ���� ��ġ�� 0���� ����
	*pdata = plist->arr[0];					// pdata�� ����Ű�� ��ġ�� �迭�� ù��° ��ġ�� �����Ѵ�.
	return TRUE;							// TRUE ��ȯ
}

int LNext(List * plist, LData * pdata)				// ù��° ������ ���� ������ ��ȸ
{
	if(plist->curPosition >= (plist->numOfData)-1)	// ���� ��ġ�� data�� �� - 1���� ũ�ų� ���ٸ�
		return FALSE;								// FALSE ��ȯ

	(plist->curPosition)++;							// �װ� �ƴ϶�� ���� ��ġ���� ++
	*pdata = plist->arr[plist->curPosition];		// pdata�� ���� �迭 ���� ��ġ�� �ִ� ���� �����Ѵ�.
	return TRUE;
}

LData LRemove(List * plist)					// ������ ����
{
	int rpos = plist->curPosition;			// ����� ���� ��ġ�� ���� ��ġ����
	int num = plist->numOfData;				// ���� ���� �迭�� �ִ� data ����
	int i;
	LData rdata = plist->arr[rpos];			// ���� �����ʹ� �迭�� ���� ��ġ����

	for(i=rpos; i<num-1; i++)				// ���� ��ġ���� ������ ũ����� �˻�
		plist->arr[i] = plist->arr[i+1];	// �迭 ���� ��ġ�� �ִ� ���� ������ ����´�.

	(plist->numOfData)--;
	(plist->curPosition)--;
	return rdata;
}

int LCount(List * plist)		// �������� ũ�� ��ȯ
{
	return plist->numOfData;
}