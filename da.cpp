#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int i, j;
  char A[10][10] = {{'1', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                    {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {'7', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                    {'8', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                    {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      cout << A[i][j];
      cout << "  ";
    }
    cout << ("\n");
  }
}