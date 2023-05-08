#include <utility>

void sortowanie_babelkowe(int tablica[], int n) {
	do {
		for(int i = 0; i < n - 1; ++i)
			if(tablica[i] > tablica[i + 1])
				std::swap(tablica[i], tablica[i + 1]);
		n--;
	} while(n > 1);
}