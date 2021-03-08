#include<iostream>
using namespace std;
int solve(int n) {
	if (n == 0 || n == 1) return 1;
	else return n * solve(n - 1);
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n < 0) cout << "\nNhap so lon hon 0";
	else cout << "Ket qua: " << solve(n);
	return 0;
}