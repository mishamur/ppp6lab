#include "Ways.h"
#include "Way.h"
void Ways::AddWay(Way nodes, int length) {
	if (nodes.Node1 == nodes.Node2) return;
	Way tempNodes =  Way(nodes.Node2, nodes.Node1);
	map<Way, int, greater<Way>>::iterator it = a.find(nodes);
	map<Way, int, greater<Way>>::iterator itt = a.find(tempNodes);
		if((it == a.end()) && itt == a.end()){
			a.insert(make_pair(nodes, length));
		}
}
Ways::Ways(int number) {
	this->n = number;
	
}

Ways::~Ways()
{
	this->a.clear();
}

void Ways:: Print() {
		for (auto i : a) {
			//std::cout << "ѕуть из пункта " << i.first->Node1 << " в пункт " << i.first->Node2 <<" равен " << i.second << endl;
			std::cout << "ѕуть из пункта " << i.first.Node1 << " в пункт " << i.first.Node2 << " равен " << i.second << endl;
		}
}

void Ways::AddWays() {
	for (int i = 1; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {
			AddWay(Way(i, j), 5 + rand() % 100);
		}
	}
}

