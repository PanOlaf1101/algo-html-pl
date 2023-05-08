void sortowanie_przez_zliczanie(int tablica[], int n) {
	//zakładamy, że wartość elementów znajduje się w przedziale <0; 19>
	int liczniki[20];

	//zerujemy wszystkie liczniki
	for(int i = 0; i < 20; ++i)
		liczniki[i] = 0;

	for(int i = 0; i < n; ++i)
		liczniki[tablica[i]]++;

	int t = 0;
	for(int i = 0; i < 20; ++i) {
		while(liczniki[i] > 0) {
			tablica[t] = i;
			liczniki[i]--;
			t++;
		}
	}
}