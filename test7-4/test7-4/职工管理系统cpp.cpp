#include"workerManger.h"
//#include"Worker.h"
//#include"employee.h"
//#include"boss.h"
//#include"Manager.h"
int main()
{
	////���Դ���
	//Worker* worker = NULL;
	//worker = new Employee(1,"����",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2, "����",2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;
	//ʵ���������߶���
	WorkerManager wm;
	int choice = 0;
	while (1)
	{
		wm.Show_Menu();
		cout << "���������ѡ��" << endl;
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
			cout << "����Ƿ�����������" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}