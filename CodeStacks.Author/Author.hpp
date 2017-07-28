
#include <vector>
#include <map>
#include <list>
#include <set>

#include <string>
//#include <cliext/map>

using namespace std;



struct Author
{
	string Name;
	int Age;
	string Company;
	string PhoneNumber;
	vector<string> Publicationsvector;
	map<int, string> Publicationsmap;
	set<int> Pages;
	int BookCount;
};