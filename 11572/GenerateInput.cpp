#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 30;
	int maxRange = numCases;
	int maxCaseLength = numCases;

	if (argc >= 2) {
		numCases = atoi(argv[1]);
		maxRange = numCases;
		maxCaseLength = numCases;
		if (argc >= 3) maxRange = atoi(argv[2]);
		if (argc == 4) maxCaseLength = atoi(argv[3]);
	}

	cout << numCases << endl;
	for (int i = 0; i < numCases; i++) {
		int len = rand() % maxCaseLength;
		cout << len << endl;
		for (int j = 0; j < len; j++) {
			cout << rand() % maxRange << endl;
		}
	}

	return 0;
}
