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
		printf("�ɹ�");
	}

}

void AddIint(struct cont* ps)
{
	if (ps->capacity == ps->count)
	{
		Add_capacity(ps);

	}

		printf("����������:>");
		scanf("%s", ps->data[ps->count].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->count].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->count].sex);
		printf("������绰����:>");
		scanf("%s", ps->data[ps->count].number);
		
		ps->count++;
		printf("%d",ps->count);
		printf("��ӳɹ���\n");

}

void ShowIint(struct cont* ps)
{
	if (ps->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n","����","����","�Ա�","�绰");
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
	printf("������Ҫɾ���˵�����\n");
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
		printf("ͨѶ¼��û�д���\n");
	}
	else
	{
		for (int a = i; a < ps->count; a++)
		{
			ps->data[a] = ps->data[a + 1];
		}
		ps->count--;
		printf("ɾ���ɹ�\n");
	}
}

void FindIint(struct cont* ps)
{
	char Name[5] = { 0 };
	int i = 0;
	printf("������Ҫ��ѯ�˵�����\n");
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
		printf("ͨѶ¼��û�д���\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n", "����", "����", "�Ա�", "�绰");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", Name);
	for (i = 0; i < ps->count; i++)
	{
		if (0 == strcmp(ps->data[i].name, Name))
		{
			break;
		}
	}
	printf("����������:>");
	scanf("%s", ps->data[i].name);
	printf("����������:>");
	scanf("%d", &(ps->data[i].age));
	printf("�������Ա�:>");
	scanf("%s", ps->data[i].sex);
	printf("������绰����:>");
	scanf("%s", ps->data[i].number);
	
	printf("�޸ĳɹ���\n");
}