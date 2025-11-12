#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

 class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor() : visitorName(""), ticketsBought(0) {}
    Visitor(string n, int t) : visitorName(n), ticketsBought(t) {}
    ~Visitor() {}
    void displayInfo() {
        cout << "Visitor Info:" << endl;
        cout << "Name: " << visitorName << endl;
        cout << "Tickets Bought: " << ticketsBought << endl;
    }
};
   
    





#endif
