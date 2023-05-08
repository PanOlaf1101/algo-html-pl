#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int kopiec[n + 1];

	for(int i = 1; i <= n; ++i) {
		int j = i;
		std::cin >> kopiec[i];
		while(j > 1 && kopiec[j / 2] > kopiec[j]) {
			std::swap(kopiec[j / 2], kopiec[j]);
			j /= 2;
		}
	}
}