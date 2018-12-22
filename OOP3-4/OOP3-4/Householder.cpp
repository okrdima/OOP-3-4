#include "Householder.h"
#include<iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

Householder::Householder() {//5
	this->name = "Bob";
	this->light = false;
	this->gass = false;
	this->wather = false;
	this->mashtab = 0;
	this->santex = false;
	this->times = 1;
	this->age = 20;
	this->request = true;
}
Householder::Householder(string name, bool light, bool gass, bool wather,
	int mashtab, bool santex, int times, int age, bool request) {
	this->name = name;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->mashtab = mashtab;
	this->santex = santex;
	this->times = times;
	this->age = age;
	this->request = request;
}
void Householder::writeFile(string file_name)
{
	ofstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	//file << name<<"";
	file.close();
}
void Householder::readFile(string file_name) {
	ifstream file(file_name);
	if (!file) {
		cout << "Error. Can't open the file!!!" << endl;
		exit(-1);
	}
	file.close();
}
Householder &Householder::getData() {
	return *this;
}
void Householder::outputData()
{
	cout << endl;
}
void Householder::setData(Householder object)
{
	this->name = object.name;
	this->light = object.light;
	this->gass = object.gass;
	this->wather = object.wather;
	this->mashtab = object.mashtab;
	this->santex = object.santex;
	this->times = object.times;
	this->age = object.age;
}
void Householder::setData(string name, bool light, bool gass, bool wather,int mashtab, bool santex, int times, int age)
{
	this->name = name;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->mashtab = mashtab;
	this->santex = santex;
	this->times = times;
	this->age = age;
}


void Householder::setLight(bool light) {
	this->light = light;
}
bool Householder::getLight() {
	return light;
}
void Householder::setGass(bool gass) {
	this->gass = gass;
}
bool Householder::getGass() {
	return gass;
}
void Householder::setWather(bool wather) {
	this->wather = wather;
}
bool Householder::getWather() {
	return wather;
}
void Householder::setSantex(bool santex) {
	this->santex = santex;
}
bool Householder::getSantex() {
	return santex;
}


void Householder::setTime(int time) {
	this->times = times;
}
int Householder::getTime() {
	return times;
}


void Householder::setMashtab(int mashtab) {
	this->mashtab = mashtab;
}
int Householder::getMashtab() {
	return mashtab;
}



void Householder::allocDynamicMemoryAndSort()
{
	srand(time(NULL));
	int size = rand() % 100;
	int *some_array = new int[size];
	for (int i = 0; i < size; i++) {
		number_of_orders = rand() % 100;
		some_array[i] = number_of_orders;
		cout << some_array[i] << " ";
	}
	cout << endl;
	sort(some_array, some_array + size);
	for (int i = 0; i < size; i++) {
		cout << some_array[i] << " ";
	}
	cout << endl;
}




void Householder::setRequest(bool request)  {
	this->request = request;
}
bool Householder::getRequest() {
	return request;
}


Householder::~Householder()
{
	cout <<"Desrtuctor Householder"<<endl;//13
}