#include <iostream>
#include "Mitarbeiter.h"
#include "Abteilung.h"


int main()
{
    Abteilung kinder{"Piraten"};
    kinder.mitarbeiterHinzufuegen("Alice", "Blackbeard", 2);
    kinder.mitarbeiterHinzufuegen("Charles", "Buccaneer", 1);
    kinder.mitarbeiterHinzufuegen("Robert", "the Red", 5);
    
    kinder.zumAbteilungsleiterBefoerdern(3, "Captain");

    kinder.mitarbeiterAuflisten();
    

    return 0;
}