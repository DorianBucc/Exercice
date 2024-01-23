# Exercice
Exercice de base pour tous language.

Consigne sous forme d'algorithme.

</br>

Pour voir mes projets aller sur mon répertoire [*Project*](https://github.com/DorianBucc/Project)


</br>

---

## Exercice 1

- Travail sur les boucles, le tableau simple et affichage console.

#### Consigne

```
    fonction main:
        var tab         // taille 3x3
        pour i < 3 faire
            afficher("-------------")
            pour y < 3 faire
                afficher("| " + tab(i,y) + " ")
            fin pour
            afficher("|")
        fin pour
        afficher("-------------")
```

#### Résultat

```
    -------------
    | 0 | 0 | 0 |
    -------------
    | 0 | 1 | 0 |
    -------------
    | 0 | 0 | 0 |
    -------------
```

---

</br>

## Exercice 2

- Travail sur les references (pointeur), l'utilisation des strings et fonction.
    
#### Consigne

```
    fonction modification(var):
        var <- var + " le monde"

    fonction main:
        var <- "Bonjour"
        modification(var)
        afficher(var)
```

#### Résultat

```
    Bonjour le monde
```

---

</br>

## Exercice 3

- Travail sur les objets, une interface et un tableau plus complexe. (langage pas fait pour : C, rust)

#### Consigne

```
    interface Vitesse:
        abstraite string Vmax()

    abstraite class Vehicule:
        string name
        string vitesse

    class voiture hérite Vehicule implémente Vitesse:
        voiture(name):
            vitesse = " 130 km/h"
    
    class moto hérite Vehicule implémente Vitesse:
        voiture(name):
            vitesse = " 200 km/h"
    
    class camion hérite Vehicule implémente Vitesse:
        voiture(name):
            vitesse = " 80 km/h"
    
    fonction main :
        const var tailleTab     // tailleTab = 3
        var Tab
        tab(0) <- voiture("C2")
        tab(1) <- moto("R1")
        tab(2) <- camion("Man")
        
        pour i < tailleTab faire
            afficher(tab(i)->Vmax())
        fin pour
```

#### Résultat

```
    C3 130 km/h
    R1 200 km/h
    Man 80 km/h
```

---

</br>

## Exercice 4

- Travail sur les threads, recursive simple et entrée console.

#### Consigne

```
```

#### Résultat

```
```

---

</br>

## Exercice 5

- Travail sur les dictionnaires/maps, objet heritage, attribut statique.

#### Consigne

```
```

#### Résultat

```
```

---

</br>

## Exercice 6
- Introduction.

#### Consigne

```
```

#### Résultat

```
```

---
