#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

 class Visitor{
        private: string visitorName;
        int ticketsBought;
        
    }
    public Visitores( string visitorName, int ticketsBought){
          this -> visitorName = visitorName;
            this -> ticketsBought = ticketsBought;
    }
    void displayInfo(){
        cout<< "Visitores name:" << visitorName << "Numer of tickets boucht:"<< ticketsBought<< endl;
    }
   
    





#endif
