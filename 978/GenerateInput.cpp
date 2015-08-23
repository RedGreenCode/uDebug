#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 10;
	int maxNumBattlefields = 10;
	int maxNumGreenLemmings = 25;
	int maxNumBlueLemmings = 25;
	int maxPower = 101;

	cout << numCases << endl;
	for (int i = 0; i < numCases; i++) {
		int b = (rand() % maxNumBattlefields) + 1;
		int sg = (rand() % maxNumGreenLemmings) + 1;
		int sb = (rand() % maxNumBlueLemmings) + 1;
		cout << b << " " << sg << " " << sb << endl;
		for (int j = 0; j < sg; j++) {
			cout << (rand() % maxPower) + 1 << endl;
		}
		for (int j = 0; j < sb; j++) {
			cout << (rand() % maxPower) + 1 << endl;
		}
	}

	return 0;
}
