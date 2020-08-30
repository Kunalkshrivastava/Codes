#include <iostream>
using namespace std;

bool findPath(int maze[][10], int n, int x, int y, int path[][10]){

    if(x<0 || x >= n || y < 0 || y >= n)
        return false;

    if(x == n-1 && y == n-1)
        return true;

    if(maze[x][y] == 0 || path[x][y] == 1)
        return false;

    path[x][y] = 1;
    if(findPath(maze,n,x,y+1,path)){
        //path[x][y] = 0;
        return true;
    }
    if(findPath(maze,n,x,y-1,path)){
       // path[x][y] = 0;
        return true;
    }
    if(findPath(maze,n,x-11,y,path)){
       // path[x][y] = 0;
        return true;
    }
    if(findPath(maze,n,x+1,y,path)){
        //path[x][y] = 0;
        return true;
    }

    path[x][y] = 0;
    
    return false;

}

bool findPath(int maze[][10], int n){
    int path[10][10] = {0};
    return findPath(maze,n,0,0,path);
}

int main() {
    int n=3;
    int maze[][10] = {{1,1,0},{1,1,0},{0,1,1}};

    cout<<findPath(maze,n);
}
