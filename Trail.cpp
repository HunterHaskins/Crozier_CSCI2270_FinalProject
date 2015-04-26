//Michael Crozier, S. Ganesh, Recitation #105
#include "Trail.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

Trail::Trail(int difficulty)
{
    fuel = 500;
    money = 200;
    day = 0;
    fatigue = 3;
    string name;
    cout<<"There are 5 passengers."<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Name a passenger."<<endl;
        cin>>name;
        cin.ignore();
        passengers[i] = name;
    }

    if (difficulty == 1)
    {
        difficultyI = 1;
        difficultyS = "easy";
        place * p = new place;
        p->next1 = NULL;
        p->next2 = NULL;
        p->weight = 3;
        p->attraction = "No attraction";
        p->name = "David's Town";
        p->danger = 0;

        place * p1 = new place;
        p1->next1 = p;
        p1->next2 = NULL;
        p1->weight = 4;
        p1->attraction = "Fuel station";
        p1->name = "Zoid burg";
        p1->danger = 1;

        place * p2 = new place;
        p2->next1 = p1;
        p2->next2 = NULL;
        p2->weight = 5;
        p2->attraction = "No attraction";
        p2->name = "Death's armpit";
        p2->danger = 2;

        place * p3 = new place;
        p3->next1 = p2;
        p3->next2 = NULL;
        p3->weight = 1;
        p3->attraction = "Fuel station";
        p3->name = "Dandy Davy's Gas Emporium";
        p3->danger = 1;

        place * p4 = new place;
        p4->next1 = p3;
        p4->next2 = NULL;
        p4->weight = 6;
        p4->attraction = "No attraction";
        p4->name = "Salmon valley";
        p4->danger = 1;

        place * p5 = new place;
        p5->next1 = p4;
        p5->next2 = NULL;
        p5->weight = 2;
        p5->attraction = "No attraction";
        p5->name = "Flower hill";
        p5->danger = 0;

        place * p6 = new place;
        p6->next1 = p5;
        p6->next2 = NULL;
        p6->weight = 0;
        p6->attraction = "Fuel station";
        p6->name = "Home";
        p6->danger = 0;

        current = p6;
    }
    else if (difficulty == 2)
    {
        difficultyI = 2;
        difficultyS = "normal";
        place * p = new place;
        p->next1 = NULL;
        p->next2 = NULL;
        p->weight = 3;
        p->attraction = "No attraction";
        p->name = "David's Town";
        p->danger = 0;

        place * p1 = new place;
        p1->next1 = p;
        p1->next2 = NULL;
        p1->weight = 3;
        p1->attraction = "Fuel station";
        p1->name = "Gutter's Gas";
        p1->danger = 2;

        place * p2 = new place;
        p2->next1 = p;
        p2->next2 = NULL;
        p2->weight = 6;
        p2->attraction = "No attraction";
        p2->name = "Peaceful woods";
        p2->danger = 0;

        place * p3 = new place;
        p3->next1 = p1;
        p3->next2 = p2;
        p3->weight = 3;
        p3->attraction = "No attraction";
        p3->name = "Pete's pond";
        p3->danger = 1;

        place * p4 = new place;
        p4->next1 = p3;
        p4->next2 = NULL;
        p4->weight = 4;
        p4->attraction = "No attraction";
        p4->name = "Locker's davey";
        p4->danger = 1;

        place * p5 = new place;
        p5->next1 = p4;
        p5->next2 = NULL;
        p5->weight = 1;
        p5->attraction = "Fuel station";
        p5->name = "Huey's hop stop";
        p5->danger = 1;

        place * p6 = new place;
        p6->next1 = p5;
        p6->next2 = NULL;
        p6->weight = 1;
        p6->attraction = "No attraction";
        p6->name = "Stab town";
        p6->danger = 2;

        place * p7 = new place;
        p7->next1 = NULL;
        p7->next2 = NULL;
        p7->weight = 8;
        p7->attraction = "No attraction";
        p7->name = "Not stab town";
        p7->danger = 0;

        place * p8 = new place;
        p8->next1 = p6;
        p8->next2 = p7;
        p8->weight = 0;
        p8->attraction = "Fuel station";
        p8->name = "Home";
        p8->danger = 0;

        current = p8;
    }
    else
    {
        difficultyI = 3;
        difficultyS = "hard";
        place * p = new place;
        p->next1 = NULL;
        p->next2 = NULL;
        p->weight = 3;
        p->attraction = "No attraction";
        p->name = "David's Town";
        p->danger = 0;

        place * p1 = new place;
        p1->next1 = p;
        p1->next2 = NULL;
        p1->weight = 4;
        p1->attraction = "Fuel station";
        p1->name = "Sketcher's run";
        p1->danger = 1;

        place * p2 = new place;
        p2->next1 = p1;
        p2->next2 = NULL;
        p2->weight = 2;
        p2->attraction = "No attraction";
        p2->name = "Salty lanes";
        p2->danger = 2;

        place * p3 = new place;
        p3->next1 = p1;
        p3->next2 = NULL;
        p3->weight = 5;
        p3->attraction = "No attraction";
        p3->name = "Less salty lanes";
        p3->danger = 1;

        place * p4 = new place;
        p4->next1 = p2;
        p4->next2 = p3;
        p4->weight = 10;
        p4->attraction = "Fuel station";
        p4->name = "Long haul fuel";
        p4->danger = 0;

        place * p5 = new place;
        p5->next1 = p2;
        p5->next2 = NULL;
        p5->weight = 1;
        p5->attraction = "Fuel station";
        p5->name = "Hell's pickle pot";
        p5->danger = 3;

        place * p6 = new place;
        p6->next1 = p5;
        p6->next2 = p4;
        p6->weight = 3;
        p6->attraction = "No attraction";
        p6->name = "Shanty Pete's pit of pennies";
        p6->danger = 1;

        place * p7 = new place;
        p7->next1 = p6;
        p7->next2 = NULL;
        p7->weight = 4;
        p7->attraction = "No attraction";
        p7->name = "Homesick Highway";
        p7->danger = 1;

        place * p8 = new place;
        p8->next1 = p7;
        p8->next2 = NULL;
        p8->weight = 4;
        p8->attraction = "Fuel station";
        p8->name = "Bibidi Babidi Badlands";
        p8->danger = 1;

        place * p9 = new place;
        p9->next1 = p8;
        p9->next2 = NULL;
        p9->weight = 3;
        p9->attraction = "Fuel station";
        p9->name = "Home";
        p9->danger = 0;

        current = p9;
    }
}

