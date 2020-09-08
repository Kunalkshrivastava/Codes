#include <iostream>
using namespace std;

bool isRowSafe(int board[][9], int row, int num){
    for(int i=0; i<4 ; i++){
        if(board[row][i] == num)
            return false;
    }
    return true;
}

bool isColSafe(int board[][9], int col, int num){
    for(int i=0; i<4 ; i++){
        if(board[i][col] == num)
            return false;
    }
    return true;
}

bool isBoxSafe(int board[][9], int row, int col, int num){
    int rowStart = row - row%3; //because 3x3 boxes
    int colStart = col - col%3;
    for(int i= rowStart; i< rowStart + 3; i++){
        for(int j= colStart; j< colStart + 3; j++){
            if(board[i][j] == num)
                return false;
        }
    }
    return true;
}

bool canPlaceNum(int board[][9], int row, int col, int num){

    if(!isRowSafe(board,row,num))
        return false;
    if(!isColSafe(board,col,num))
        return false;
    if(!isBoxSafe(board,row,col,num))
        return false;
    
    return true;
}

bool sodukoSolver(int board[][9]){

    int row = -1;
    int col = -1;
    bool isEmpty = false;

    for(int i = 0; i<9; i++){
        for(int j = 0; j<9; j++){
            if(board[i][j] == 0){
                isEmpty = true;
                row = i;
                col = j;
                break;
            }
        }
        if(isEmpty)
            break;
    }

    if(!isEmpty){
        return true;
    }

    for(int num = 1; num <= 9; num++){
        if(canPlaceNum(board, row, col, num)){
            board[row][col] = num;
            if(sodukoSolver(board)){
                return true;
            }
            board[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int n;
    cin>>n;
    int board[9][9];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>board[i][j];
        }
    }
    if(sodukoSolver(board)){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    }

}
