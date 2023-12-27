#include <iostream>
#include <vector>
#include<string>
using namespace std;


bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    // Check karna chahte hain ki kya current cell cell[row][col] par queen rakh sakta hoon

    int i = row;
    int j = col;

    // check row
    while (j >= 0){
        if (board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // Check upper left diagonal

    i = row;
    j = col;
    while (i >= 0 && j >= 0)  {
        if (board[i][j] == 'Q') {
            return false;
        }
        i--;
        j--;
    }

    // Check bottom left diagonal
 i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    // Kahi par nahi mili iska matlab position safe hain matlab return kardo true
    return true;
}

void printSolution(vector<vector<char>>& board, int n){
    for(int i = 0;i<n;i++){
        for(int  j =0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}


void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col>=n) {
        printSolution(board, n);
        return;
    }

    // 1 case solve karna hain baaki recursion sambhal lega

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do

            board[row][col] = 'Q';
            // Recursion solution laaega
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = '-';
        }
    }
}




int main()
{

    int n = 9;

    vector<vector<char>> board(n, vector<char>(n, '-'));

    int col = 0;
    // 0->empty cell
    // 1-> queen at the cell
    solve(board, col, n);

    return 0;
}