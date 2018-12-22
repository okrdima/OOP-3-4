#pragma once
#include <fstream>
#include<iostream>
#include <string>
#include "Householder.h"
using namespace std;
class Dispatcher//1
{
	string name,surname;//2
	bool request, light, gass, wather, santex;//2
protected:
	int age;//2
public:
	Householder householder;//3
	string phone;//2
	int counter;//2
	bool time_line[24], running = true;//2

	Dispatcher();//4
	Dispatcher(string name, string surname, bool request,int age, bool light, bool gass, bool wather,bool santex);//4
	~Dispatcher();//15
	void setData(Dispatcher object);//6
	void writeFile(string file_name);//7
	void readFile(string file_name);//7
	Dispatcher &getData1(); //6 використання полів у метода
	void setTime(int);
	void setLight(bool);	//6. використання полів у методах
	bool getLight();
	void setGass(bool);	//6. використання полів у методах
	bool getGass();
	void setWather(bool);	//6. використання полів у методах
	bool getWather();
	void setSantex(bool);	//6. використання полів у методах
	bool getSantex();//6
	int Work(int);//6
	void workChek();//6
	void show();//6
	void falseVariable();//6
	void printStat();//12
};

