#include "consttt.h"
void menm()
{
	printf("*********************\n");
	printf("***1.����   2.ɾ��***\n");
	printf("***3.����   4.�޸�***\n");
	printf("***5.�鿴   6.�˳�***\n");
	printf("*********************\n");
}
int main()
{
	struct cont con;
	int input = 0;
	InitContact(&con);
	do
	{
		menm();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddIint(&con);
			break;
		case 2:
			DelIint(&con);
			break;
		case 3:
			FindIint(&con);
			break;
		case 4:
			ModIint(&con);
			break;
		case 5:
			ShowIint(&con);
			break;
		case 6:
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
	return 0;
}