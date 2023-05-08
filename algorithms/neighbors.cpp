#include <iostream>
#include <vector>

struct Wierzcholek {
	int numer, dystans;
};

int main() {
	std::vector<Wierzcholek> miasta[6] = {
		{{1, 174}, {3, 311}}, //Warszawa
		{{0, 174}, {2, 355}}, //Lublin
		{{1, 355}, {4, 273}}, //Kraków
		{{0, 311}, {4, 182}, {5, 266}}, //Poznań
		{{2, 273}, {3, 182}}, //Wrocław
		{{3, 266}} //Szczecin
	};

	for(int i = 0; i < 6; ++i) {
		std::cout << i << ':';
		for(auto& sasiad : miasta[i])
			std::cout << ' ' << sasiad.numer << '(' << sasiad.dystans << ')';
		std::cout << '\n';
	}
}