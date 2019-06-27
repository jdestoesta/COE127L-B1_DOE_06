#ifndef PLAYER_H
#define PLAYER_H
#include <string>


class Player
{
    private:
        std::string name;
        int score;

    public:
        Player();
        virtual ~Player();
        void setScore(int s);
        void setName(std::string n);
        std::string getName();
        int getScore();

    protected:

};

#endif //PLAYER_H



