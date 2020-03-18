#include "Attacker.h"

Attacker::Attacker(int hp, const std::string& name) {
    this->Hp = hp;
    this->Name = name;
}

Attacker::~Attacker() {
    std::cout << "attacker destr!!!" << std::endl;
}

const int Attacker::getHP() const {
    return this->Hp;
}

const std::string& Attacker::getName() const {
    return this->Name;
}

void Attacker::attack(Victim* target) {
    target->attach(this);
}

void Attacker::takeHP(int addHP) {
    this->Hp += addHP;
}


std::ostream& operator<<(std::ostream& out, const Attacker& ones) {
    out << "<Attacker> - " << ones.getName();
    out << " [" << ones.getHP() << "]";
    
    return out;
}
