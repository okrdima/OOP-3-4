#include "Dispatcher.h"
#include <iostream>
Dispatcher::Dispatcher()//5
{
	this->name = "No info";
	this->surname = "No info";
	this->phone = "0003";
	this->age = 20;
	this->request = true;
	this->light = false;
	this->gass = false;
	this->wather = false;
	this->santex = false;
	for (int i = 0; i < 24; i++) { time_line[i] = false; }
}
Dispatcher::Dispatcher(string name, string surname, bool request, int age, bool light, bool gass, bool wather, bool santex) {
	this->name = name;
	this->surname = surname;
	this->request = request;
	this->age = age;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->santex = santex;
}
void Dispatcher::setData(Dispatcher object)
{
	this->name = object.name;
	this->surname = object.surname;
	this->phone = object.phone;
	this->age = object.age;
	this->request = object.request;
}
void Dispatcher::writeFile(string file_name)
{
	ofstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	file.close();
}
void Dispatcher::readFile(string file_name) {
	ifstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	file.close();
}
Dispatcher &Dispatcher::getData1() {
	return *this;
}
void Dispatcher::setLight(bool light) {
	this->light = light;
}
bool Dispatcher::getLight() {
	return light;
}
void Dispatcher::setGass(bool gass) {
	this->gass = gass;
}
bool Dispatcher::getGass() {
	return gass;
}
void Dispatcher::setWather(bool wather) {
	this->wather = wather;
}
bool Dispatcher::getWather() {
	return wather;
}
void Dispatcher::setSantex(bool santex) {
	this->santex = santex;
}
bool Dispatcher::getSantex() {
	return santex;
}

int Dispatcher::Work(int times) {

	for (int i = 0; i < counter; i++) {
		if (time_line[times + i] == true) {
			cout << "Operator is busy: " << times + i << endl;
			request = false;
			return 1;
		}
		else {
			request = true;
		}
	}
}

void Dispatcher::setTime(int time) {

	for (int i = 0; i < counter - 1; i++) { time_line[time + i] = true; }
}

void Dispatcher::workChek() {
	if (santex == true) { counter++; }
	if (wather == true) { counter++; }
	if (gass == true) { counter++; }
	if (light == true) { counter++; }
}

void Dispatcher::show() {
	if (request == true)
	{
		cout << "You request has been approved" << endl;
	}
	else {
		cout << "You request has't been rejected,please enter other time" << endl;;
	}
}

void Dispatcher::falseVariable() {
	this->gass = false;
	this->wather = false;
	this->santex = false;
	this->light = false;
	this->request = false;
}



void Dispatcher::printStat() {
	cout << "System is running: ";
	if (running == true) { cout << "true " << endl; }
	else { cout << "false " << endl; }
}


Dispatcher::~Dispatcher()
{
	cout << "Destruct class Dispatcher"<<endl;//13
}