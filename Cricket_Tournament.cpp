#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;

class Tournament {
    string tournamentName;
    string format;
    string startDate;
    string endDate;
    string location;
public:
    void getTournamentInfo() {
        cout<<"Enter Tournament Name:";getline(cin,tournamentName);
        cout<<"Enter Format:";getline(cin,format);
        cout<<"Enter Start Date:";getline(cin,startDate);
        cout<<"Enter End Date:";getline(cin,endDate);
        cout<<"Enter Location:";getline(cin,location);
    }
    void showTournamentDetails() {
        cout<<"Tournament Information\n";
        cout<<"Name:"<<tournamentName<<endl;
        cout<<"Format:"<<format<<endl;
        cout<<"Start Date:"<<startDate<<endl;
        cout<<"End Date:"<<endDate<<endl;
        cout<<"Location:"<<location<<endl;
    }
};

class Player {
protected:
    int jerseyno,runscore;
    string name;
    int playerID;
    static int playerCount;
public:
    Player() {
        jerseyno=0;
        runscore=0;
        name="Unknown";
        playerID=++playerCount;
    }
    virtual void setdata()=0;
    virtual void showdata()=0;
    virtual void play()=0;
    friend int fgetrun(Player* p);
    virtual ~Player() {
        cout<<"Player deleted:"<<name<<endl;
    }
};

int Player::playerCount=0;

int fgetrun(Player* p) {
    return p->runscore;
}

class Bowler:public Player {
    int nowicket;
public:
    Bowler() { nowicket=0; }
    void setdata() {
        cout<<"Enter bowler name:";getline(cin,name);
        cout<<"Enter jersey number:";cin>>jerseyno;
        nowicket=rand()%6;
        runscore=rand()%60;
    }
    void showdata() {
        cout<<"Bowler ID:"<<playerID<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Jersey:"<<jerseyno<<endl;
        cout<<"Wickets:"<<nowicket<<endl;
        cout<<"Runs:"<<runscore<<endl;
    }
    void play() {
        nowicket=rand()%6;
        runscore=rand()%60;
    }
};

class Batsman:public Player {
public:
    Batsman() {}
    void setdata() {
        cout<<"Enter batsman name:";getline(cin,name);
        cout<<"Enter jersey number:";cin>>jerseyno;
        runscore=rand()%200;
    }
    void showdata() {
        cout<<"Batsman ID:"<<playerID<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Jersey:"<<jerseyno<<endl;
        cout<<"Runs:"<<runscore<<endl;
    }
    void play() {
        runscore=rand()%200;
    }
};

void showTeam(Player* team[],int n,string teamname) {
    cout<<"Team:"<<teamname<<endl;
    for(int i=0;i<n;i++) {
        team[i]->showdata();
    }
}

int main() {
    srand(time(0));

    Tournament t;
    t.getTournamentInfo();

    Player* team1[4];
    Player* team2[4];
    int choice;
    string teamname1,teamname2;

    cout<<"Enter team 1 name:";getline(cin,teamname1);
    cout<<"Enter team 2 name:";getline(cin,teamname2);

    for(int i=0;i<4;i++) {
        cout<<"Enter 1 for batsman, 0 for bowler:";cin>>choice;
        if(choice==1)team1[i]=new Batsman();
        else team1[i]=new Bowler();
        team1[i]->setdata();
    }

    for(int i=0;i<4;i++) {
        cout<<"Enter 1 for batsman, 0 for bowler:";cin>>choice;
        if(choice==1)team2[i]=new Batsman();
        else team2[i]=new Bowler();
        team2[i]->setdata();
    }

    t.showTournamentDetails();
    showTeam(team1,4,teamname1);
    showTeam(team2,4,teamname2);

    int total1=0,total2=0;
    for(int i=0;i<4;i++)total1+=fgetrun(team1[i]);
    for(int i=0;i<4;i++)total2+=fgetrun(team2[i]);

    cout<<"Total of "<<teamname1<<":"<<total1<<endl;
    cout<<"Total of "<<teamname2<<":"<<total2<<endl;

    if(total1>total2)cout<<teamname1<<" wins!"<<endl;
    else if(total2>total1)cout<<teamname2<<" wins!"<<endl;
    else cout<<"Match is a tie!"<<endl;

    return 0;
}
