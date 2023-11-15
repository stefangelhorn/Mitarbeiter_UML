#include "Mitarbeiter.h"
#include <iostream>

    Mitarbeiter::Mitarbeiter(const std::string& _vorname, const std::string& _nachname, int ID, double _gehalt)
    : vorname(_vorname), nachname(_nachname), mitarbeiterID(ID), gehalt(_gehalt){}

    Mitarbeiter::Mitarbeiter(const Mitarbeiter& other) 
    : vorname{other.vorname}, nachname{other.nachname}, mitarbeiterID{other.mitarbeiterID}, gehalt{other.gehalt}{}


    void Mitarbeiter::infosAnzeigen()const
    {
        std::cout << nachname << ", " << vorname << " [ID: " << mitarbeiterID << "] (" << gehalt << " EUR)\n";
    }  


    void Mitarbeiter::befoerdern(double betrag)
    {
        gehalt += betrag;
    }
    
    void Manager::infosAnzeigen()const
    {   
        std::cout << "Ich bin der " << titel << ". \n";
        Mitarbeiter::infosAnzeigen();
    }
