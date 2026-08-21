#include <iostream>
#include <list>
using namespace std;


class YoutubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;

	// building constructor:
	YoutubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscriberCount = 0;
	}
};

int main()
{
	YoutubeChannel mariacos("Minombre", "perris");
	mariacos.PublishedVideoTitles.push_back("hey");
	mariacos.PublishedVideoTitles.push_back("oi");
	mariacos.PublishedVideoTitles.push_back("holi");

	cout << "Name: " << mariacos.Name << endl;


	YoutubeChannel mariacos2("Hello", "perra");
}