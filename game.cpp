#include "game.h"
#include"board.h"
#include <iostream>
#include<string>


using namespace std;
game::game()
{
    //ctor
}

game::~game()
{
    //dtor
}

void game::  run()
{
    while (!m_isComplete){

        render();
        update();
    }
}
void game::  initialize()
{

    cout<< "initializing..."<<endl;
    m_p1.setName("Mayo");
    m_p1.setIcon ('X');
    m_p2.setName("Nolasco");
    m_p2.setIcon ('O');
    m_currPlayer=&m_p1;
    m_board.initialize();




}
void game::  render ( )
{
    cout<< "Game Rendering..."<< endl;
    m_board.render();



}
void game:: update()
{

    m_isComplete=checkWin();



    if (m_isComplete==0){

            if (m_board.box[1]!='1' &&
                m_board.box[2]!='2' &&
                m_board.box[3]!='3' &&
                m_board.box[4]!='4' &&
                m_board.box[5]!='5' &&
                m_board.box[6]!='6' &&
                m_board.box[7]!='7' &&
                m_board.box[8]!='8' &&
                m_board.box[9]!='9' ){

                 cout<<  "\a" "\a"  "Game Draw !";
                }
            else{
            cout<<  "\a" "\n" "Player " << m_currPlayer->getName() << " please enter number (1-9): ";}}


    else if (m_isComplete==1){
        switchPlayer();
        cout<< "\a" "\a" "\a"  "Player "<< m_currPlayer->getName() << " Wins :)" <<endl;}

    if (!m_isComplete){
            m_board.update(m_currPlayer->getMove(),m_currPlayer->getIcon());

            switchPlayer();}
}


/*********************************************
	FUNCTION TO RETURN GAME STATUS
	1 FOR GAME IS OVER WITH RESULT
    0 FOR GAME IS IN PROGRESS
**********************************************/
bool game::  checkWin()
{
    if (m_board.box[1] == m_board.box[2] && m_board.box[2] == m_board.box[3]&&m_board.box[1]==m_board.box[3])
		return 1;
   else if (m_board.box[4] == m_board.box[5] && m_board.box[5] == m_board.box[6]&&m_board.box[4]==m_board.box[6])
		return 1;
   else if (m_board.box[7] == m_board.box[8] && m_board.box[8] == m_board.box[9]&&m_board.box[7]==m_board.box[9])
		return 1;
   else if (m_board.box[1] == m_board.box[4] && m_board.box[4] == m_board.box[7]&&m_board.box[1]==m_board.box[7])
		return 1;
   else if (m_board.box[2] == m_board.box[5] && m_board.box[5] == m_board.box[8]&&m_board.box[2]==m_board.box[8])
		return 1;
   else if (m_board.box[3] == m_board.box[6] && m_board.box[6] == m_board.box[9]&&m_board.box[3]==m_board.box[9])
		return 1;
   else if (m_board.box[1] == m_board.box[5] && m_board.box[5] == m_board.box[9]&&m_board.box[1]==m_board.box[9])
		return 1;
   else if (m_board.box[3] == m_board.box[5] && m_board.box[5] == m_board.box[7]&&m_board.box[3]==m_board.box[7])
		return 1;

   else {
		return 0;}


}


void game::  switchPlayer()
{
    if (m_currPlayer==&m_p1)
    {
        m_currPlayer=&m_p2;
    }
    else
    {
        m_currPlayer=&m_p1;
    }
};
