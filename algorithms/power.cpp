//alias dla typu "long long", dla czytelności
typedef long long ll;

ll potegowanie_rekurencyjne(ll a, ll b) {
	if(b == 0)
		return 1;
	return a * potegowanie_rekurencyjne(a, b - 1);
}

ll potegowanie_iteracyjne(ll a, ll b) {
	ll wynik = 1;
	while(b > 0) {
		wynik *= a;
		b--;
	}
	return wynik;
}
