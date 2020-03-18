#include "Attacker.h"
#include "Victim.h"
#include <iostream>

int main() {
    Attacker* var1 = new Attacker(35, "Boets");
    Attacker* var2 = new Attacker(100, "Assassin");
    Attacker* var3 = new Attacker(50, "Urba");
    
    Victim* vic1 = new Victim(20, "Luha");
    Victim* vic2 = new Victim(25, "Lanama");
    
    
    std:: cout << "\n" << *var1 << std::endl;
    std::cout << *var2 << std::endl;
    std::cout << *var3 << std::endl;
    
    std::cout << *vic1 << std::endl;
    std::cout<< *vic2 << std::endl;
    
    std::cout << "=============================" << std::endl;
    var1->attack(vic1);
    var3->attack(vic1);
    
    delete vic1; // add some HP to all of linked attackers
    
    std::cout << "=============================" << std::endl;
    
    
    std::cout << "\n=============================" << std::endl;
    std:: cout << "\n" << *var1 << std::endl;
    std::cout << *var2 << std::endl;
    std::cout << *var3 << std::endl;
    
    return 0;
}
