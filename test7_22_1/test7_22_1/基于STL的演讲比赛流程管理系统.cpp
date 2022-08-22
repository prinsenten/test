#include"speechManager.h"


int main()
{
	SpeechManager sm;

	while (1)
	{
		sm.Menu();
		int choice = 0;
		cin >> choice;

		switch (choice)
		{
		case 1:
			sm.startSpeech();
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			cout << "ÍË³ö³ÌÐò" << endl;
			exit(0);
			break;
		default:
			cout << "ÊäÈë´íÎó" << endl;
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}