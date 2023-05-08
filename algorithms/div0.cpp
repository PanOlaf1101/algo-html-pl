int liczba_dzielnikow(int n) {
	int i = 1, wynik = 0;

	while(i * i < n) {
		if(n % i == 0)
			wynik += 2;
		i++;
	}
	if(i * i == n)
		wynik++;
	return wynik;
}