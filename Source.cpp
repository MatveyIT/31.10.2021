//Lizogub Matvey П13121
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	cin >> a >> b;
	if (a < 20 && b < 42 ) {
		cout << a << "подходит\n";
		cout << b << "подходит\n";
	}
	else {
		cout << a << "неподходит\n";
		cout << b << "неподходит\n";
	}
	return 0;
}