#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	const int numCases = 100;

	for (int i = 0; i < numCases; i++) {
		for (int j = 0; j < 8; j++) {
			cout << (rand() % 8) + 1 << " ";
		}
		cout << endl;
	}

	return 0;
}
