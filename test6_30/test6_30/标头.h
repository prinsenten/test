#include<iostream>
using namespace std;
#include<string>
#include<ctime>
#define MAX 1000
struct Person
{
	string Name;
	int Sex;
	int Age;
	string Phone;
	string Addr;
};
struct Addressbooks
{
	struct Person personArr[MAX];
	int size;
};


void addPerson(Addressbooks* abs);
void showPerson(Addressbooks* abs);
void deletPerson(Addressbooks* abs);
void findPerson(Addressbooks* abs);
void modifyPerson(Addressbooks* abs);
void cleanPerson(Addressbooks* abs);




