#include <iostream>
using namespace std;

void Y(int X) {
	cout << (X + 2) << "\n";
}

int main() {
	int X;
	
	cout << "X" << "\n";
		cin >> X;
		Y(X);
	cout << X;
}
