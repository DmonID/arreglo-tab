#include<iostream>
using namespace std;

int main()
{
	cout << "X\tY" << endl;
	int x[11];
	int y[11];
	for (int i = 0; i <= 10; i++) {
		x[i] = i;
		y[i] = x[i] * x[i] - 10 * x[i] + 24;
	}
	for (int i = 0; i <= 10; i++) {
		cout << x[i] << "\t" << y[i] << endl;
	}
	return 0;
}