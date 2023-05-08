void quicksort(int tablica[], int lewy, int prawy) {
	if(lewy >= prawy)
		return;
	int os = tablica[lewy], i = lewy, j = prawy;
	do {
		while(tablica[i] < os) ++i;
		while(tablica[j] > os) --j;
		if(i <= j) {
			std::swap(tablica[i], tablica[j]);
			++i;
			--j;
		}
	} while(i <= j);

	quicksort(tablica, lewy, j);
	quicksort(tablica, i, prawy);
}

//wersja funkcji dla 2 argumentów
void quicksort(int tablica[], int n) {
	quicksort(tablica, 0, n-1);
}