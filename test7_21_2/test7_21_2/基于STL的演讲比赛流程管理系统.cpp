#include<iostream>
using namespace std;

#include"speechManager.h"

int main()
{
	SpeechManager sm;

	int choice = 0;
	while (1)
	{
		sm.showMenu();
		cout << "请选择:" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			sm.startSpeech();
			break;
		case 2:
			sm.showRecord();
			break;
		case 3:
			sm.clearRecord();
			break;	
		case 0:
			cout << "退出程序" << endl;
			exit(0);
			break;
		default:
			cout << "输入错误,重新输入" << endl;
			break;
		}
	
	
	}
	
	return 0;
}