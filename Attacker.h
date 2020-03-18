#ifndef ATTACKER_H
#define ATTACKER_H
#include <iostream>
#include "Victim.h"

class Victim;

class Attacker {
    private:
        int Hp;
        std::string Name;
        
    public:
        Attacker(int hp, const std::string& name);
        ~Attacker();
        
        const int getHP() const;
        const std::string& getName() const;
        
        void attack(Victim* target);
        void takeHP(int addHP);
    
};

std::ostream& operator<<(std::ostream& out, const Attacker& ones);

#endif // ATTACKER_H
