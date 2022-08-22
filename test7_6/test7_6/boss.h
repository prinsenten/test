#include"Worker.h" 
#pragma once
class Boss :public Worker
{
public:
	Boss(int id, string name, int did);
	virtual void showInfo();
	virtual string getDeptName();
};
