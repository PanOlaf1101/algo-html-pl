#include <iostream>

int drzewo[8];

void dfs(int index) {
	//działanie funkcji należy przerwać jeśli wyjdziemy poza drzewo
	if(index >= 8)
		return;
	std::cout << '<' << drzewo[index] << ' '; //Preorder
	dfs(2 * index); //idziemy do lewego syna
	std::cout << '^' << drzewo[index] << ' '; //Inorder
	dfs(2 * index + 1); //idziemy do prawego syna
	std::cout << '>' << drzewo[index] << ' '; //Postorder
}