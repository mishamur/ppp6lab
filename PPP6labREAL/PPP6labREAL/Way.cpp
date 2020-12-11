#include "Way.h"
Way::Way(int a, int b) {
	this->Node1 = a;
	this->Node2 = b;
}
Way::Way() {};

bool operator<(const Way &a, const Way &b) {
	if (a.Node1 < b.Node1) return true;
	if (a.Node1 == b.Node2) {
		if (a.Node2 < b.Node2) {
			return 1;
		}
	}

	return ((a.Node1 < b.Node1));
}

bool operator>(const Way &a, const Way &b) {
	if (a.Node1 >b.Node1) return true;
	if (a.Node1 == b.Node1) {
		if (a.Node2 > b.Node2) {
			return 1;
		}
	}

	return ((a.Node1 > b.Node1));
}
