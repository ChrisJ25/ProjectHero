#ifndef CharacterCreator_H
#define CharacterCreator_H

#include <iostream>

using namespace std;

 void PERSONALITY() {
    std::cout<<"Welcome to the P.E.R.S.O.N.A.L.I.T.Y Customizer!"<<std::endl;
    std::string personal = "Here, you will customize the";
    
    personal += '\n';
    personal += "Points of health,";
    personal += '\n';
    personal += "Exhaustion,";
    personal += '\n'; 
    personal += "Race(Species),";
    personal += '\n'; 
    personal += "SPECIAL,";
    personal += '\n';
    personal += "Occupation,";
    personal += '\n';
    personal += "Name,";
    personal += '\n';
    personal += "Appearance,";
    personal += '\n';
    personal += "Loyalty, and";
    personal += '\n';
    personal += "InvenTorY aspects!"; 

    std::cout<<personal<<std::endl;
 }
#endif
