#include <iostream>
using namespace std;

#ifndef TIMESTAMP_H
#define TIMESTAMP_H

typedef unsigned int byte;

class timestamp {
	byte h, m, s;
public:
	timestamp(byte Hours = 0, byte Minutes = 0,
		byte Seconds = 0);
	//timestamp(char* Time);
public:
	void print();
	timestamp& Add_Hours(byte h);
	timestamp& Add_Minutes(byte m);
	timestamp& Add_Seconds(byte s);
	int Difference(const timestamp& ts);
	friend ostream& operator << (ostream& o, timestamp ts);
};

#endif#pragma once
