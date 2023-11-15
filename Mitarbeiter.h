#ifndef MITARBEITER_H
#define MITARBEITER_H

#include <iostream>

class Mitarbeiter
{
   
public:
    Mitarbeiter(const std::string& _vorname, const std::string& _nachname, int ID, double _gehalt);
    
    Mitarbeiter(const Mitarbeiter& other); 
    
    virtual void infosAnzeigen()const;

    void befoerdern(double betrag);
    virtual ~Mitarbeiter(){}
private:
    std::string vorname;
    std::string nachname;
    int mitarbeiterID;
    double gehalt;
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
