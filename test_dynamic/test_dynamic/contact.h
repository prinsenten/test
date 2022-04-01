#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
//#define MAX 1000

#define DEFAULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	int capacity;//��ǰͨѶ¼�������
};

//��������
void InitContact(struct Contact* ps);//��ʼ��ͨѶ¼����
void AddContact(struct Contact* ps);//����һ����Ϣ��ͨѶ¼
void ShowContact(const struct Contact* ps);//��ӡͨѶ¼�е���Ϣ
void DelContact(struct Contact* ps);//ɾ��ָ����ϵ��
void SearchContact(const struct Contact* ps);//����ָ���˵���Ϣ
void ModifyContact(struct Contact* ps);//�޸�ָ����ϵ��

void DestroyContact(struct Contact* ps);
void SaveContact(struct Contact* ps); //�����ļ�
void LoadContact(struct Contact* ps);//�����ļ�����Ϣ��ͨѶ¼