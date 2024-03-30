#pragma once
#include <string>
using namespace std;

class Counter {
public:
	int min;
	int max;
	int current;

	Counter() {
		min = 0;
		max = 10;
		current = 0;
	}

	string getInfo() {
		return "Min: " + to_string(min) + "\nMax: " + to_string(max) + "\nCurrent: " + to_string(current);
	}

	void increase() {
		current++;
		if (current > max) {
			current = min  + 1;
		}
	}
};