//Constructor method that sets up the fuel and money, and then asks the player
//for the names of the people in the party. Then it sets up the maps depending
//on the difficulty level set by the player.

Trail::~Trail()
{}

//Destructor

void Trail::menu()
{
    srand(time(NULL));
    int r = 0;
    int input;
    bool check = false;
    while (check == false)
    {
        if (current->name.compare("David's Town") == 0)
        {
            results(true);
            return;
        }
        if (fuel == 0)
        {
            results(false);
            return;
        }
        if (fatigueCount >= 8)
        {
            fatigueCount = fatigueCount - 8;
            fatigue--;
        }
        if (fatigue < 0)
        {
            results(false);
            return;
        }
        r = rand()%10 +1;
        r = r*current->danger;
        cout<<""<<endl;
        cout<<"Number of days passed: "<<day<<endl;
        cout<<"Camp at "<<current->name<<endl;
        cout<<"What will you do?"<<endl;
        cout<<"1. Look around"<<endl;
        cout<<"2. Scout ahead"<<endl;
        cout<<"3. Work"<<endl;
        cout<<"4. Rest"<<endl;
        cout<<"5. Refuel"<<endl;
        cout<<"6. Display information"<<endl;
        cout<<"7. Move on"<<endl;
        cin>>input;
        cin.ignore();

        if (input == 1)
        {
            displayCamp();
        }
        else if (input == 2)
        {
            lookAhead();
        }
        else if (input == 3)
        {
            work();
            if (r > 8)
            {
                BanditRaid();
            }
        }
        else if (input == 4)
        {
            rest();
            if (r > 8)
            {
                BanditRaid();
            }
        }
        else if (input == 5)
        {
            refuel();
            if (r > 8)
            {
                BanditRaid();
            }
        }
        else if (input == 6)
        {
            displayInformation();
        }
        else if (input == 7)
        {
            moveOn();
        }
    }
}

