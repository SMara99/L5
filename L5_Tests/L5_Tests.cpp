#include "pch.h"
#include "CppUnitTest.h"
#include "../L5/Admin.h"
#include "../L5/Client.h"
#include "../L5/Film.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace L5Tests
{
	TEST_CLASS(Admin)
	{
	public:
		
		TEST_METHOD(add)
		{
			Admin adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			a.set_genre("horror");		
			a.set_jahr(2001);			
			a.set_titel("first");			
			a.set_likes(32859);			
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			adm.add(a);
			Assert::AreEqual(adm.getlist()[0].get_title(), s);
		}

		TEST_METHOD(remove)
		{
			Admin adm;
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
			Assert::AreEqual(adm.getlist()[0], a);
		}

		TEST_METHOD(update)
		{
			Admin adm;
			Film s("HP", "fantasy", 2000, 5, "https://www.youtube.com/watch?v=VyHV0BRtdxo");
			Film a;
			a.set_genre("horror");
			a.set_jahr(2001);
			a.set_titel("first");
			a.set_likes(32859);
			a.set_trailer("https://www.youtube.com/watch?v=FnCdOQsX5kc");
			adm.add(s);
			Assert::AreEqual(adm.update(s, a), a);
		}
	};
}
