#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 10;
	int maxDim = 25;
	int maxVal = 100;

	for (int i = 0; i < numCases; i++) {
		int m = (rand() % maxDim) + 1;
		int n = (rand() % maxDim) + 1;
		cout << m << " " << n << endl;

		for (int row = 0; row < m; row++) {
			ostringstream colnums;
			int col = 0;
			int r = 0;
			while (true) {
				int k = (rand() % n/10) + 1;
				col += k;
				if (col > n) break;
				colnums << col << " ";
				r++;
			}
			cout << r << " " << colnums.str() << endl;
			for (int j = 0; j < r; j++) {
				cout << (rand() % maxVal) + 1 << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
