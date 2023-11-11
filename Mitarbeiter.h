#ifndef MITARBEITER_H
#define MITARBEITER_H

#include <iostream>

class Mitarbeiter
{
    std::string nachname;
    std::string vorname;
    int mitarbeiterID;
    double gehalt;
    
public:
    Mitarbeiter(const std::string& _vorname, const std::string& _nachname, int ID, double _gehalt);
    /*
    Mitarbeiter{const Mitarbeiter& other}:
    nachname{other.nachname}, 
    vorname{other.vorname}, 
    mitarbeiterID{other.mitarbeiterID}, 
    gehalt{other.gehalt}{}
    /**/
    virtual void infosAnzeigen()const;  
    void befoerdern(double betrag);
    virtual ~Mitarbeiter(){}
};

class Manager : public Mitarbeiter
{
    std::string titel;
    public:
    Manager(const Mitarbeiter&_mitarbeiter, const std::string&_titel) : Mitarbeiter{_mitarbeiter}, titel{_titel}{}

    virtual void infosAnzeigen()const override;  
    ~Manager(){}
};



#endif /* MITARBEITER_H */
