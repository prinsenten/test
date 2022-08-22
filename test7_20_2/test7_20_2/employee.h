#pragma once
#include"worker.h"
#include<iostream>
using namespace std;


class Employee:public Worker
{
public:

	Employee(int id, string name, int did);
	
	virtual void showInfo();

	virtual string getDeptName();
};