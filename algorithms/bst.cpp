#include <iostream>

//tworzymy arbitralnie dużą tablicę na drzewo BST
int drzewo[10001];

int main() {
	int n;
	//przed sprawdzeniem synów należy wczytać wartość korzenia
	std::cin >> n >> drzewo[1];

	while(--n > 0) {
		int nowy, index = 1;
		std::cin >> nowy;
		while(drzewo[index] != 0) {
			if(nowy <= drzewo[index])
				index *= 2;
			else
				index = 2 * index + 1;
		}
		drzewo[index] = nowy;
	}
}