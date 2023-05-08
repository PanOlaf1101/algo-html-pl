#include <vector>

std::vector<int> liczby_pierwsze(int n) {
	std::vector<int> wektor = {2, 3};

	for(int i = wektor.back() + 2; i <= n; i += 2) {
		for(auto j = wektor.begin() + 1; *j * *j <= i; ++j) {
			if(*j % i == 0)
				goto NIGDY_NIE_UZYWAJ_GOTO;

		wektor.push_back(i);
	NIGDY_NIE_UZYWAJ_GOTO:;
		}
	}

	return wektor;
}