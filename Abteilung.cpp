#include "Abteilung.h"

    int abteilungsLeiterID;
    std::string abteilungsname;
    std::map<int, std::unique_ptr<Mitarbeiter>> mitarbeiter;

    Abteilung::Abteilung(const std::string& name) : abteilungsname(name){}

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
        int id = 0; // TODO
        auto neuerMitarbeiter = std::make_unique<Mitarbeiter>{vorname, nachname, id, gehalt};
        mitarbeiter[id] = neuerMitarbeiter;
    }


    void mitarbeiterEntfernen(int mitarbeiterID);
    void mitarbeiterAuflisten()const;
    void zumAbteilungsleiterBefoerdern(int ID);