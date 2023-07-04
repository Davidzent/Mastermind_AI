/* 
 * File:   main.cpp
 * Author: Guijosa, David
 * Created on Oct 8, 2019, 11:00 AM
 * Purpose: Mastermind - Finish AI
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here
#include "Game.h"
#include "AI_SNS.h"
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char input;
    int nLetter=10;
    int codesz=4;
    int atempts=10000;
    bool dupli=false;
    
    //Menu
    /*cout<<"Do you want to customize your game? (Y/N)\n";
    //cin>>input;
    if(input=='Y'||input=='y'){
        cout<<"Enter the number of letters : ";
        cin>>nLetter;
        cout<<"Enter the code size : ";
        cin>>codesz;
        cout<<"How many attempts do you want to have? ";
        cin>>atempts;
        cout<<"Allow duplicates? (Y/N): ";
        cin>>input;
        if(input=='Y'||input=='y')dupli=true;
    }
    //start the game
    Game player(nLetter,codesz,atempts,dupli);
    
    //play the game
    player.play();
    */
    cout<<"all the outputs are in a files (.txt)\n";
    AISNS Senshi(nLetter,codesz,atempts,dupli);
    Senshi.play();
    //Exit
    return 0;
}
//9519418408
