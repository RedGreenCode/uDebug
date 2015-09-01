#include <iostream>
#include <ctime>
#include <stack>
#include <queue>
using namespace std;

int main(int argc, char *argv[]) {
	srand((unsigned int)time(NULL));

	int numCases = 100;
	int maxOps = 25;
	int maxVal = 10;

	for (int i = 0; i < numCases; i++) {
		int numOps = (rand() % maxOps);
		cout << numOps << endl;
		int type = (rand() % 3);

		stack<int> s;
		queue<int> q;
		priority_queue<int> pq;

		for (int j = 0; j<numOps; j++) {
			int op = (rand() % 2) + 1;
			int val = (rand() % maxVal);
			if (op == 1) {
				if (type == 0) {
					s.push(val);
					cout << "1 " << val;
				}
				else if (type == 1) {
					q.push(val);
					cout << "1 " << val;
				}
				else {
					pq.push(val);
					cout << "1 " << val;
				}
			}
			else {
				if (type == 0) {
					if (s.size() > 0) {
						cout << "2 " << s.top();
						s.pop();
					} else cout << "1 " << val;
				}
				else if (type == 1) {
					if (q.size() > 0) {
						cout << "2 " << q.front();
						q.pop();
					} else cout << "1 " << val;
				}
				else {
					if (pq.size() > 0) {
						cout << "2 " << pq.top();
						pq.pop();
					} else cout << "1 " << val;
				}
			}
			cout << endl;
		}
	}

	return 0;
}
