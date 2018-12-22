#include "Dispatcher.h"
#include "Householder.h"
#include "Band.h"
#include "People.h"
#include <iostream>
#include <fstream>
using namespace std;

const int m = 4;
void Mark(Band a,Householder b) {//16
	cout <<"Sallary band:"<< a.kof*b.fun;

}
int main()
{
	
	int var, mashtab, i = 0, works[m], human_index = 0,time,mark_for_Band;
	string yes;
	bool run = true;
	Dispatcher band;//14
	Householder human1, human2, human3, human4, human5;//14
	Band mark,*ptr_band;//14,23
	A a;
	B b;
	C c;
	People people;
	//people.request= false;//8 не доступно
	//people.age = 10;//8 не доступно
	//people.number = 10;//8 не доступно
	//band1.allocDynamicMemoryAndSort();
	People *band1 = new People;//14
	People *band2 = new People;//14
	Dispatcher *band3 = new Dispatcher;//14
	Dispatcher *band4 = new Dispatcher;//14
	Dispatcher *band5 = new Dispatcher;//14
	Householder humans[10];//23

	while (run) {
		band.printStat();
		for (i = 0; i < 4; i++) { works[i] = 0; }
		cout << "Work list: /for exsit press 0 \n" << "Lihgt - 1\n" << "Santex - 2\n" << "Gass - 3\n" << "Water - 4" << endl;
		i = 0;
		while (works[i - 1] != 0) {

			cin >> works[i];
			i++;
		}
		cout << endl;

		for (i = 0; i < m; i++) {
			if (works[i] == 1) { band.setLight(true); }//25
			else if (works[i] == 2) { band.setSantex(true); }//25
			else if (works[i] == 3) { band.setGass(true); }//25
			else if (works[i] == 4) { band.setWather(true); }//25
			else { continue; }
		}

		cout << "Ok, time work: " << endl;
		cin >> time;
		band.counter = 1;
		band.workChek();
		humans[human_index].setTime(time);//24

		cout << "Mashtab from 1 to 5 :" << endl;
		cin >> mashtab;
		humans[human_index].setMashtab(mashtab);//24

		band.Work(time);//25
		band.show();//25
		band.setTime(time);//25
		band.falseVariable();//25
		human_index++;
		cout << "Enter mark please : ";
		cin >> mark_for_Band;
		mark.countMark(mark_for_Band);//25



		cout << "Exit,enter yes or no:" << endl; cin >> yes;
		if (yes == "yes") {
			run = false;
		}
	}
	//sort_Mas();
	delete band1, band2, band3, band4, band5;
	system("pause");
	return 0;
}
