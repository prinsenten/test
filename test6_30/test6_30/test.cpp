#include"��ͷ.h"
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
//	s1.name = "����";
//	s1.score = 80;
//	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score;
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
//		cout << "��ʦ: " << arr[i].name<<endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << " ѧ��: " << arr[i].stu[j].name
//				<< " ����: " << arr[i].stu[j].score<<endl;
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
//		{"����",23,"��"},
//		{"����",22,"��"},
//		{"�ŷ�",20,"��"},
//		{"����",21,"��"},
//		{"����",19,"Ů"} };
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
	cout << "**  1.�����ϵ��  **" << endl;
	cout << "**  2.��ʾ��ϵ��  **" << endl;
	cout << "**  3.ɾ����ϵ��  **" << endl;
	cout << "**  4.������ϵ��  **" << endl;
	cout << "**  5.�޸���ϵ��  **" << endl;
	cout << "**  6.�����ϵ��  **" << endl;
	cout << "**  0.�˳�ͨѶ¼  **" << endl;
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
			cout << "��ӭ�´�ʹ��" << endl;
			break;
		default:
			cout << "����Ƿ�����������" << endl;
			break;
		}
	} while (select);
	
	return 0;
}