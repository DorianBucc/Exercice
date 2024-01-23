/* Consigne :
    fonction mod (var):
        var <- var+" le monde"

    fonction main:
        var <- "Bonjour"
        mod(var)
        afficher(var) // affiche Bonjour le monde 

   Resultat :

    Bonjour le monde
*/


#include <iostream>
#include <string>

void modification(std::string* var){
    // (*var).append(" le monde");
    var->append(" le monde");
    return;
}


int main()
{
    std::string str = "Bonjour";
    modification(&str);
    std::cout << str << std::endl;
    return 0;
}
