#include"manager.h"


Manager::Manager()
{

}
Manager::Manager(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;
}
void Manager::operMenu()
{
	cout << "��ӭ����Ա" << this->m_Name << "��¼" << endl;
	cout << "\t\t ------------------------------------\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             1.����˺�             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             2.�鿴�˺�             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             3.�鿴����             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             4.���ԤԼ             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             0.ע����¼             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t ------------------------------------\n";
	cout << "����������ѡ��:" << endl;
}
//����˺�
void addPerson()
{
	cout << "����������˺ŵ�����:" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;

	int select = 0;
	cin >> select;

}
//�鿴�˺�
void showPerson()
{

}
//�鿴������Ϣ
void showComputer()
{

}
//���ԤԼ��¼
void cleanFile()
{

}
//��ʼ������
void initVector()
{


}