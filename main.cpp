/*
 * Labo: tictactoe
 * Release date: TODO
 * Project: A small implementation in C++ of the game TicTacToe
 * Authors: Chloé Salamin and Samuel Roland
 */

#include <iostream>
#include <string>

using namespace std;

// Get the winner of a given table
int getWinner(int table[]) {
  int nbMatch = 0;
  int solutions[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7},
                        {2, 5, 8}, {3, 6, 9}, {3, 5, 7}, {1, 5, 9}};

  for (int *solution : solutions) {
    nbMatch = 0;
    for (int i = 0; i < 3; i++) {
      if (table[solution[i] - 1] == 0) {
        nbMatch++;
      }
    }

    if (nbMatch == 3) {
      return 0;
    } else if (nbMatch == 0) {
      return 1;
    }
  }
  return 3;
}

void printDataLine(int lineIndex, int table[9]) {
  for (int i = 0; i < 3; i++) {
    cout << " " << (table[lineIndex * 3 + i] == 1 ? "X" : "O") << " ";
    if (i != 2) {
      cout << "|";
    }
  }
  cout << endl;
}

// Print an empty line with dashes and pipes
void printEmptyLine() { cout << "---|---|---" << endl; }

// Print a visual table in the console
void printTable(int table[9]) {
  // For the 3 lines
  for (int i = 0; i < 3; i++) {
    printDataLine(i, table);
    if (i != 2) {
      printEmptyLine();
    }
  }
}

int main() {
  //   int table[9] = {1, 1, 1, 0, 0, 0, 0, 0, 0}; // 1 is winner
  //   int table[9] = {1, 1, 0, 0, 0, 0, 0, 0, 0}; // 0 is winner
  int table[9] = {1, 0, 1, 1, 1, 0, 1, 0, 0}; // 1 is winner
  //   int table[9] = {1, 0, 1, 1, 1, 0, 0, 1, 0}; // no one is winner

  int winner = getWinner(table);

  cout << endl;
  printTable(table);
  cout << endl;
  cout << "The winner is " << (winner != 3 ? to_string(winner) : " no one")
       << endl;
}
