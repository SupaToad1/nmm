#include <iostream>
#include <string>
#include <array>
#include <map>
using namespace std;
string board[7][7];


void check(string player){
    bool row=true;
    bool column=true;
    for (int i=0; i=6; i++){
            for (int x=0; x=6; x++){
                //cout<<".";
                if (board[i][x]!=player){column=false;}
            }
     for (int i=0; i=6; i++){
            for (int x=0; x=6; x++){
                //cout<<".";
                if (board[x][i]!=player){row=false;}
            }
        }
    //}
    cout<<"XXX UNFINISHED";
    cout<<row<<" rows";
    cout<<column<<" columns";
    }
}

int putdown(string player){
    int x;
    int y;
    string pos;
    cin>>pos;
    map<string, array<int, 2>>positions;
    positions["OTL"]={0,0};
    positions["OML"]={0,3};
    positions["OBL"]={0,6};
    positions["OBM"]={3,6};
    positions["OBR"]={6,6};
    positions["ORM"]={6,3};
    x=positions[pos][0];
    y=positions[pos][1];
    //y=positions[pos].second[1];
    //pos=positions[pos];
    if (board[x][y]==""){
        board[x][y]=player;
    }
    else{
        cout<<"INVALID POSTION\n";
        putdown(player);
    }
}


int main(){
    for (int c=1; c<9; c++){
            putdown("white");
            check("white");
            putdown("black");
            check("black");
        /*string whitepos;
        string blackpos;
        cin>>whitepos;
        cin>>blackpos;*/

    }

}
