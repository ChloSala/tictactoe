#include <iostream>
#include <string>

using namespace std;

int getWinner(int table[]) {
  int nbMatch = 0;
  int solutions[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7},
                        {2, 5, 8}, {3, 6, 9}, {3, 5, 7}, {1, 5, 9}};

  for (int j = 0; j < sizeof(solutions); j++) {
    nbMatch = 0;
    for (int i = 0; i < 3; i++) {
      if (table[solutions[j][i] - 1] == 0) {
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
  int table[9] = {1, 1, 1, 0, 0, 0, 0, 0, 0};

  cout << getWinner(table) << endl;
}
