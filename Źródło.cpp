#include <iostream>
using namespace std;

double pkolo(double r) {
	return 3.14 * pow(r, 2);
}
double pprostokat(double a, double b) {
	return a * b;
}
double ptrojkat(double a, double h) {
	return (a * h) / 2;
}
double pszescian(double a) {
	return a * a * a;
}
double pwalec(double r, double h) {
	return 3.14 * r * r * h;
}
bool LiczbaPierwsza(int liczba) {
	if (liczba < 2) return false;
	for (int i = 2; i * i <= liczba; i++)
		if (liczba % i == 0)
			return false;
	return true;
}
void dec_to_bin(int liczba)
{
	int i = 0, tab[31];

	while (liczba)
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}