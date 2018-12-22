#pragma once
#include "Band.h"
#include "Householder.h"
#include <iostream>
#include <string>
class People: private Householder//1,//9
{
	string people;
protected:
	string people2;
public:
	string people3;
	void show();
	People();
	~People();//15
	
};

class A:public People,public Band
{
	int a;
protected: 
	int a2;
public:
	int a3;
	A();
	~A();
};

class B:public A,public People
{
	int b;
protected:
	int b1;
public:
	int b2;
	B();
	~B();
};

class C:public B,public A
{

	int c;
protected:
	int c1;
public:
	int c2;
	C();
	~C();
	void show();
};






