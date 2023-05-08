#include <string>

int najdluszy_prefikso_sufiks(const std::string& str) {
	int n = str.size(); //zapisujemy dlugość łańcucha jako 'n'
	int tablica[n + 1];
	tablica[0] = -1;

	//pomocnik co każdą iterację sprawdza czy indeks, którego numer odpowiada długości ostatniego wewnętrznego prefikso-sufiksu jest równy i-tej literze
	int pomocnik = -1;

	for(int i = 0; i < n; ++i) {
		while(pomocnik > -1 && str[i] != str[pomocnik])
			pomocnik = tablica[pomocnik];
		tablica[i + 1] = ++pomocnik;
	}

	return pomocnik;
}