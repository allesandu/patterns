#ifndef VICTIM_H
#define VICTIM_H
#include <iostream>
#include <set>
#include "Attacker.h"

class Attacker;

class Victim {
    private:
        int Hp;
        std::string Name;
        std::set<Attacker*>* attacList;
        
        void notify();
        
    public:
        Victim(int hp, const std::string& name);
        ~Victim();
        
        const int getHP() const;
        const std::string& getName() const;
        
        void attach(Attacker* attacker);
        void detach(Attacker* attacker);
        
};

std::ostream& operator<<(std::ostream& out, const Victim& vic);

#endif // VICTIM_H
