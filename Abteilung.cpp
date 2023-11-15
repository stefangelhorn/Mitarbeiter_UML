#include "Abteilung.h"

    int abteilungsLeiterID;
    std::string abteilungsname;
    std::map<int, std::unique_ptr<Mitarbeiter>> mitarbeiter;

    Abteilung::Abteilung(const std::string& name) : abteilungsname(name){}

    int Abteilung::findMaxID() const
    {
        if(!mitarbeiter.empty())
        {
            auto it = mitarbeiter.crbegin();
            return it->first;
        }
        return 0;
    }

    void Abteilung::einzelnenMitarbeiterAnzeigen(int ID) const
    {
        mitarbeiter.at(ID)->infosAnzeigen();
    }

    void Abteilung::abteilungsinfosAnzeigen()const
    {
        std::cout << "Name der Abteilung: " << abteilungsname << '\n'
                  << "Abteilungsleiter: ";
                  einzelnenMitarbeiterAnzeigen(abteilungsLeiterID);
    }



    void Abteilung::mitarbeiterHinzufuegen(const std::string& vorname, const std::string& nachname, double gehalt)
    {
        int id = findMaxID() + 1;
        mitarbeiter[id] = std::make_unique<Mitarbeiter>(vorname, nachname, id, gehalt);
    }


    void Abteilung::mitarbeiterEntfernen(int mitarbeiterID)
    {
        if(mitarbeiter.erase(mitarbeiterID) == 0)
        {
            std::cout << "Mitarbeiter mit der ID " << mitarbeiterID << " existiert nicht!\n";
        }
    }

    void Abteilung::mitarbeiterAuflisten()const
    {
        for(const auto& [id, m] : mitarbeiter)
        {
            m->infosAnzeigen();
        }
    }

    void Abteilung::zumAbteilungsleiterBefoerdern(int ID, const std::string& titel)
    {
        if(mitarbeiter.count(ID)) // wenn Eintrag in map vorhanden...
        {        
            mitarbeiter[ID] = std::make_unique<Manager>(*mitarbeiter[ID], titel);
        }
    }
