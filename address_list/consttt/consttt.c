#include "consttt.h"
void InitContact(struct cont* ps)
{
	memset(ps->data,0, sizeof(ps->data));
	ps->sage = 0;
}

void AddIint(struct cont* ps)
{
	if (ps->sage == 100)
	{
		printf("通讯录已满，请释放空间");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->data[ps->sage].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->sage].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->sage].sex);
		printf("请输入电话号码:>");
		scanf("%s", ps->data[ps->sage].number);
		
		ps->sage++;
		printf("%d",ps->sage);
		printf("添加成功！\n");
	}

}

void ShowIint(struct cont* ps)
{
	if (ps->sage == 0)
	{
		printf("通讯录为空！\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n","名字","年龄","性别","电话");
		for (int i = 0; i < ps->sage; i++)
		{
			printf("%5s %5d %5s %10s", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].number);
			printf("\n");
		}
	}
}

void DelIint(struct cont* ps)
{
	char Name[5];
	int i = 0;
	printf("请输入要删除人的名字\n");
	scanf("%s",Name);
	for (i = 0; i < ps->sage; i++)
	{
		if (0 == strcmp(ps->data[i].name,Name))
		{
			break;
		}
	}
	if (i == ps->sage)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		for (int a = i; a < ps->sage; a++)
		{
			ps->data[a] = ps->data[a + 1];
		}
		ps->sage--;
		printf("删除成功\n");
	}
}

void FindIint(struct cont* ps)
{
	char Name[5] = { 0 };
	int i = 0;
	printf("请输入要查询人的名字\n");
	scanf("%s", Name);
	for (i = 0; i < ps->sage; i++)
	{
		if (0 == strcmp(ps->data[i].name, Name))
		{
			break;
		}
	}
	if (i == ps->sage)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n", "名字", "年龄", "性别", "电话");
			printf("%5s %5d %5s %10s",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].number);
			printf("\n");
	}
}

void ModIint(struct cont* ps)
{
	char Name[5];
	int i = 0;
	printf("请输入要修改人的名字\n");
	scanf("%s", Name);
	for (i = 0; i < ps->sage; i++)
	{
		if (0 == strcmp(ps->data[i].name, Name))
		{
			break;
		}
	}
	printf("请输入姓名:>");
	scanf("%s", ps->data[i].name);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[i].age));
	printf("请输入性别:>");
	scanf("%s", ps->data[i].sex);
	printf("请输入电话号码:>");
	scanf("%s", ps->data[i].number);
	
	printf("修改成功！\n");
}