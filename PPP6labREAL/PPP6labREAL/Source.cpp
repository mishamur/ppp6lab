/*
Дано:
Система дорог. Задана система дорог, состоящая из N населенных пунктов и списка
дорог определенной длины, соединяющих попарно населенные пункты. Представить
систему дорог в виде подходящего контейнера. Реализовать на системе дорог
рекурсивный алгоритм поиска наиболее короткого пути из пункта с номером A в пункт с номером B.
*/
#include <iostream>
#include <locale>
#include <map>
#include <time.h>
#include <vector>
#include "Way.h"
#include "Ways.h"


//c 65 по 90

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите количество населённых пунктов :  ";
	cin >> n;

	
	//myWays->a.insert(make_pair(Way(1, 2), 12));
	//myWays->a.insert(make_pair(Way(1, 3), 13));
	//myWays->a.insert(make_pair(Way(3, 1), 13));

	Ways *myWays = new Ways(n);

	myWays->AddWays();

	myWays->Print();

	
	

	
	

	return 0;
}