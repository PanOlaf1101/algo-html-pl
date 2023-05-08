void sortowanie_przez_wstawianie(int tablica[], int n) {
	for(int i = 0; i < n-1; ++i) {
		int mini = tablica[i];
		int index_mini = i;
		for(int j = i+1; j < n; ++j) {
			if(mini > tablica[j]) {
				mini = tablica[j];
				index_mini = j;
			}
		}
		std::swap(tablica[i], tablica[index_mini]);
	}
}