#pragma once
#include "Dispatcher.h"
#include <iostream>
#include <cstring>
class Band : public Dispatcher//1
{
	int mark;//2
	
protected:
	int counter_For_Mark;//2
public:
	friend class Fried_Band;//17

	static int mas;//2

	int kof = 2, newmark = rand()%10;//2


	Dispatcher A;//3
	friend void Mark(class Band, class Householder);//16
	Band() : Dispatcher() {//4
		this->mark = 0;
	};
	Band(string name, string surname, bool request, int age, bool light, bool gass, bool wather, bool santex) : Dispatcher(name,surname,request,age,light,gass,wather,santex) {
	
	}//4 констурктор з параметрами//11
	Band(const Band &object) {//4 конструктор копіювання
	
		this->counter_For_Mark = object.counter_For_Mark;
		this->mas = object.mas;
		this->mark = object.mark;
		cout << "Construct copy";
	};
	
	void setMark(int);//6
	int getMark();//6
	void countMark(int mark);//6

	using Dispatcher::printStat; //12.

	void writeFile(string file_name);//7
	void readFile(string file_name);//7

	void Mass();
	~Band();
};
class Friend_Band {//17

	int friend_variable;
public :

	int size;
	Friend_Band();
	Friend_Band(int friend_variable);

	~Friend_Band();//15

};


void Mark(Band object);//19
void Mark(Band *object);//20
