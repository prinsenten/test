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
		cout << "��ѡ��:" << endl;
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
			cout << "�˳�����" << endl;
			exit(0);
			break;
		default:
			cout << "�������,��������" << endl;
			break;
		}
	
	
	}
	
	return 0;
}