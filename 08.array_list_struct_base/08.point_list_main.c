#include <stdio.h>
#include <stdlib.h>
#include "array_list.h"
#include "point.h"

int main(void)
{
	List list;
	Point compPos;
	Point * ppos;

	ListInit(&list);				// ����Ʈ �ʱ�ȭ�� ���� ���ش�.

	/*** 4���� ������ ���� ***/
	ppos = (Point*)malloc(sizeof(Point));	// ����ü 1���� �޸� ���� �Ҵ�
	SetPointPos(ppos, 2, 1);				// ����ü�� ���� �����ϰ�
	LInsert(&list, ppos);					// ���� ������ ����ü�� ����Ʈ�� ����

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	SetPointPos(ppos, 3, 2);
	LInsert(&list, ppos);

	/*** ����� �������� ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	/*** xpos�� 2�� ��� ������ ���� ***/
	compPos.xpos=2;				// �񱳿����� ���� ����ü ������ ���� ����
	compPos.ypos=0;				// ��������

	if(LFirst(&list, &ppos))	// ù��° �����ͺ��� �˻�
	{
		if(PointComp(ppos, &compPos)==1)	// ���� �� �ؼ� x���� ���� �ϸ�
		{
			ppos=LRemove(&list);			// ������ ����
			free(ppos);						// ���� �Ҵ� ����
		}
		
		while(LNext(&list, &ppos))			// ù��° �����Ͱ� �ƴ� ���� �޸𸮿� �����Ͱ� �ִٸ�
		{
			if(PointComp(ppos, &compPos)==1)	// ���� �۾�
			{
				ppos=LRemove(&list);
				free(ppos);
			}
		}
	}

	/*** ���� �� ���� ������ ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &ppos))
	{
		ShowPointPos(ppos);
		
		while(LNext(&list, &ppos))
			ShowPointPos(ppos);
	}
	printf("\n");

	return 0;
}