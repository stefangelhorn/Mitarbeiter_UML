#ifndef ABTEILUNG_H
#define ABTEILUNG_H

#include "Mitarbeiter.h"

#include <iostream>
#include <map>
#include <memory>

class Abteilung 
{
    int abteilungsLeiterID;
    std::string abteilungsname;
    std::map<int, std::unique_ptr<Mitarbeiter>> mitarbeiter;
    void einzelnenMitarbeiterAnzeigen(int ID)const;
    int findMaxID() const;

public:
    Abteilung(const std::string& name);

    void abteilungsinfosAnzeigen()const;
    void mitarbeiterHinzufuegen(const std::string& vorname, const std::string& nachname, double gehalt);
    void mitarbeiterEntfernen(int mitarbeiterID);
    void mitarbeiterAuflisten()const;
    void zumAbteilungsleiterBefoerdern(int ID, const std::string &titel);
};


#endif /* ABTEILUNG_H */
