#include "People.h"
#include <iostream>


People::People()
{
	this->people = "people";
	this->people2 = "people2";
	this->people3 = "people3";
}
void People::show() {
	cout << "this class people ,get private householder" << endl;
}

People::~People()
{
	cout << "Destructor class People"<<endl;//13
}

A::A() {

	this->a = 0;
	this->a2 = 0;
	this->a3 = 0;
}

A::~A() {
	cout << "Destructor class A" << endl;//13
}
B::B() {
	this->b = 0;
	this->b1 = 0;
	this->b2 = 0;
}
B::~B() {
	cout << "Destructor class B" << endl;//13
}

C::C() {
	this->c = 0;
	this->c1 = 0;
	this->c2 = 0;

}

void C::show() {
	cout << "c1,c 2= " << c1 <<" "<<c2<< endl;
}
C::~C(){
	cout << "Destructor class C "<< endl;//13
}
