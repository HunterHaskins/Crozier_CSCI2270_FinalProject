//Michael Crozier, S. Ganesh, Recitation #105
#include <iostream>
#include "Trail.h"

using namespace std;

int main()
{
    cout<<"Welcome to Oregon Trail game like thing, with bandits!"<<endl;
    cout<<"You start at home with a party of five people, and the goal is to get to David's Town."<<endl;
    cout<<"You win if you get there, and lose if everyone dies, the party's fatigue gets too low, or you run out of fuel."<<endl;
    cout<<"Good luck!"<<endl;
    cout<<"Please choose a difficulty by entering the number."<<endl;
    cout<<"1. Easy"<<endl;
    cout<<"2. Normal"<<endl;
    cout<<"3. Hard"<<endl;
    int input;
    cin>>input;
    cin.ignore();
    cout<<"Now name the passengers in your party."<<endl;
    Trail T(input);
    T.menu();
    return 0;
}

//Main driver file that sets up the minimal story and rules and gets the game going
