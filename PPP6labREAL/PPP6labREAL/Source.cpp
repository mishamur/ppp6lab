/*
����:
������� �����. ������ ������� �����, ��������� �� N ���������� ������� � ������
����� ������������ �����, ����������� ������� ���������� ������. �����������
������� ����� � ���� ����������� ����������. ����������� �� ������� �����
����������� �������� ������ �������� ��������� ���� �� ������ � ������� A � ����� � ������� B.
*/
#include <iostream>
#include <locale>
#include <map>
#include <time.h>
#include <vector>
#include "Way.h"
#include "Ways.h"


//c 65 �� 90

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "������� ���������� ��������� ������� :  ";
	cin >> n;

	
	//myWays->a.insert(make_pair(Way(1, 2), 12));
	//myWays->a.insert(make_pair(Way(1, 3), 13));
	//myWays->a.insert(make_pair(Way(3, 1), 13));

	Ways *myWays = new Ways(n);

	myWays->AddWays();

	myWays->Print();

	
	

	
	

	return 0;
}