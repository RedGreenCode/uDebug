#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 25;
	int maxElements = 30;
	int maxRounds = 50;

	for (int i = 0; i < numCases; i++) {
		int n = (rand() % maxElements) + 1;
		int k = (rand() % maxRounds) + 1;
		cout << n << " " << k << endl;

		for (int j = 0; j < n; j++) {
			int x = (rand() % 101);
			if (rand() % 2 == 0) x = -x;
			cout << x << " ";
		}
		cout << endl;

		for (int j = 0; j < k; j++) {
			if (rand() % 2 == 0) {
				cout << "C ";
				cout << (rand() % n) + 1 << " ";
				int v = (rand() % 101);
				if (rand() % 2 == 0) v = -v;
				cout << v << endl;
			} else {
				int p1 = (rand() % n) + 1;
				int p2 = (rand() % (n-p1+1)) + p1;
				cout << "P " << p1 << " " << p2 << endl;
			}
		}
	}

	return 0;
}
