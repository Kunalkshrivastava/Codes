#include <iostream>
using namespace std;

bool canPlace(int board[9][9], int num, int row, int col){

    for(int i=0; i< 9; i++){
        if(board[row][i] == num || board[i][col] == num)
            return false;
    }

    int rowStart = (row/3)*3;//row - row%3;
    int colStart = (col/3)*3;
    for(int i= rowStart ; i< rowStart + 3 ; i++){
        for(int j= colStart ; j< colStart + 3 ; j++){
            if(board[i][j] == num)
                return false;
        }
    }

    return true;
}

bool canSolve(int board[][9], int row, int col){

    if(col == 9)
       return canSolve(board,row+1,0);
    if(row == 9)
        return true;

    if(board[row][col] == 0){

        for(int num=1; num<= 9; num++){
            if(canPlace(board,num,row,col)){
                board[row][col] = num;
                if(canSolve(board,row,col+1))
                    return true;
                //board[row][col] = 0;
            }
            board[row][col] = 0;
        }
        return false;
    }
    else{
        return canSolve(board,row,col+1);
    }
}

int main() {
    int n;
    cin>>n;
    int board[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>board[i][j];
        }
    }

    if(canSolve(board,0,0)){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"-1";
}
