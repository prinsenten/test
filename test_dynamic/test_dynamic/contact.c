
#include"contact.h"



void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return 0;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//把文件已经存放在通讯录中的信息加载到通讯录中
	LoadContact(ps);
}
//声明函数(将后面实现的函数但是目前需要使用，所有需要放到前面声明)
void CheckCapacity(struct Contact* ps);

void LoadContact(struct Contact* ps)
{
	struct PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact::%s\n", strerror(errno));
		return;
	}
	//读取文件
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pfRead))//如果什么都没读到就跳出循环
	{
		CheckCapacity(ps);//检查容量
		ps->data[ps->size] = tmp;
		ps->size++;
	}

	fclose(pfRead);
	pfRead = NULL;
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		//增容
		struct PeoInfo* ptr=realloc(ps->data,(ps->capacity + 2)*sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//检测当前通讯录的容量
	//如果满了就增加空间，如果不满就不操作
	CheckCapacity(ps);
	//增加数据
	printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));//年龄不是数组所以要取地址;
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%d", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	//if (ps->size ==MAX )
	//{
	//	printf("通讯录已满\n");
	//}
	//else
	//{
	//	printf("请输入名字:>");
	//	scanf("%s", ps->data[ps->size].name);
	//	printf("请输入年龄:>");
	//	scanf("%d", &(ps->data[ps->size].age));//年龄不是数组所以要取地址;
	//	printf("请输入性别:>");
	//	scanf("%s", ps->data[ps->size].sex);
	//	printf("请输入电话:>");
	//	scanf("%d", ps->data[ps->size].tele);
	//	printf("请输入地址:>");
	//	scanf("%s", ps->data[ps->size].addr);

	//	ps->size++;
	//	printf("添加成功\n");
	//}
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
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
static int FindByname(const struct Contact* ps,char name[MAX_NAME])
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
	printf("请输入要删除的名字：>");
	scanf("%s", name);
	//1.查找要删除的人在什么位置
	int pos=FindByname(ps,name);//找到返回名字的下标，找不到返回-1
	//2.删除
	if (pos==-1)
	{
		printf("要删除的人不存在\n");
	}	
	else
	{
		//删除数据
		int j = 0;
		for (j = pos; j < ps->size-1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos=FindByname(ps, name);
	if (pos == -1)
	{
		printf("查找到人不存在\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");	
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
	printf("请输入要修改人的名字：>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%d", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");

	}
}
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps = NULL;
}

void SaveContact(struct Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat","wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact::%s\n", strerror(errno));
		return;
	}
	//写通讯录中的数据到文件中
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->data[i]), sizeof(struct PeoInfo), 1, pfWrite);
	}
	
	//关闭文件
	fclose(pfWrite);
	pfWrite = NULL;
}






