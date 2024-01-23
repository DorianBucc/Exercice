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

int mod(std::string* var){
    // (*var).append(" le monde");
    var->append(" le monde");
}


int main()
{
    std::string str = "Bonjour";
    mod(&str);
    std::cout << str << std::endl;
    return 0;
}
