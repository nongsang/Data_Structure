#include <stdio.h>
#include "point.h"

void SetPointPos(Point * ppos, int xpos, int ypos)				// ����ü ������ ���� ����
{
	ppos->xpos = xpos;
	ppos->ypos = ypos;
}

void ShowPointPos(Point * ppos)									// ����ü�� ���� ���
{
	printf("[%d, %d] \n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point * pos2)						// ����ü�� ���� ��
{
	if(pos1->xpos == pos2->xpos && pos1->ypos == pos2->ypos)	// x, y�� ���ٸ�
		return 0;												// 0 ��ȯ
	else if(pos1->xpos == pos2->xpos)							// x�� ���ٸ�
		return 1;												// 1 ��ȯ
	else if(pos1->ypos == pos2->ypos)							// y�� ���ٸ�
		return 2;												// 2 ��ȯ
	else														// ���� �ٸ���
		return -1;												// -1 ��ȯ
}