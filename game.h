#include "board.h"
#include "player.h"
#include <string>


class game
{



    public:
        game();
        virtual ~game();
        void run ();
        void initialize();
        void update();
        void render();
        bool checkWin();
        void switchPlayer();

    protected:
    private:

            board m_board;
            player m_p1;
            player m_p2;
            player *m_currPlayer;
            bool m_isComplete;
};


