#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;


class player
{
    public:
        player();
        virtual ~player();

        void setName (string n);//player1
        void setIcon (char i);
        string getName();//player2
        char getIcon();
        int getMove();

    protected:
    private:

         string name;
         char icon;
};

#endif // PLAYER_H