//Menu method that displays a menu and gets user input and does certain actions
//depending on the input. It also checks to see the state of supplies and the passengers
//and where they are to say whether they have won or lost.

void Trail::BanditRaid()
{
    srand (time(NULL));
    int r = rand()%10 +1;
    if (r > 8)
    {
        cout<<"A huge number of bandits attacked!"<<endl;
        bool check = false;
        int rPassenger;
        while (check == false)
        {
            rPassenger = rand()%5;
            if (passengers[rPassenger] != "")
            {
                check = true;
            }
        }
        cout<<passengers[rPassenger]<<" was killed in the fight."<<endl;
        passengers[rPassenger] = "";
        cout<<"Everyone else is tired from trying to fight the bandits."<<endl;
        fatigue -= 1;
        cout<<"Fatigue level: "<<getFatigue(fatigue)<<endl;
        fuel -= 200;
        cout<<"The bandits took some fuel. There is only "<<fuel<<" remaining."<<endl;
        money -= 100;
        cout<<"The bandits took some money. There is only "<<money<<" dollars left."<<endl;
    }
    else if (r > 4)
    {
        cout<<"A group of bandits attacked!"<<endl;
        cout<<"Everyone is tired from trying to fight off the bandits."<<endl;
        fatigue -= 1;
        cout<<"Fatigue level: "<<getFatigue(fatigue)<<endl;
        fuel -= 50;
        cout<<"The bandits were still able to take some fuel. There is only "<<fuel<<" remaining."<<endl;
        money -= 50;
        cout<<"The bandits took some money. There is only "<<money<<" dollars left."<<endl;
    }
    else if (r > 0)
    {
        cout<<"A couple bandits attacked!"<<endl;
        cout<<"They didn't put up much of a fight, and your group was able to scare them off."<<endl;
        cout<<"However, everyone is tired from scaring away the bandits."<<endl;
        fatigue -= 1;
        cout<<"Fatigue level: "<<getFatigue(fatigue)<<endl;
    }
    else
    {
        cout<<"A bandit came by, but ran off before doing anything."<<endl;
    }
}

//A method for a bandit raid on the party. A random number between 1-10 including 1 and 10
//is chosen and the severity of the attack is greater the higher the number.

string Trail::getFatigue(int fatigue1)
{
    if (fatigue1 == 4)
    {
        return "Energized";
    }
    else if (fatigue1 == 3)
    {
        return "Normal";
    }
    else if (fatigue1 == 2)
    {
        return "Tired";
    }
    else if (fatigue1 == 1)
    {
        return "Exhausted";
    }
    else
    {
        return "Near Death";
    }
}

//getFatigue takes in the int fatigue level and prints out a corresponding
//string that makes more sense to read.

int Trail::work()
{
    srand(time(NULL));
    int r = rand()%50 + 51;
    money += r;
    if (r > 90)
    {
        cout<<"Work was great! Got "<<r<<" dollars."<<endl;
    }
    else if (r > 70)
    {
        cout<<"Work was good! Got "<<r<<" dollars."<<endl;
    }
    else
    {
        cout<<"Work was OK. Got "<<r<<" dollars."<<endl;
    }
    day++;
    fatigueCount += 3;
    return r;
}

