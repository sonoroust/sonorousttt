#include "consttt.h"
void menm()
{
	printf("*********************\n");
	printf("***1.增加   2.删除***\n");
	printf("***3.查找   4.修改***\n");
	printf("***5.查看   6.退出***\n");
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
		printf("请输入:>");
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
			printf("输入错误请重新输入");
			break;
		}
	} while (input);
	return 0;
}