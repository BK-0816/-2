#include <iostream>
#include <iomanip>
using namespace std;

double factorial_iter(int n) {
	double result = 1;
	if (n <= 1) return 1;
	else
		for (int i = 2; i <= n; i++) {
			result = result * i;
		}
	return result;
}
double factorial_rec(int n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial_rec(n - 1);
}
int main() {
	int n = 20;

	double result_iter = factorial_iter(n);

	double result_rec = factorial_rec(n);

	cout << "Iterative factorial result:" << fixed << setprecision(0) << result_iter << endl;

	cout << "Recursive factorial result:" << fixed << setprecision(0) << result_rec << endl;

	system("pause");

	return 0;
}