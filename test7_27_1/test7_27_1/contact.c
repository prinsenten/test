#include"contact.h"



void InitContact(struct Contact* ps)
{
    memset(ps->data, 0, sizeof(ps->data));
    ps->size = 0;
}
void AddContact(struct Contact* ps)
{
    if (ps->size == MAX)
    {
        printf("ͨѶ¼����\n");
    }
    else
    {
        printf("����������:>");
        scanf("%s", ps->data[ps->size].name);
        printf("����������:>");
        scanf("%d", &(ps->data[ps->size].age));//���䲻����������Ҫȡ��ַ;
        printf("�������Ա�:>");
        scanf("%s", ps->data[ps->size].sex);
        printf("������绰:>");
        scanf("%d", ps->data[ps->size].tele);
        printf("�������ַ:>");
        scanf("%s", ps->data[ps->size].addr);

        ps->size++;
        printf("��ӳɹ�\n");
    }
}
void ShowContact(const struct Contact* ps)
{
    if (ps->size == 0)
    {
        printf("ͨѶ¼Ϊ��\n");
    }
    else
    {
        int i = 0;
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
        for (i = 0; i < ps->size; i++)
        {
            printf("%-20s\t%-4d\t%-5s\t%-12d\t%-20s\t\n", ps->data[i].name,
                ps->data[i].age,
                ps->data[i].sex,
                ps->data[i].tele,
                ps->data[i].addr);
        }
    }
}
static int FindByname(const struct Contact* ps, char name[MAX_NAME])
{
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        if (0 == strcmp(ps->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}
void DelContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("������Ҫɾ�������֣�>");
    scanf("%s", name);
    //1.����Ҫɾ��������ʲôλ��
    int pos = FindByname(ps, name);//�ҵ��������ֵ��±꣬�Ҳ�������-1
    //2.ɾ��
    if (pos == -1)
    {
        printf("Ҫɾ�����˲�����\n");
    }
    else
    {
        //ɾ������
        int j = 0;
        for (j = pos; j < ps->size - 1; j++)
        {
            ps->data[j] = ps->data[j + 1];
        }
        ps->size--;
        printf("ɾ���ɹ�\n");
    }
}
void SearchContact(const struct Contact* ps)
{
    char name[MAX_NAME];
    printf("������Ҫ�����˵�����:>");
    scanf("%s", name);
    int pos = FindByname(ps, name);
    if (pos == -1)
    {
        printf("���ҵ��˲�����\n");
    }
    else
    {
        printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
        printf("%-20s\t%-4d\t%-5s\t%-12d\t%-20s\t\n",
            ps->data[pos].name,
            ps->data[pos].age,
            ps->data[pos].sex,
            ps->data[pos].tele,
            ps->data[pos].addr);

    }
}
void ModidfyContact(struct Contact* ps)
{
    char name[MAX_NAME];
    printf("������Ҫ�޸��˵����֣�>");
    scanf("%s", name);
    int pos = FindByname(ps, name);
    if (pos == -1)
    {
        printf("Ҫ�޸��˵���Ϣ������\n");
    }
    else
    {
        printf("����������:>");
        scanf("%s", ps->data[pos].name);
        printf("����������:>");
        scanf("%d", &(ps->data[pos].age));
        printf("�������Ա�:>");
        scanf("%s", ps->data[pos].sex);
        printf("������绰:>");
        scanf("%d", ps->data[pos].tele);
        printf("�������ַ:>");
        scanf("%s", ps->data[pos].addr);

        printf("�޸����\n");

    }
}