#include"Client.h"
#include"Admin.h"
#include"Film.h"
#include "Menu.h"

using namespace std;

int main() {
	Film s("HP","fantasy",2000,5,"https://www.youtube.com/watch?v=VyHV0BRtdxo");
	s.show();//merge afisarea in browser; :))
	Film a, b, c, d;
	a.set_genre("horror");
	b.set_genre("comedy");
	c.set_genre("horror");
	d.set_genre("thriller");
	a.set_jahr(2001);
	b.set_jahr(2013);
	c.set_jahr(1973);
	d.set_jahr(2007);
	a.set_titel("first");
	b.set_titel("second");
	c.set_titel("third");
	d.set_titel("last");
	a.set_likes(32859);
	b.set_likes(564892);
	c.set_likes(98724);
	d.set_likes(74);
	a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
	b.set_trailer("https://www.youtube.com/watch?v=aJtVL2_fA5w");
	c.set_trailer("https://www.youtube.com/watch?v=bKL1ImsN-DU");
	d.set_trailer("https://www.youtube.com/watch?v=mKNJ5vj_sZ0");
	Admin adm;
	adm.add(a);
	adm.add(b);
	adm.add(c);
	adm.add(d);
	Client cln;
	menu(adm, cln);
	return 0;
}