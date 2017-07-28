#include "AuthorsList.h"

#include "AuthorInfo.h"
#include <map>

using namespace std;

AuthorsList::AuthorsList()
{
	map<int, AuthorInfo> authorList = map<int, AuthorInfo>();
	authorList[0] = AuthorInfo();
	authorList[1] = AuthorInfo();
}


AuthorsList::~AuthorsList()
{
}
