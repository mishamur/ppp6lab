#pragma once
#include <string>
#include <map>
using namespace std;

class Way 
{
public:
	Way();

	int Node1;
	int Node2;
	Way(int a, int b);
	friend bool operator<(const Way &a, const Way &b);
	friend bool operator>(const Way &a, const Way &b);

};

