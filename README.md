# multinodeDSE
Le présent projet contient des dossiers nommés Algo pour le modèle d'algorithme, Archi pour le modèle d'architecture, Scénarios pour les paramètres et les contraintes du prototypage rapide, Code pour le code généré, Algo/generated pour les informations intermédiaires exportées, et Workflows pour les différents workflows de prototypage rapide disponibles.

## 1 Run node_partitioner.workflow
La première étape du processus d’automatisation est d'exécuter le workflow node_partitioner qui reçoit en entré 
	le graphe d’entré “genuine” 
	et le jeu de node 
Ces deux fichiers sont renseignés dans le scénario top_init.
Il s’agit donc d'exécuter le workflow sur le scénario susmentionné: run workflow > scenario..
et en sortie génère 
	des sous graphes équilibrés associés à un node
	des codes spécifiants les règles de lancement des threads par node
	le top graph dont le comportement des acteurs est le code nouvellement créé
	et le fichier main qui contient les information de synchronisation MPI


## 2 Run thread_partitioner.workflow
Une fois les sous graphe généré on peut effectuer la codegen classique sur chacun d’eux, a laquelle on ajoute l’outil de clustering scape en amont.
chaque sub est associé à un node dans le scénario du même nom:  run workflow > scenario..
chaque exécution du workflow va générer
	des fichiers cores contenants  les informations de lancement des calculs attribués au coeur en question
	des fichiers extras pour les communications,le barrieres…
	un gant à chaque fois renseignant la latence par node par exemple. Ces infos sont à renseigner dans le scénario top pour mettre à jour le temps des acteurs top.

## 3 Run sim_formater.workflow
Une fois les timing du top renseigné on peut lancer un workflow qui permettra de formatterles donnée pour simgrid.
Le workflow recoit le top graph et le top archi sous forme de scenario et génère en sorti un diagram de gantt.
Simgrid peut donc effectuer sa simulation sur le top graph avec le diagram de gantt qui lui renvoie les temps des acteurs.
Et toujours:  run workflow > scenario..

## 4 Run thread_readjustment.workflow
Si SimGrid renvoie comme info des répartitions très déséquilibrées alors on peut lancer un workflow de réajustement.
Qui reçoit comme à l’initiale le scénario d’origine et les informations de répartition sous forme de fichier csv.
Nouvelle génération implique un nouveau lancement du scénario thread_partitioner pour générer les fichier mis à jour pour chaque core.

