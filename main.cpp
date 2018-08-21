#include <iostream>
#include "includes/CharacterCreator.h"
#include <Windows.h>
#include <MMSystem.h>


using namespace std;

int main() {
    cout<<"Doctor Disco"<<endl;
    Sleep(2000);
    cout<<"Presents:"<<endl;
    Sleep(3000);
    cout<<"Fallout";
    Sleep(2000);
    cout<<":Motor City"<<endl;
    PlaySound("C:\\Users\\Engineering\\Documents\\workspace\\Sound Files\\ACDCHTH.wav", NULL, SND_LOOP | SND_ASYNC);
    Sleep(15000);
    PlaySound(NULL,NULL,0);
    cout<<"War, War never changes."<<endl;
    Sleep(4000);
    cout<<"Since the medieval era, when armies met in formation to destroy the other, war has been for resources. Gold, Diamonds, Slaves, and countless others."<<endl;
    Sleep(8000);  
    std:cout<<"But, War,"<<endl;
    Sleep(2500);
    cout<<"War never changes"<<endl;
    Sleep(2000);
    cout<<"In the year 2077, the world's greatest war was fought. A final battle for resources. There were no victors."<<endl;
    Sleep(5000);
    cout<<"This battle lasted 2 hours. It was a massive display of destruction. Nuclear Weapons flew through the sky like birds."<<endl;
    Sleep(2000);
    cout<<"War, War never changes."<<endl;
    PERSONALITY();
    cout<<"You wake up in your bed, and catch a glimpse of the large WELCOME TO VAULT 25! banner."<<endl;
    
    
}