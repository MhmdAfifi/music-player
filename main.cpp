#include <iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{


    list<string>musicPlayerList;

    bool addingSong = true;
    string song;

    while(addingSong)
    {
        cout<<"ënter the song u want to add: \n";
        cin>>song;
        musicPlayerList.push_back(song);
        cout<<"do u want to add more : \n";
        cin>>addingSong;


    }

    musicPlayerList.sort();
    for (auto l:musicPlayerList)
    {
        cout<<l<<endl;

    }

    bool playSong = true;

    auto i = musicPlayerList.begin();

    while(playSong)
    {
        cout<<"u r lesinting now to : "<<*i<<endl;
        cout<<"do u want to go next : \n";
        cin>>playSong;
        i++;

    }

    cout<<"search on ur favourite song \n";
    string favoritesong;
    cin>>favoritesong;

    cout<<*find(musicPlayerList.begin(),musicPlayerList.end(),favoritesong);



    return 0;
}
