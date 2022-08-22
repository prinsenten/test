#include"��ͷ.h"
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ���
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼����,�޷����" << endl;
	}
	else
	{
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArr[abs->size].Name = name;

		cout << "�������Ա�: " << endl;
		cout << "1--��   2--Ů" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[abs->size].Sex = sex;
				break;
			}
			cout << "���������������" << endl;
		}

		cout << "����������: " << endl;
		int age = 0;
		while (1)
		{
			cin >> age;
			if (age < 100)
			{
				abs->personArr[abs->size].Age = age;
				break;
			}
			else
			{
				cout << "��ֵ������������" << endl;
			}
		}
		
		cout << "���������:" << endl;
		string phone;
		cin >> phone;
		abs->personArr[abs->size].Phone = phone;

		cout << "�������ַ:" << endl;
		string addr ;
		cin >> addr;
		abs->personArr[abs->size].Addr = addr;

		abs->size++;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}
}
void showPerson(Addressbooks *abs)
{
	if (abs->size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "����: " << abs->personArr[i].Name
				<< " ����: " << abs->personArr[i].Age
				<< " �Ա�: " << (abs->personArr[i].Sex == 1 ? "��":"Ů")
				<< " �绰: " << abs->personArr[i].Phone
				<< " סַ: " << abs->personArr[i].Addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int isExit(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArr[i].Name == name)
		{
			return i;
		}
	}
	return -1;
}
void deletPerson(Addressbooks* abs)
{
	string name;
	cout << "������Ҫɾ������:" << endl;
	cin >> name;
	int found = isExit(abs, name);
	if ( found== -1)
	{
		cout << "���޴��� " << endl;
	}
	else
	{
		cout << "�鵽����,�Ƿ�ɾ��    1-ȷ��ɾ�� 0-ȡ�� " << endl;
		int ret = 1;
		while (ret)
		{
			cin >> ret;
			if (ret == 1)
			{
				for (int i = found; i < abs->size - 1; i++)
				{
					abs->personArr[i] = abs->personArr[i + 1];

				}
				abs->size--;
				cout << "ɾ���ɹ� " << endl;
				break;
			}
			else if (ret == 0)
				break;
			else
			{
				cout << "����Ƿ����������� " << endl;
			}
		}
		
	}
	system("pause");
	system("cls");
}
void findPerson(Addressbooks* abs)
{
	cout << "������Ҫ���ҵ���ϵ��: " << endl;
	string name;
		cin >> name;
		int i = isExit(abs, name);
		if (i == -1)
		{
			cout << "���޴��ˣ��������� " << endl;
		}
		else
		{
			cout << "����: " << abs->personArr[i].Name
				<< " ����: " << abs->personArr[i].Age
				<< " �Ա�: " << (abs->personArr[i].Sex == 1 ? "��" : "Ů")
				<< " �绰: " << abs->personArr[i].Phone
				<< " סַ: " << abs->personArr[i].Addr << endl;

		}
		system("pause");
		system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��:" << endl;
	string name;
	cin >> name;
	int i = isExit(abs, name);
	if (i == -1)
	{
		cout << "���޴��ˣ��������� " << endl;
	}
	else
	{
		string name;
		cout << "����������: " << endl;
		cin >> name;
		abs->personArr[i].Name = name;

		cout << "�������Ա�: " << endl;
		cout << "1--��   2--Ů" << endl;
		int sex = 0;
		while (1)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArr[i].Sex = sex;
				break;
			}
			cout << "���������������" << endl;
		}

		cout << "����������: " << endl;
		int age = 0;
		while (1)
		{
			cin >> age;
			if (age < 100)
			{
				abs->personArr[i].Age = age;
				break;
			}
			else
			{
				cout << "��ֵ������������" << endl;
			}
		}

		cout << "���������:" << endl;
		string phone;
		cin >> phone;
		abs->personArr[i].Phone = phone;

		cout << "�������ַ:" << endl;
		string addr;
		cin >> addr;
		abs->personArr[i].Addr = addr;
	}
	system("pause");
	system("cls");
}
void cleanPerson(Addressbooks* abs)
{
	abs->size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
