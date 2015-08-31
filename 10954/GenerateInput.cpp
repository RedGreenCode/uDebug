#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 50;
	int maxInputs = 25;
	int maxNum = 100;

	for (int i = 0; i < numCases; i++) {
		int numInputs = (rand() % maxInputs) + 1;
		cout << numInputs << endl;
		for (int j = 0; j < numInputs; j++) {
			cout << (rand() % maxNum) << " ";
		}
		cout << endl;
	}
	cout << "0" << endl;

	return 0;
}
