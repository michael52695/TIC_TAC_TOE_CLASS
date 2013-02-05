#include "player.h"
#include<iostream>
#include<math.h>
player::player()
{
    //ctor
}
player::~player()
{
    //dtor
}
void player::setName (string n){


name=n;

}

int player:: getMove()
{
    int move;
    cin>> move;
    while (move>9 || move<1 || !cin ){
        cout<< "\n" "Invalid move... Try again" <<endl;
        cout<< "\n" "Please enter number:";
        cin>>move  ;
        cin.ignore();
        cin.get();}
    return move;



}
void player::setIcon (char i){
    icon=i;
}
string player::getName ()
{
    return name;
}
char player::getIcon (){




        return icon;
}
