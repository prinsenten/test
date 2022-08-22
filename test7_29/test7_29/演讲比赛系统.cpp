#include"speechManager.h"
#include<ctime>
int main()
{
	SpeechManager sm;
	//测试选手创建
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号" << it->first << "\t选手姓名:" << it->second.m_Name << "\t选手得分:" << it->second.m_Score[0] << endl;
	//}
	srand((unsigned int)time(NULL));
	int select = 0;
	do 
	{
		sm.show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> select;
		switch (select)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届记录
			sm.showRecord();
			break;
		case 3://清空比赛系统
			sm.clearRecord();
			break;
		case 0://退出系统
			cout << "欢迎下次使用" << endl;
			system("pause");
			break;
		default:
			cout << "输入非法，重新输入" << endl;
			break;
		}
	} while (select);

	return 0;
}