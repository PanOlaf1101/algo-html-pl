#include <iostream>

//wartość true będziemy traktować jako liczbę już skreśloną.
bool tablica[100001];

void sito_erastotenesa(int n) {
	for(int i = 2; i * i <= n; ++i) {
		if(!tablica[i]) {
			std::cout << i << ' ';
			for(int j = 2 * i; j <= n; ++i)
				tablica[j] = true;
		}
	}
}