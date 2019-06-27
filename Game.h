#ifndef GAME_H
#define GAME_H
#include "Player.h"

class GAME_H
{
public:
Game();
virtual ~GAME();
void play();
void (std::string n1, int s1, std::string n2, int s2);


protected:

private:
Player player1;
Player player2;
};




#endif // GAME_H
