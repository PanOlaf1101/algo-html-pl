#include <vector>

std::vector<int> graf[6] = {/*Tutaj daj wierzchołki i krawędzie.*/};
bool odwiedzone[6]; //domyślnie wartość całej tablicy to "false"

void dfs(int wierzcholek) {
	odwiedzone[wierzcholek] = true;
	for(int& i : graf[wierzcholek])
		if(!odwiedzone[i])
			dfs(i);
}