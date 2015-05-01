//Michael Crozier, S. Ganesh, Recitation #105
#ifndef TRAIL_H
#define TRAIL_H
#include <iostream>

using namespace std;
struct place
{
    place * next1;
    place * next2;
    int weight;
    string attraction;
    string name;
    int danger;
};

//"place" struct. This is a node for the linked lists that make up the levels.
//Each place has at most two next places, and minimum of none. The weight is the number
//of days it takes to travel there. the attraction says whether there is a gas station there
//or not. Name is the name of the place, and danger is an int from 0-3 saying how
//likely it is that bandits will attack.

class Trail
{
    public:
        Trail(int difficulty);
        virtual ~Trail();
        void menu();
        void BanditRaid();
        int work();
        void rest();
        void results(bool win);
        void refuel();
        void displayInformation();
        void displayCamp();
        void lookAhead();
        void moveOn();
        void setDifficulty();
        string getFatigue(int fatigue1);
        void checkInput();
    protected:
    private:
        place * current;
        int fuel;
        string passengers[5];
        int day;
        int fatigue;
        int fatigueCount;
        int money;
        int difficultyI;
        string difficultyS;
};

//Trail class. Methods are described in the Trail.cpp file. current is the place the
//party is currently at in the list. fuel is the amount of fuel. array of passengers
//for the party. day is the number of days past so far, fatigue is the value of the
//group's energy. fatigueCount is a counter from 0-8 that ups fatigue every time it
//reaches 8. money is the amount of money they have. difficultyI is an int value of the
//difficulty from 1-3, and difficultyS is a string saying either "easy" "normal" or "hard"
#endif // TRAIL_H
