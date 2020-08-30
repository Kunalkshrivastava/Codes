#include <iostream>
using namespace std;
void findPath(int maze[][10], int n, int x, int y, int path[][10]){

    if(x<0 || x >= n || y < 0 || y >= n)
        return;

    if(x == n-1 && y == n-1){
        path[x][y] = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j< n; j++){
                cout<<path[i][j]<<" ";
            }cout<<endl;
        }
        cout<<endl;
        return;
    }

    if(maze[x][y] == 0 || path[x][y] == 1)
        return;

    path[x][y] = 1;
    findPath(maze,n,x,y+1,path);
    findPath(maze,n,x,y-1,path);
    findPath(maze,n,x-11,y,path);
    findPath(maze,n,x+1,y,path);

    path[x][y] = 0;
    
    return;

}

void findPath(int maze[][10], int n){
    int path[10][10] = {0};
    return findPath(maze,n,0,0,path);
}

int main() {
    int n=3;
    int maze[][10] = {{1,1,0},{1,1,0},{0,1,1}};

    findPath(maze,n);
}
