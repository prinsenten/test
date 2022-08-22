#include"标头.h"
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct Student s1;
//	s1.age = 13;
//	s1.name = "张三";
//	s1.score = 80;
//	cout << "姓名：" << s1.name << "年龄：" << s1.age << "分数：" << s1.score;
//	return 0;
//}

//struct Student 
//{
//	string name;
//	int score;
//};

//struct Teacher
//{
//	string name;
//	struct Student stu[5];
//};
//void allocateSpace(struct Teacher arr[], int x)
//{
//	string nameneed = "ABCDE";
//	for (int i = 0; i < x; i++)
//	{
//		arr[i].name = "Teacher_";
//		arr[i].name += nameneed[i];
//		for (int j = 0; j < 5; j++)
//		{
//			arr[i].stu[j].name = "Student_";
//			arr[i].stu[j].name += nameneed[j];
//
//			int random = rand() % 61 + 40;
//			arr[i].stu[j].score = random;
//		}
//	}
//}
//void PrintInfo(struct Teacher arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师: " << arr[i].name<<endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << " 学生: " << arr[i].stu[j].name
//				<< " 分数: " << arr[i].stu[j].score<<endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct Teacher arr[3];
//	int len = sizeof(arr) / sizeof(arr[0]);
//	allocateSpace(arr, len);
//	PrintInfo(arr, len);
//	return 0;
//}




//
//struct Hero
//{
//	string name;
//	int age;
//	string sex;
//};
//void bubblesort(struct Hero hero[],int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		for (int j = 0; j < len - i-1; j++)
//		{
//			if (hero[j].age > hero[j + 1].age)
//			{
//				struct Hero tmp = hero[j];
//				hero[j] = hero[j + 1];
//				hero[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	struct Hero hero[5] = {
//		{"刘备",23,"男"},
//		{"关羽",22,"男"},
//		{"张飞",20,"男"},
//		{"赵云",21,"男"},
//		{"貂蝉",19,"女"} };
//	int len = sizeof(hero) / sizeof(hero[0]);
//	bubblesort(hero, len);
//	for (int i = 0; i < len; i++)
//	{
//		cout << hero[i].name<<hero[i].age<<hero[i].sex << endl;
//	}
//	return 0;
//}

void menu()
{
	cout << "********************" << endl;
	cout << "**  1.添加联系人  **" << endl;
	cout << "**  2.显示联系人  **" << endl;
	cout << "**  3.删除联系人  **" << endl;
	cout << "**  4.查找联系人  **" << endl;
	cout << "**  5.修改联系人  **" << endl;
	cout << "**  6.清空联系人  **" << endl;
	cout << "**  0.退出通讯录  **" << endl;
	cout << "********************" << endl;
}
int main()
{

	Addressbooks abs;
	abs.size = 0;

	int select = 0;
	
	do
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPerson(&abs);
			break;
		case 3:
			deletPerson(&abs);
			break;
		case 4:
			findPerson(&abs);
			break;
		case 5:
			modifyPerson(&abs);
			break;
		case 6:
			cleanPerson(&abs);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			break;
		default:
			cout << "输入非法，重新输入" << endl;
			break;
		}
	} while (select);
	
	return 0;
}