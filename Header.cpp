#include "pch.h"
#include "Header.h"

timestamp::timestamp(byte Hours, byte Minutes, byte Seconds)
{
	h = Hours; 
	m = Minutes;
	s = Seconds;
}

void timestamp::print()
{
}

timestamp & timestamp::Add_Hours(byte h1)
{
	h = h + h1;
	h = h % 24;
	return *this;
	// TODO: вставьте здесь оператор return
}

timestamp & timestamp::Add_Minutes(byte m1)
{
	m = m + m1;
	h = h + m / 60;
	m = m % 60;
	h = h % 24;
	return *this;
	// TODO: вставьте здесь оператор return
}

timestamp & timestamp::Add_Seconds(byte s1)
{
	s += s1;
	m = m + s / 60;
	s = s % 60;
	h = h + m / 60;
	m = m % 60;
	h = h % 24;
	return *this;
	// TODO: вставьте здесь оператор return
}

int timestamp::Difference(const timestamp & ts)
{
	return 0;
}

ostream & operator<<(ostream & o, timestamp ts)
{
	o << ts.h << "." << ts.m << "." << ts.s;
	return o;
	// TODO: вставьте здесь оператор return
}
