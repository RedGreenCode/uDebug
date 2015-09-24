#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	const int numCases = 10;
	const int maxN = 500;
	const int maxM = 25;
	const int maxK = 10;
	const int maxV = 10;

	int n;
	int m;
	for (int i = 0; i < numCases; i++) {
		n = (rand() % maxN) + 1;
		m = (rand() % maxM) + 1;
		cout << n << " " << m << endl;

		int arr[maxN];
		for (int i = 0; i < n; i++) {
			arr[i] = (rand() % maxV) + 1;
			cout << arr[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < m; i++) {
			int j = (rand() % n);
			cout << (rand() % maxK) + 1 << " " << arr[j] << endl;
		}
	}

	return 0;
}
