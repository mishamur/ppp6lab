#pragma once
#include "Way.h"
#include <iostream>
#include <vector>

class Ways
{
private:
	int n;
	
public:
	map<Way, int, greater<Way>>a;
	Ways(int number);
	~Ways();
	void AddWay(Way way, int length);
	void Print();
	void AddWays();
	
};

