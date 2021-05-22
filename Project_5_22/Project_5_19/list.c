#include "list.h"
void InitContact(struct cont* ps)
{
	ps->data = (people*)malloc(sizeof(people)*3);
	ps->capacity = 3;
	ps->count = 0;
}

void Add_capacity(struct cont* ps)
{

	struct people* str = calloc(ps->capacity = ps->capacity+2,sizeof(people));
	if (str != NULL)
	{
		ps->data = str;
		printf("成功");
	}

}

void AddIint(struct cont* ps)
{
	if (ps->capacity == ps->count)
	{
		Add_capacity(ps);

	}

		printf("请输入姓名:>");
		scanf("%s", ps->data[ps->count].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->count].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->count].sex);
		printf("请输入电话号码:>");
		scanf("%s", ps->data[ps->count].number);
		
		ps->count++;
		printf("%d",ps->count);
		printf("添加成功！\n");

}

void ShowIint(struct cont* ps)
{
	if (ps->count == 0)
	{
		printf("通讯录为空！\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n","名字","年龄","性别","电话");
		for (int i = 0; i < ps->count; i++)
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
	char Name[5] = {0};
	int i = 0;
	printf("请输入要删除人的名字\n");
	scanf("%s",Name);
	for (i = 0; i < ps->count; i++)
	{
		if (0 == strcmp(ps->data[i].name,Name))
		{
			break;
		}
	}
	if (i == ps->count)
	{
		printf("通讯录中没有此人\n");
	}
	else
	{
		for (int a = i; a < ps->count; a++)
		{
			ps->data[a] = ps->data[a + 1];
		}
		ps->count--;
		printf("删除成功\n");
	}
}

void FindIint(struct cont* ps)
{
	char Name[5] = { 0 };
	int i = 0;
	printf("请输入要查询人的名字\n");
	scanf("%s", Name);
	for (i = 0; i < ps->count; i++)
	{
		if (0 == strcmp(ps->data[i].name, Name))
		{
			break;
		}
	}
	if (i == ps->count)
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
	char Name[5] = {0};
	int i = 0;
	printf("请输入要修改人的名字\n");
	scanf("%s", Name);
	for (i = 0; i < ps->count; i++)
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