//work has the party work for money that day. Randomly gets between 50 and 100 dollars
//then ups fatigue and the number of days.

void Trail::rest()
{
    cout<<"Everyone rested for the night."<<endl;
    cout<<"The group's fatigue level got better!"<<endl;
    if (fatigue < 4)
    {
        fatigue += 1;
    }
    fatigueCount = 0;
    cout<<"Fatigue level: "<<getFatigue(fatigue)<<endl;
    day++;
}

//rest method has the party rest and increase fatigue level by one. Also
//uses a day.

void Trail::results(bool win)
{
    if (win == true)
    {
        cout<<"You made it to "<<current->name<<"!"<<endl;
        int numPassengers = 0;
        cout<<"These people arrived:"<<endl;
        for (int i = 0; i < 5; i++)
        {
            if (passengers[i] != "")
            {
                numPassengers++;
                cout<<passengers[i]<<endl;
            }
        }
        cout<<"Total surviving passengers: "<<numPassengers<<endl;
        cout<<"Fuel remaining: "<<fuel<<endl;
        cout<<"Money remaining: "<<money<<endl;
        cout<<"End fatigue level: "<<getFatigue(fatigue)<<endl;
        cout<<"Difficulty level: "<<difficultyS<<endl;
        cout<<""<<endl;
        int score = 0;
        if (difficultyI == 2)
        {
            score += 1000;
        }
        else if (difficultyI == 3)
        {
            score += 2000;
        }
        score += fuel*numPassengers;
        score += 2*money*numPassengers;
        score += 100*fatigue;
        score += 1000-(10*day);
        cout<<"Final score: "<<score<<endl;
        cout<<""<<endl;
        cout<<"Thanks for playing! Press ENTER to quit."<<endl;
        string input;
        cin>>input;
        cin.ignore();
    }
    else
    {
        if (fuel == 0)
        {
            cout<<"Your party ran out of fuel, and was stranded in the wasteland."<<endl;
            cout<<"GAME OVER"<<endl;
            cout<<""<<endl;
            cout<<"Press ENTER to quit."<<endl;
            string input;
            cin>>input;
            cin.ignore();
        }
        else if (fatigue < 0)
        {
            cout<<"Everyone in the party collapsed from exhaustion, and can't go on."<<endl;
            cout<<"GAME OVER"<<endl;
            cout<<""<<endl;
            cout<<"Press ENTER to quit."<<endl;
            string input;
            cin>>input;
            cin.ignore();
        }
        else
        {
            cout<<"Everyone in the party has died in the wasteland."<<endl;
            cout<<"GAME OVER"<<endl;
            cout<<""<<endl;
            cout<<"Press ENTER to quit."<<endl;
            string input;
            cin>>input;
            cin.ignore();
        }
    }
}

//Shows the results of the game. If the player make it to David's Town, then
//it tally's up a score based on how many days were used, how much fuel is left,
//how money they have, how many party members survived, and fatigue level at the end.
//there is also a bonus for choosing a higher difficulty. If the player ran out
//of fuel it says there were stranded in the wilderness, if they party all died,
//they also lose, and if they get too tired, they collapse and die as well.

void Trail::refuel()
{
    if (current->attraction.compare("Fuel station") == 0)
    {
        cout<<"It costs 50 dollars to get more fuel. You have "<<money<<" dollars."<<endl;
        cout<<"Do you want to buy some? (Y/N)"<<endl;
        string input;
        cin>>input;
        cin.ignore();
        if (input.compare("Y") == 0)
        {
            cout<<"You bought some fuel."<<endl;
            fuel += 75;
            money -= 50;
            cout<<"Current fuel: "<<fuel<<endl;
            cout<<"Current funds: "<<money<<endl;
            day++;
            fatigueCount += 1;
        }
        else
        {
            cout<<"You did not buy anything."<<endl;
        }
    }
    else
    {
        cout<<"There is no fuel station here."<<endl;
    }
}

