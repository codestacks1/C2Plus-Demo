#include "AuthorInfo.h"

#include "Author.hpp"

AuthorInfo::AuthorInfo()
{
	Author author = Author();
	author.Name = "xiaowen";
	author.Age = 28;
	author.Company = "Sensing tech ltd.";
	author.PhoneNumber = "15000000000";
	author.Publicationsvector = vector<string>();
	author.Publicationsvector.push_back("vector0");
	author.Publicationsvector.push_back("vector1");
	author.Publicationsmap = map<int, string>();
	author.Publicationsmap[0] = "map0";
	author.Publicationsmap[1] = "map1";
	author.Publicationsmap[2] = "map2";
	author.Pages.insert(0);
	author.Pages.insert(1);
	author.Pages.insert(2);
	//author.Pages.erase(3);//Ä¨µô
}


AuthorInfo::~AuthorInfo()
{
}


