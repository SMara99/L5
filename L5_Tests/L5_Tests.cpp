#include "pch.h"
#include "CppUnitTest.h"
#include "../L5/Admin.h"
#include "../L5/Client.h"
#include "../L5/Film.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace L5Tests
{
	TEST_CLASS(Repository)
	{
	public:

		TEST_METHOD(getlist)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			vector<Film> g;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(a);
			adm.add(s);
			g = adm.getlist();
			Assert::AreEqual(g[0], a);
		}
		
		TEST_METHOD(add)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			vector<Film> g;
			a.set_genre("horror");		
			a.set_jahr(2001);			
			a.set_titel("first");			
			a.set_likes(32859);			
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			adm.add(a);
			g = adm.getlist();
			Assert::AreEqual(g[0], s);
		}

		TEST_METHOD(remove)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			adm.add(a);
			adm.remove(s);
			s = adm.getlist()[0];
			Assert::AreEqual(s, a);
		}

		TEST_METHOD(update)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			Film u;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			u = adm.update(s, a);
			Assert::AreEqual(u, a);
		}

		TEST_METHOD(show_genre)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			vector<Film> g;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			g = adm.show_genre("horror");
			Assert::AreEqual(g[0], a);
		}

		TEST_METHOD(add_to_watchlist)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			vector<Film> g;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			g = adm.add_to_watchlist(a);
			Assert::AreEqual(g[0], a);
		}

		TEST_METHOD(remove_from_watchlist)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			vector<Film> g;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add_to_watchlist(a);
			adm.add_to_watchlist(s);
			g = adm.remove_from_watchlist(a);
			Assert::AreEqual(g[0], s);
		}

		TEST_METHOD(rating)
		{
			Repository adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			Film g;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(a);
			adm.add(s);
			adm.add_to_watchlist(a);
			adm.add_to_watchlist(s);
			adm.remove_from_watchlist(a);
			rating("Y");
			g = adm.getlist()[0];
			Assert::AreNotEqual(g, a);
		}
	};
}
