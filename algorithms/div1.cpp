#include <vector>
#include <algorithm>

std::vector<int> dzielniki(int n) {
	int i = 1;
	std::vector<int> wektor;

	while(i * i < n) {
		if(n % i == 0) {
			wektor.push_back(i);
			wektor.push_back(n/i);
		}
		i++;
	}
	if(i * i == n)
		wektor.push_back(i);

	//Sortujemy dzielniki od początku do końca wektora
	std::sort(wektor.begin(), wektor.end());
	return wektor;
}