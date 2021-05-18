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
		printf("ͨѶ¼���������ͷſռ�");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->data[ps->sage].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->sage].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->sage].sex);
		printf("������绰����:>");
		scanf("%s", ps->data[ps->sage].number);
		
		ps->sage++;
		printf("%d",ps->sage);
		printf("��ӳɹ���\n");
	}

}

void ShowIint(struct cont* ps)
{
	if (ps->sage == 0)
	{
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	else
	{
		printf("%5s %5s %5s %10s\n","����","����","�Ա�","�绰");
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
	printf("������Ҫɾ���˵�����\n");
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
		printf("ͨѶ¼��û�д���\n");
	}
	else
	{
		for (int a = i; a < ps->sage; a++)
		{
			ps->data[a] = ps->data[a + 1];
		}
		ps->sage--;
		printf("ɾ���ɹ�\n");
	}
}

void FindIint(struct cont* ps)
{
	char Name[5] = { 0 };
	int i = 0;
	printf("������Ҫ��ѯ�˵�����\n");
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
	char Name[5];
	int i = 0;
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", Name);
	for (i = 0; i < ps->sage; i++)
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