ll potegowanie_binarne(ll a, ll b) {
	ll wynik = 1;
	while(b > 0) {
		if((b & 1) == 1)
			wynik *= a;
		a *= a;
		b /= 2;
	}
	return wynik;
}