  #include <iostream>
  #include "Player.h"

using namespace std;

Player::~Player()
{
    //dtor
}

void Player::setName(string n)
{
    name = n;
}

void Player::setScore(int s)
{
    score = s;
}

string Player::getName()
{
    return name;
}

int Player::getScore()
{
    return score;
}
