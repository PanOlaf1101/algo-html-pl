const keywords = ['for', 'while', 'if', 'else', 'do', 'return', 'struct', 'true', 'false', 'typedef', 'const', 'goto'];
const types = ['int', 'void', 'auto', 'bool', 'long'];
const std = [['utility', 'swap'], ['algorithm', 'max'], ['algorithm', 'min'], ['iostream', 'cout'], ['iostream', 'cin'], ['vector', 'vector'], ['queue', 'queue'], ['string', 'string']];

//// //// //// ////

const codes = document.querySelectorAll('.textarea');

function repl(elem, original, replaced) {
	elem.innerHTML = elem.innerHTML.replaceAll(original, replaced);
}

(async function() {
	for(const c of codes) {
		const area = document.createElement('div');
		try {
			area.innerText = await fetch('./algorithms/' + c.id + '.cpp').then(r => {
				if(!r.ok)
					throw new Error();
				return r.text();
			});
		} catch {
			area.innerHTML = `Nie udało się wczytać pliku "${c.id}.cpp"!`;
			continue;
		}
		repl(area, /(\*=|\/=|&lt;&lt;|&gt;&gt;|&lt;=|&gt;=|==|=|\+=|-=|\+\+|--|\+|-|\[|\]|\(|\)|\{|\}| \* | \/ |&lt;|&gt;|&amp;&amp;|&amp;|\||\^| : |!|%)/g, '<span class="cpp-operator">$&</span>');
		repl(area, /\/\/(.*?)<br>/g, '<span class="cpp-comment">$&</span>');
		repl(area, /\/\*(.*?)\*\//g, '<span class="cpp-comment">$&</span>');
		repl(area, '\t', '&nbsp;&nbsp;&nbsp;&nbsp;');

		repl(area, /(#include <span class="cpp-operator">&lt;<\/span>)(\w+?)(<span class="cpp-operator">&gt;<\/span><br>)/g, '<span class="cpp-preprocessor">$1<a href="https://cplusplus.com/reference/$2" target="_blank">$2</a>$3</span>');
		repl(area, /\d+/g, '<span class="cpp-number">$&</span>');

		for(const word of keywords)
			repl(area, word, `<span class="cpp-keyword">${word}</span>`);
		for(const word of types)
			repl(area, word, `<span class="cpp-type">${word}</span>`);
		for(const i of std)
			repl(area, 'std::' + i[1], `<a href="https://cplusplus.com/reference/${i[0]}/${i[1]}/" target="_blank">std::${i[1]}</a>`);

		c.appendChild(area);
	}
})()

//// //// //// ////

const header = document.querySelector('header');
const header_links = document.createElement('article');
const sections = document.querySelectorAll('main section');

for(const s of sections) {
	if(!s.id)
		continue;
	let link = document.createElement('a');
	link.href = '#' + s.id;
	link.innerText = s.children[0].innerText;
	header_links.appendChild(link);
}

header.appendChild(header_links);