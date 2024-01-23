#include <stdio.h>
#include <string.h>

void mod(char* var){
    char* temp = " le monde";
    strncat(var,temp,strlen(temp));
    return;
}


int main()
{
    char str[18] = "Bonjour";   // augmenter la taille pour que strcat ajouter le nombre souhaiter
    mod(str);
    printf("%s\n",str);
    return 0;
}