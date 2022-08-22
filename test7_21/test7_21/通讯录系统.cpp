#include<iostream>
using namespace std;
#include<string>
#define Max 1000
struct Person
{
	string m_Name;
	string m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks
{
	struct Person personArray[Max];
	int m_Size;
};



void showMess(Addressbooks *abs,int pos)
{
	cout << " ������" << abs->personArray[pos].m_Name << endl;
	cout << "�Ա�" << abs->personArray[pos].m_Sex << endl;
	cout << " ���䣺" << abs->personArray[pos].m_Age << endl;
	cout << " �ֻ��ţ�" << abs->personArray[pos].m_Phone << endl;
	cout << " ��ַ��" << abs->personArray[pos].m_Addr << endl;
}
void showMenu()
{
	cout << "**********************" << endl;
	cout << "**** 1.�����ϵ�� ****" << endl;
	cout << "**** 2.��ʾ��ϵ�� ****" << endl;
	cout << "**** 3.ɾ����ϵ�� ****" << endl;
	cout << "**** 4.������ϵ�� ****" << endl;
	cout << "**** 5.�޸���ϵ�� ****" << endl;
	cout << "**** 6.�����ϵ�� ****" << endl;
	cout << "**** 0.�˳�ͨѶ¼ ****" << endl;
	cout << "**********************" << endl;
}
void addPerson(Addressbooks *abs)
{
	if (abs->m_Size == Max)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		string name;
		cout << "����������:" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		int sex;
		cout << "�������Ա�: 1.�� 2.Ů" << endl;
		cin >> sex;
		if (sex == 1)
		{
			abs->personArray[abs->m_Size].m_Sex = "��";
		}
		else
		{
			abs->personArray[abs->m_Size].m_Sex = "Ů";
		}
		int age;
		cout << "����������:" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		string phone;
		cout << "���������:" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		string addr;
		cout << "�������ַ:" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		abs->m_Size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");
	}
}
void showPeson(Addressbooks *abs)
{
	if (abs->m_Size == 0)
	{
		cout << "��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			showMess(abs, i);	
			cout << "--------------------------" << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExist(Addressbooks* abs, string name)
{
	
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}
void Delete(Addressbooks* abs)
{
	cout << "������ɾ����������" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs,name);
	if (pos != -1)
	{
		cout << "���ҵ�����" << endl;
		showMess(abs, pos);
	
		cout << "�Ƿ�ɾ��: 1.ȷ�� 2.����" << endl;
		int ret = 0;
		cin >> ret;
		if (ret == 1)
		{
			for (int i = pos; i < abs->m_Size-1; i++)
			{
				abs->personArray[i] = abs->personArray[i + 1];
			}
			abs->m_Size--;
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			return;
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs, name);
	if (pos != -1)
	{
		cout << "���ҵ�����" << endl;
		showMess(abs, pos);
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int pos = isExist(abs, name);
	if (pos != -1)
	{
		cout << "���ҵ�����" << endl;
		showMess(abs, pos);

		cout << "��������Ҫ�޸ĵ���Ϣ��1.���� 2.���� 3.�Ա� 4.�ֻ��� 5.��ַ 0.�˳� " << endl;
		while (1)
		{
			int select;
			cin >> select;
			switch (select)
			{
			case 1:
			{
				cout << "��������Ҫ�޸ĵ�����:" << endl;
				string name;
				cin >> name;
				abs->personArray[pos].m_Name = name;
				cout << "�����޸ĳɹ�" << endl;
			}
				break;
			case 2:
			{
				cout << "��������Ҫ�޸ĵ�����:" << endl;
				int age;
				cin >> age;
				abs->personArray[pos].m_Age = age;
				cout << "�����޸ĳɹ�" << endl;
			}
				break;
			case 3:
			{
				cout << "��������Ҫ�޸ĵ��Ա�:" << endl;
				string sex;
				cin >> sex;
				abs->personArray[pos].m_Sex = sex;
				cout << "�Ա��޸ĳɹ�" << endl;
			}
				break;
			case 4:
			{
				cout << "��������Ҫ�޸ĵ��ֻ���:" << endl;
				string phone;
				cin >> phone;
				abs->personArray[pos].m_Phone = phone;
				cout << "�ֻ����޸ĳɹ�" << endl;
			}
				break;
			case 5:
			{
				cout << "��������Ҫ�޸ĵĵ�ַ:" << endl;
				string addr;
				cin >> addr;
				abs->personArray[pos].m_Addr = addr;
				cout << "��ַ�޸ĳɹ�" << endl;
			}
				break;
			case 0:
				cout << "�˳�" << endl;
				return;
				break;
			default:
				cout << "����������������" << endl;
				break;
			}
			cout << "��������Ҫ�޸ĵ���Ϣ" << endl;
		}
	}
	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
int main()
{
	Addressbooks abs;

	abs.m_Size = 0;
	while (1)
	{
		showMenu();
		int select = 0;
		cin >> select;
		switch (select)
		{
		case 1:
			addPerson(&abs);
			break;
		case 2:
			showPeson(&abs);
			break;
		case 3:
			Delete(&abs);
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
			system("pause");
			return 0;
			break;
		default:
			cout << "���������������" << endl;
			break;
		}
	}
	system("pause");
	system("cls");
	return 0;
}