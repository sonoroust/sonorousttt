#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct people
{
	char name[10];
	int age;
	char sex[5];
	char number[12];
}people;

struct cont
{
	people* data;
	int capacity;
	int count;
};
//��ʼ��ͨѶ¼
void InitContact(struct cont* ps);
//����
void AddIint(struct cont* ps); 
//��ʾ
void ShowIint(struct cont* ps);
//ɾ��
void DelIint(struct cont* ps);
//����
void FindIint(struct cont* ps);
//�޸�
void ModIint(struct cont* ps);