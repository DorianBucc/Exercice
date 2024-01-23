# Exercice
Exercice de base pour tous language.

Consigne sous forme d'algorithme.

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

## Exercice 3

- Travail sur les objets, une interface et un tableau plus complexe. (langage pas fait pour : C)

#### Consigne

```
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

## Exercice 4

- Travail sur les threads, recursive simple et entrée console.

#### Consigne

```
```

#### Résultat

```
```

---

## Exercice 5

- Travail sur les dictionnaires/maps, objet heritage, attribut statique.

#### Consigne

```
```

#### Résultat

```
```

---

## Exercice 6
- Introduction.

#### Consigne

```
```

#### Résultat

```
```

---
