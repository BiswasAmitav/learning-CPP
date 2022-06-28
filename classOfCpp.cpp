#include <iostream>
#include <list>
using namespace std;

class  YoutubeChannel1{
    public:
        string Name;
        string OwnerName;
        int SubscriberCount;
        string PublishedVideoTitles;


        YoutubeChannel1(string name, string ownerName){
            Name = name;
            OwnerName = ownerName;
            SubscriberCount = 0;
        }

        void GefInfo(){
            cout <<"Name : "<<Name<<endl;
            cout << "OwnerName : "<<OwnerName<<endl;
            cout << "Subscriber : "<<SubscriberCount<<endl;
            cout << " Videos: "<<endl;
            cout << PublishedVideoTitles;
        }
};

int main(){
    
    YoutubeChannel ytChannel1("CodeBeauty","Amitav");
    ytChannel1.PublishedVideoTitles ="This is the video for channel one only . ";

    YoutubeChannel1.GetInfo();
    // ytChannel.Name ="codeBeauty";
    // ytChannel.OwnerName = "Amitav Biswas";
    // ytChannel.PublishedVideoTitles = "DSA course 1 . ";
    // ytChannel.SubscriberCount=5000;

    // cout <<"Name : "<<ytChannel1.Name<<endl;
    // cout << "OwnerName : "<<ytChannel1.OwnerName<<endl;
    // cout << "Subscriber : "<<ytChannel1.SubscriberCount<<endl;
    // cout << " Videos: "<<endl;
    // cout << ytChannel1.PublishedVideoTitles;

    return 0;
}