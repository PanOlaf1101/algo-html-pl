#include <vector>
#include <queue>

std::vector<int> graf[6] = {/*...*/};
bool odwiedzone[6];

void bfs(int wierzcholek) {
	std::queue<int> kolejka;
	kolejka.push(wierzcholek);

	while(!kolejka.empty()) {
		wierzcholek = kolejka.front();
		kolejka.pop();
		for(int& i : graf[wierzcholek]) {
			if(!odwiedzone[i]) {
				kolejka.push(i);
				odwiedzone[i] = true;
			}
		}
	}
}