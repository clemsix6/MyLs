# MyLS

### **Introduction**

Le MyLs est un projet qui consiste à re coder la commande Linux ls. Cette commande permet de lister toutes les informations à propos d'un fichier ou d'un dossier, elle intègre de nombreuses fonctionnalités très utiles comme la récursivité ou encore le format d'affichage.



### Fonctionement

Pour lister tous les fichiers dans un dossier donné, le MyLs utilise des fonctions système utiles tel l'opendir, readir. Les arguments suivants sont gérés par le programme:

* "l" format de grand listing
* "R" listing recursif
* "d" affiche uniquement les dossiers
* "r" récursif dans l'ordre inverse
* "t" tri dans l'ordre des dernières modifications



### Utilisation

Pour utiliser le MyLs, il faut taper la commande suivante ./ls \[-lRdrt] \[FILE] où \[-lRdrt] sont les arguments entrés et \[FILE] le fichier cible, ce dernier est facultatif.

Différentes syntaxes sont possibles:

```
∼/B-PSU-100> ./my_ls -l -t
...
∼/B-PSU-100> ./my_ls -lRt
...
∼/B-PSU-100> ./my_ls -lt -R -t
```

#### Exemple d'utilisation

Pour simplement lister tous les fichiers dans le dossier actuel:

```bash
clement@clement-neon:~/Desktop$ ./my_ls
 android-studio_android-studio.desktop   binance.desktop   clion_clion.desktop   discord_discord.desktop   exodus.desktop   goland_goland.desktop  'IntelliJ IDEA'   Notion.desktop   PyCharm   Rider   steam.desktop   tradingview_tradingview.desktop   webstorm_webstorm.desktop
```

Pour lister tous les fichiers dans le dossier actuel avec un format d'affichage plus avancé:

```
clement@clement-neon:~/Desktop$ ./my_ls -l
total 32
lrwxrwxrwx 1 clement clement   73 déc.  23 13:59  android-studio_android-studio.desktop -> /var/lib/snapd/desktop/applications/android-studio_android-studio.desktop
lrwxrwxrwx 1 clement clement   39 janv. 27 16:18  binance.desktop -> /usr/share/applications/binance.desktop
lrwxrwxrwx 1 clement clement   55 déc.  11  2021  clion_clion.desktop -> /var/lib/snapd/desktop/applications/clion_clion.desktop
lrwxrwxrwx 1 clement clement   59 janv.  7 19:10  discord_discord.desktop -> /var/lib/snapd/desktop/applications/discord_discord.desktop
lrwxrwxrwx 1 clement clement   38 févr. 16 11:51  exodus.desktop -> /usr/share/applications/exodus.desktop
lrwxrwxrwx 1 clement clement   57 janv.  9 10:47  goland_goland.desktop -> /var/lib/snapd/desktop/applications/goland_goland.desktop
lrwxrwxrwx 1 clement clement   89 févr.  9 18:23 'IntelliJ IDEA' -> /var/lib/snapd/desktop/applications/intellij-idea-ultimate_intellij-idea-ultimate.desktop
lrwxrwxrwx 1 clement clement   67 juin  13 13:36  Notion.desktop -> /var/lib/snapd/desktop/applications/notion-snap_notion-snap.desktop
lrwxrwxrwx 1 clement clement   85 déc.  12  2021  PyCharm -> /var/lib/snapd/desktop/applications/pycharm-professional_pycharm-professional.desktop
lrwxrwxrwx 1 clement clement   55 déc.  11  2021  Rider -> /var/lib/snapd/desktop/applications/rider_rider.desktop
-rwx--x--x 1 clement clement 7473 févr. 28 19:04  steam.desktop
lrwxrwxrwx 1 clement clement   67 déc.  17  2021  tradingview_tradingview.desktop -> /var/lib/snapd/desktop/applications/tradingview_tradingview.desktop
lrwxrwxrwx 1 clement clement   61 mai   22 17:01  webstorm_webstorm.desktop -> /var/lib/snapd/desktop/applications/webstorm_webstorm.desktop
```

Où encore lister les fichiers dans un dossier donné:

```
clement@clement-neon:~/Desktop$ ./my_ls /usr
bin  games  include  lib  lib32  lib64  libexec  libx32  local  sbin  share  src
```
