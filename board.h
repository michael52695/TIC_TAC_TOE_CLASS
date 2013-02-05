#ifndef BOARD_H
#define BOARD_H
#include <string>


class board
{



    public:


        board();

        virtual ~board();
        void initialize();
        void render();
        void update (int move,char icon);
        char box[9];
    protected:
    private:


};

#endif // BOARD_H
