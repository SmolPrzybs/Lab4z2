#include <iostream>
using namespace std;

bool LiczbaPierwsza(int n);


int main()
{
	int n = 1;
	for (int i = 0; i < 15; i++)
	{
		cout << "liczba = " << n << ", czy pierwsza 0/1 = " << LiczbaPierwsza(n) << endl;
		n++;
	}

}

bool LiczbaPierwsza(int n) {
	if (n < 2) return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}
