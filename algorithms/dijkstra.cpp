std::vector<Wierzcholek> graf = {/*...*/};

std::vector<int> dijkstra(int wierzcholek) {
	//ustawiamy początkowy dystans do każdego wierzchołka na maximum
	std::vector<int> dystanse(6, 2147483647);
	dystanse[wierzcholek] = 0;

	std::queue<int> kolejka;
	kolejka.push(wierzcholek);

	while(!kolejka.empty()) {
		wierzcholek = kolejka.front();
		kolejka.pop();
		for(auto& i : graf[wierzcholek]) {
			if(dystanse[i.numer] > dystanse[wierzcholek] + i.dystans) {
				dystanse[i.numer] = dystanse[wierzcholek] + i.dystans;
				kolejka.push(i.numer);
			}
		}
	}

	return dystanse;
}