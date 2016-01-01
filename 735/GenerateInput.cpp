#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 1500;
	int maxValue = 999;

	for (int i = 0; i < numCases; i++) {
		int n = (rand() % maxValue) + 1;
		cout << n << endl;
	}
	cout << 0 << endl;

	return 0;
}
