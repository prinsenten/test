#include"teacher.h"

Teacher::Teacher()
{

}
Teacher::Teacher(int emid, string name, string pwd)
{
	this->m_Empid = emid;
	this->m_Name = name;
	this->m_Pwd = pwd;
}
void Teacher::operMenu()
{
	cout << "��ӭ��ʦ" << this->m_Name << "��¼" << endl;
	cout << "\t\t ------------------------------------\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             1.�鿴����ԤԼ         |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             2.���ԤԼ             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t|             0.ע����¼             |\n";
	cout << "\t\t|                                    |\n";
	cout << "\t\t ------------------------------------\n";
	cout << "����������ѡ��:" << endl;
}
//չʾ����ԤԼ
void Teacher::showAllOrder()
{
	Student stu;
	stu.showAllOrder();
	/*OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++)
	{
		cout << i + 1 << "��";

		cout << "ԤԼ����:��" << of.m_orderDate[i]["date"];
		cout << " ʱ�Σ�" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
		cout << " ѧ�ţ�" << of.m_orderDate[i]["stuId"];
		cout << " ������" << of.m_orderDate[i]["stuName"];
		cout << " ������" << of.m_orderDate[i]["roomId"];
		string status = " ״̬��";
		if (of.m_orderDate[i]["status"] == "1")
		{
			status += "�����";
		}
		else if (of.m_orderDate[i]["status"] == "2")
		{
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_orderDate[i]["status"] == "-1")
		{
			status += "���δͨ����ԤԼʧ��";
		}
		else
		{
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");*/
}
//���ԤԼ
void Teacher::vailOrder()
{
	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;

	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderDate[i]["status"] == "1" )
		{
			v.push_back(i);
			cout << index++ << "��";

			cout << "ԤԼ����:��" << of.m_orderDate[i]["date"];
			cout << " ʱ��:" << (of.m_orderDate[i]["interval"] == "1" ? "����" : "����");
			cout << " ����:" << of.m_orderDate[i]["roomId"];
			string status = " ״̬��";
			if (of.m_orderDate[i]["status"] == "1")
			{
				status += "�����";
			}
			cout << status << endl;
		}
	}
	cout << "��������˵ĵļ�¼ԤԼ��0������" << endl;
	int select = 0;
	int ret = 0;
	while (1)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.��ͨ��" << endl;
				cin >> ret;

				if (ret == 1)
				{
					of.m_orderDate[v[select - 1]]["status"] = "2";
				}
				else
				{
					of.m_orderDate[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();
				cout << "�����ϣ�" << endl;
				break;
			}
		}
		cout << "����������������" << endl;
	}
	system("pause");
	system("cls");
}