//refuel prompts the user to pay for gas if there is a gas station in the area
//and adds fuel and takes away money if they do. Also takes a day to do this.

void Trail::displayInformation()
{
    cout<<"Current camp: "<<current->name<<endl;
    cout<<"Current fuel: "<<fuel<<endl;
    cout<<"Current passengers:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<passengers[i]<<endl;
    }
    cout<<"Current fatigue level: "<<getFatigue(fatigue)<<endl;
    cout<<"Current funds: "<<money<<endl;
    cout<<"Number of days passed: "<<day<<endl;
}

//DisplayInformation shows all the information regarding the party, like money,
//fuel, number of passenger and who they are, fatigue level, and days past.

void Trail::displayCamp()
{
    cout<<"Camp information:"<<endl;
    cout<<"Name: "<<current->name<<endl;
    cout<<"Attraction: "<<current->attraction<<endl;
    cout<<"Danger level: "<<current->danger<<endl;
}

//DisplayCamp is like DisplayInformation in that it shows the camp's information.
//shows the camp's name, attraction, and danger level.

void Trail::lookAhead()
{
    if(current->next1 != NULL && current->next2 != NULL)
    {
        cout<<"There are two paths ahead. Which one would you like to scout? 1 or 2?"<<endl;
        int input;
        cin>>input;
        cin.ignore();
        if(input == 1)
        {
            cout<<"Next camp name: "<<current->next1->name<<endl;
            cout<<"Attraction: "<<current->next1->attraction<<endl;
            cout<<"Danger level: "<<current->next1->danger<<endl;
            cout<<"It would take "<<current->next1->weight<<" days to travel there."<<endl;
        }
        else
        {
            cout<<"Next camp name: "<<current->next2->name<<endl;
            cout<<"Attraction: "<<current->next2->attraction<<endl;
            cout<<"Danger level: "<<current->next2->danger<<endl;
            cout<<"It would take "<<current->next2->weight<<" days to travel there."<<endl;
        }
    }
    else if (current->next1 != NULL)
    {
        cout<<"Next camp name: "<<current->next1->name<<endl;
        cout<<"Attraction: "<<current->next1->attraction<<endl;
        cout<<"Danger level: "<<current->next1->danger<<endl;
        cout<<"It would take "<<current->next1->weight<<" days to travel there."<<endl;
    }
    else
    {
        cout<<"Next camp name: "<<current->next2->name<<endl;
        cout<<"Attraction: "<<current->next2->attraction<<endl;
        cout<<"Danger level: "<<current->next2->danger<<endl;
        cout<<"It would take "<<current->next2->weight<<" days to travel there."<<endl;
    }
    fatigueCount += 2;
    day++;
}

//LookAhead is like displayCamp but it also shows how many days it would take
//to get there, and it takes a day to scout ahead. If there are two next camps the
//player has to choose.

void Trail::moveOn()
{
    if (current->next1 != NULL && current->next2 != NULL)
    {
        cout<<"There are two paths, which would you like to take? 1 or 2?"<<endl;
        int input;
        cin>>input;
        cin.ignore();
        if (input == 1)
        {
            cout<<"You went to camp "<<current->next1->name<<"."<<endl;
            current = current->next1;
        }
        else
        {
            cout<<"You went to camp "<<current->next2->name<<"."<<endl;
            current = current->next2;
        }
    }
    else if (current->next1 != NULL)
    {
        cout<<"You went to camp "<<current->next1->name<<"."<<endl;
        current = current->next1;
    }
    else
    {
        cout<<"You went to camp "<<current->next2->name<<"."<<endl;
        current = current->next2;
    }
    day += current->weight;
    fatigueCount += current->weight;
    fuel -= 10*(current->weight);
}

//MoveOn moves the party to the next camp. this costs fuel and takes the number
//of days as says the weight of the next camp. If there are two next spots the player
//has to choose.
