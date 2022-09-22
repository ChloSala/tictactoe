# TicTacToe Pseudocode
## Entrées
- table: list de 9 valeurs (0;1)

## Sorties
- gagnant: le gagnant de la partie (0, 1, null)

## Algorithmes
1. constante `solutions`: Tableau des 8 solutions (1 solution contient les 2 numéros des cases gagnantes d'une combinaison)
1. Pour chaque `solution` dans `solutions`
1. `nbr_match` = 0
   1. Pour i = 1 à 3
      1. SI `solution` à l'index `i` égal à 0
         1. `nbr_match` = `nbr_match` + 1
      1. SI `nbr_match` est égal à 3
         1. `gagnant` est 0
      1. SINON SI `nbr_match` est égal à 0
         1. `gagnant` est 1
1. Afficher `gagnant`