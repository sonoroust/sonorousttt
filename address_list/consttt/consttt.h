#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct people
{
	char name[10];
	int age;
	char sex[5];
	char number[12];
};

struct cont
{
	struct people data[100];
	int sage;
};
//初始化通讯录
void InitContact(struct cont* ps);
//增加
void AddIint(struct cont* ps); 
//显示
void ShowIint(struct cont* ps);
//删除
void DelIint(struct cont* ps);
//查找
void FindIint(struct cont* ps);
//修改
void ModIint(struct cont* ps);