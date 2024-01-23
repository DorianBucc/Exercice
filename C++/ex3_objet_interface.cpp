/* Consigne :

    interface Vitesse:
        abstract string Vmax()

    class voiture implémente Vitesse:
        string name
        string vitesse
    
    class moto implémente Vitesse:
        string name
        string vitesse
    
    class camion implémente Vitesse:
        string name
        string vitesse
    
    fonction main :
        const var tailleTab
        var Tab
        tab(0) <- voiture("C2")
        tab(1) <- moto("R1")
        tab(2) <- camion("Man")
        
        pour i < 3 faire
            afficher(tab(i)->Vmax())
        fin pour

   Resultat :

    C3 130 km/h
    R1 200 km/h
    Man 80 km/h

*/


#include <iostream>
#include <string>
#include <vector>

// Interface class
class Vitesse {
public:
    virtual std::string Vmax() const = 0;
};

class voiture : public Vitesse
{
private:
    std::string name;
    std::string vitesse = " 130 km/h";
public:
    std::string Vmax() const override{
        return name + vitesse;
    }
    voiture(std::string name){
        this->name = name;
    }
};

class moto : public Vitesse
{
private:
    std::string name;
    std::string vitesse = " 200 km/h";
public:
    std::string Vmax() const override{
        return name + vitesse;
    }
    moto(std::string name){
        this->name = name;
    }
};

class camion : public Vitesse
{
private:
    std::string name;
    std::string vitesse = " 80 km/h";
public:
    std::string Vmax() const override{
        return name + vitesse;
    }
    camion(std::string name){
        this->name = name;
    }
};

int main()
{
    const int tailleTab = 3;
    std::vector<Vitesse*> tab;
    tab.push_back(new voiture("C3"));
    tab.push_back(new moto("R1"));
    tab.push_back(new camion("Man"));
    
    for (int i = 0; i < tailleTab; i++)
    {
        std::cout << tab[i]->Vmax() << std::endl;
    }
    
    return 0;
}
