#include"speechManager.h"
#include<ctime>
int main()
{
	SpeechManager sm;
	//����ѡ�ִ���
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "ѡ�ֱ��" << it->first << "\tѡ������:" << it->second.m_Name << "\tѡ�ֵ÷�:" << it->second.m_Score[0] << endl;
	//}
	srand((unsigned int)time(NULL));
	int select = 0;
	do 
	{
		sm.show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> select;
		switch (select)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴�����¼
			sm.showRecord();
			break;
		case 3://��ձ���ϵͳ
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			break;
		default:
			cout << "����Ƿ�����������" << endl;
			break;
		}
	} while (select);

	return 0;
}