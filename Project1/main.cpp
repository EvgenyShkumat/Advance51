#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
	Counter counter1;

	counter1.min = 0;
	counter1.max = 5;
	counter1.current = 0;

	cout << counter1.getInfo() << endl;
	cout << "----------------------------" << endl;

	counter1.increase();
	counter1.increase();
	counter1.increase();

	cout << counter1.getInfo() << endl;
	cout << "----------------------------" << endl;

	counter1.increase();
	counter1.increase();
	counter1.increase();

	cout << counter1.getInfo() << endl;



	return 0;
}