# MyLS

### **Introduction**

Le MyLs est un projet qui consiste à re coder la commande Linux ls.



### Fonctionement

Pour lister tous les fichiers dans un dossier donné, le MyLs utilise des fonctiosn système utiles tel le opendir, readir. Les aguments suivants sont gérés par le programme:

* "l" format de grand listing
* "R" listing recursif
* "d" affiche uniquement les dossiers
* "r" recursif dans l'ordre inverse
* "t" tri dans l'ordre des dernières modifications



### Utilisation

Pour utiliser le MyLs, il faut tapper la commande suivante ./ls \[-lRdrt] \[FILE] où \[-lRdrt] sont les arguments entrés et \[FILE] le fichier cible.

Différentes syntaxes sont possibles:

```
∼/B-PSU-100> ./my_ls -l -t
...
∼/B-PSU-100> ./my_ls -lRt
...
∼/B-PSU-100> ./my_ls -lt -R -t
```
