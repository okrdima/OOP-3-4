#pragma once 
#include <fstream>
#include<iostream>
#include <ctime>
using namespace std;
class Householder//1
{
	string  name;//2
	bool light, gass, wather, santex, request;//2
	int times;//2
	int age;//2
protected:
		int mashtab;//2
public:
	int fun = 10,number;//2
	friend void Mark(class Band, class Householder);//16
	int number_of_orders;//2
	Householder();//4
	Householder(string name, bool light, bool gass, bool wather,int mashtab, bool santex, int times, int age, bool request);//4
	~Householder();//15

	void writeFile(string file_name);//7
	void readFile(string file_name);//7

	void setData(Householder object);			//6. приймає об'єкт в якості параметрів
	void setData(string name, bool light, bool gass, bool wather,
		int mashtab, bool santex, int times, int age);	//6. два методи перевантажені
	Householder &getData();//6

	void outputData();

	void setLight(bool);	//6. використання полів у методах
	bool getLight();
	void setGass(bool);	//6. використання полів у методах
	bool getGass();
	void setWather(bool);	//6 використання полів у методах
	bool getWather();
	void setSantex(bool);	//6. використання полів у методах
	bool getSantex();


	void setTime(int times);//6
	int getTime();//6


	void setMashtab(int mashtab);//6
	int getMashtab();//6


	void allocDynamicMemoryAndSort();//6



	void setRequest(bool);	//2. використання полів у методах
	bool getRequest();//6
};

