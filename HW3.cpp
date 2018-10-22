#include <iostream>
using namespace std;
int main(){

    int board[8][8]={0};
    int row, column = 0;
    board[0][0]=1;
    int solutioncounter=0;

NC: column++;
    if (column==8){
        solutioncounter++;
        goto print;}
    row=-1;
NR: row++;
    if (row==8) goto Backtrack;

for (int i=0; i<column;i++)
    if (board[row][i]==1) goto NR;

for (int i=1; (row-i)>=0&&(column-i)>=0; i++)
    if (board[row-i][column-i]==1)goto NR;

for (int i=1; (row+i)<=7&&(column-i)>=0; i++)
     if (board[row+i][column-i]==1)goto NR;

board[row][column]=1;
goto NC;

Backtrack:
column--;
if (column==-1) exit(0);
row=0;
while (board[row][column]!=1)row++;
board[row][column]=0;
goto NR;

print:
cout << "Solution Number " << solutioncounter << endl;
for (int i=0; i<8; i++){
    for (int j=0; j<8; j++){
    cout << board[i][j];
    }
    cout << endl;
} 
cout << endl;
goto Backtrack;

}