#include <algorithm>

void sortowanie_przez_zliczanie(int tablica[], int n) {
	int maks = tablica[0], mini = tablica[0];
	for(int i = 1; i < n; ++i) {
		maks = std::max(maks, tablica[i]);
		mini = std::min(mini, tablica[i]);
	}

	int liczniki[maks - mini + 1];
	for(int i = 0; i <= maks - mini; ++i)
		liczniki[i] = 0;
	for(int i = 0; i < n; ++i)
		liczniki[tablica[i] - mini]++;

	int t = 0;
	for(int i = 0; i <= maks - mini; ++i) {
		while(liczniki[i] > 0) {
			tablica[t] = i + mini;
			liczniki[i]--;
			t++;
		}
	}
}