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

int main() {
  //   int table[9] = {1, 1, 1, 0, 0, 0, 0, 0, 0}; // 1 is winner
  //   int table[9] = {1, 1, 0, 0, 0, 0, 0, 0, 0}; // 0 is winner
  //   int table[9] = {1, 0, 1, 1, 1, 0, 1, 0, 0}; // 1 is winner
  int table[9] = {1, 0, 1, 1, 1, 0, 0, 1, 0}; // no one is winner

  cout << getWinner(table) << endl;
}
