#include<iostream>
using namespace std;
#include"workerManager.h"

int main()
{
	WorkerManger wm;
	int choice = 0;
	while (1)
	{
		wm.show_Menu();
		cout << "请输入你的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			wm.ExitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			system("cls");
			cout << "输入非法，重新输入" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}