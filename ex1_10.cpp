#include <iostream>

using namespace std;

int main(){
	int x;
	int y;
	int z;
	int an;
	cin >> x;
	cin >> y;
	cin >> z;
	if (z == 1) {
		an = x + y;
		cout << x << "+" << y << "=" << an << endl;
	}
	else if (z == 2) {
		an = x - y;
		cout << x << "-" << y << "=" << an << endl;
	}
	else if (z == 3) {
		an = x*y;
		cout << x << "*" << y << "=" << an << endl;
	}
	else if (z == 4) {
		if (y <= 0) {
			cout << "(none)" << endl;
		}
		else {
			an = x / y;
			cout << x << "/" << y << "=" << an << endl;
		}
	}
	else if (z == 5) {
		if (y <= 0) {
			cout << "(none)" << endl;
		}
		else {
			an = x%y;
			cout << x << "%" << y << "=" << an << endl;
		}
	}
	else {
		cout << "(none)" << endl;
	}
	return 0;
}