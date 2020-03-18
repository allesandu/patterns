#include "Victim.h"

Victim::Victim(int hp, const std::string& name) {
    this->Hp = hp;
    this->Name = name;
    
    this->attacList = new std::set<Attacker*>();
}

Victim::~Victim() {
    this->notify();
    
    std::cout << "victim destr!" << std::endl;
}

const int Victim::getHP() const {
    return this->Hp;
}

const std::string& Victim::getName() const {
    return this->Name;
}

void Victim::attach(Attacker* attacker) {
    this->attacList->insert(attacker);
}

void Victim::detach(Attacker* attacker) {
    this->attacList->erase(attacker);
}

void Victim::notify() {
    // std::cout << this->getName() << " статистика:" << std:: endl;
    
    std::set<Attacker*>::iterator it = this->attacList->begin();
    
        for ( ; it != this->attacList->end(); it++ ) {
        // std::cout << "\tпассажир-";
        // std::cout << **it << std::endl;
        (*it)->takeHP(10);
    }
}

std::ostream& operator<<(std::ostream& out, const Victim& vic) {
    out << "<Victim> : " << vic.getName();
    out << "[" << vic.getHP() << "]";
    return out;
}
