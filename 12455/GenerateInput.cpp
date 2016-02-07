#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	const int numCases = 20;
	const int maxLen = 1000;
	const int maxBars = 20;

	cout << numCases << endl;
	for (int i = 0; i < numCases; i++) {
		int bars[maxBars];
		int p = (rand() % maxBars) + 1;
		int sum = 0;
		for (int j = 0; j < p ; j++) {
			int len = (rand() % maxLen/p) + 1;
			if (sum+len > maxLen) {
				p = j-1;
				break;
			} else {
				bars[j] = len;
				sum += len;
			}
		}
		int rnd = (rand() % 100);
		int add = (rand() % (maxLen - sum));
		if (rnd > 75) sum += add;
		cout << sum << endl;
		cout << p << endl;
		for (int j = 0; j < p ; j++) cout << bars[j] << " ";
		cout << endl;
	}

	return 0;
}
