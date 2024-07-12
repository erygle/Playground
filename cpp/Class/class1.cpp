#include<bits/stdc++.h>

using namespace std;

class Channel{
    protected:
        string Name;
    private:
        int Subs;
        list<string>Videos;
    public:
        Channel(string string){
            Name = string;
            Subs = 0;
        }
        void printInfo();
        void subscribe();
        void unSubscribe();
        void getVideo(string videoTitle);

};

class ChannelGaming : public Channel{
    public:
        ChannelGaming(string string):Channel (string){}
        void playing();
};

class ChannelSong : public ChannelGaming{
    public:
        ChannelSong(string string):ChannelGaming(string){}
        void singing();
};
int main(int argc, char const *argv[]){
    
    ChannelSong Channel("Hasan oyunda");
    
    /*int click;
    cout<<"How many subs you have : ";
    cin>>click;
    
    for(int k=0 ; k<click ; k++)Channel.subscribe();
    
    int videoCount;
    cout<<"How many vids you have : ";
    cin>>videoCount;
    for(int i=0 ; i<videoCount ; i++){
        cout<<"Enter video name : ";
        string temp;
        getline(cin,temp);
        Channel.getVideo(temp);
    }
    Channel.unSubscribe();

    Channel.printInfo();*/

    Channel.playing();
    Channel.singing();
    Channel.subscribe();
    Channel.printInfo();

    return 0;
}
void Channel::printInfo(){
    cout<<"Channel Name : "<<Name<<endl;
    cout<<"Subscribers : "<<Subs<<endl;
    cout<<"Videos : "<<endl;
    for(auto k:Videos)cout<<k<<endl;
}
void Channel::subscribe(){
    Subs++;
}
void Channel::unSubscribe(){
    if(Subs==0){
        cout<<"You already have 0 sub."<<endl;
        return;
    }
    Subs--;
}
void Channel::getVideo(string videoTitle){
    Videos.push_back(videoTitle);
}
void ChannelGaming::playing(){
    cout<<endl<<Name<<" is now playing."<<endl;
}
void ChannelSong::singing(){
    cout<<endl<<Name<<" is now singing."<<endl;
}