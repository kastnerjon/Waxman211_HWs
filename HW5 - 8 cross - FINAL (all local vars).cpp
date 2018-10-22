#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void nextNum (int &square, int b[]);
bool test (int square, int b[]);
void BT (int &square, int b[]);
void print (int square, int b[]);

void nextSquare (int &square, int b[]){
  square++;
  if (square == 8) print(square, b);
  b[square] = 0;
  nextNum(square, b);
}

void nextNum (int &square, int b[]){
  b[square]++;
    if (b[square]==9) BT(square, b);
  if (test(square, b)==false) nextNum(square, b);
  nextSquare(square, b);
}


bool test (int square, int b[]){

int adj[8][5] = {{-1}, {0,-1}, {0,-1}, {0, 1, 2, -1}, {0, 1,3,-1}, {1, 4, -1}, {2, 3, 4, -1}, {3, 4, 5, 6, -1}};

  for (int i=0; i<square; i++){
    if (b[square] == b[i]) return false;
  }
  for (int i=0; adj[square][i]!=-1; i++){
    if (abs(b[square]-b[adj[square][i]])==1) return false;
  }
return true;
}


void BT (int &square, int b[]){
  square--;
  if (square == -1) exit(0);
  nextNum(square, b);
}

void print (int square, int b[]){
  static int counter = 0;
  counter++;
  cout << "\nSolution " << counter << endl;
  cout << "  " << b[0] << " " << b[1] << endl;
  cout << b[2] << " " << b[3] << " " << b[4] << " " << b[5] << endl;
  cout << "  " << b[6] << " " << b[7] << "\n\n";

  BT(square, b);
}

int main(){
int b[8], square=0;
b[0]=1;
nextSquare (square, b);

}
