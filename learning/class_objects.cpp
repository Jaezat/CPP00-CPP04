#include <iostream>
using namespace std;


class YoutubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;
};

int main()
{
	YoutubeChannel mariacos;

	mariacos.name = "Codebeauty";
	mariacos.OwnerName = "Sldi";
	mariacos.SubscriberCount = 8;
	mariacos.PublishedVideoTitles = {"fodase", "hey"};

	cout << "Name: " << mariacos.name << endl;
	for (string videos: mariacos.PublishedVideoTitles)
	{
		cout << videos << endl;
	}
	
}