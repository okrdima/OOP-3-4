#include "Band.h"
#include <iostream>
#include <fstream>

int Band::mas;

Friend_Band::Friend_Band() {//5
	this->friend_variable = 0;
	this->size = 0;

}
Friend_Band::Friend_Band(int friend_variable) {
	this->friend_variable = friend_variable;
}
Friend_Band::~Friend_Band() {

	cout << "Disructor Friend Class"<<endl;
}

void Band::setMark(int mark) {
	this->mark = mark;
}

int Band::getMark() {
	return mark;
}
void Band::countMark(int mark) {

	mark *= kof;
}


void Band::writeFile(string file_name)
{
	ofstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	file << mark;
	file.close();
}
void Band::readFile(string file_name) {
	ifstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	file >> mark;
	file.close();
}


void Band::Mass() {//19
	Band::mas += 10;
	cout << " static variable mas: " << Band::mas << endl;

}

Band::~Band()
{
	cout << "Destruct class Band"<<endl;//13
}



void Mark( Band object) {//19
	if (object.newmark=5) {
		cout << "newmark " <<object.newmark<<endl;
	}
	else  {
		cout<<"Randow variable !=5"<<endl;
	
	}
}

void Mark(Band *object) {//20
	if (object->newmark = 5) {
		cout << "newmark " << object->newmark << endl;
	}
	else {
		cout << "Randow variable !=5" << endl;

	}
}