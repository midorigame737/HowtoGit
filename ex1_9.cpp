#include <iostream>

using namespace std;

int main(void) {
	int in1, in2;

	cin >> in1 >> in2;

	cout << in1 << "+" << in2 << "=" << in1 + in2 << endl;
	if (in2 > 0) cout << in1 << "/" << in2 << "=" << in1 / in2 << endl;
	cout << in1 << "*" << in2 << "=" << in1 * in2 << endl;
	if (in2 > 0) cout << in1 << "%" << in2 << "=" << in1 % in2 << endl;
	cout << in1 << "-" << in2 << "=" << in1 - in2 << endl;

	return 0;
}