#include <iostream>
#include <vector>
#include<string>
#include<unordered_map>
using namespace std;

unordered_map<int,bool>rowcheck;
unordered_map<int,bool>upperleftdiagonalcheck;
unordered_map<int,bool>lowerleftdiagonalcheck;





bool isSafe(int row, int col, vector<vector<char>> &board, int n){
    // Check karna chahte hain ki kya current cell cell[row][col] par queen rakh sakta hoon

//     int i = row;
//     int j = col;

//     // check row
//     while (j >= 0){
//         if (board[i][j] == 'Q'){
//             return false;
//         }
//         j--;
//     }

//     // Check upper left diagonal

//     i = row;
//     j = col;
//     while (i >= 0 && j >= 0)  {
//         if (board[i][j] == 'Q') {
//             return false;
//         }
//         i--;
//         j--;
//     }

//     // Check bottom left diagonal
//  i = row;
//     j = col;
//     while (i < n && j >= 0)
//     {
//         if (board[i][j] == 'Q')
//         {
//             return false;
//         }
//         i++;
//         j--;
//     }

    // Kahi par nahi mili iska matlab position safe hain matlab return kardo true

 if(rowcheck[row] == true){
    return false;
 }

if(   upperleftdiagonalcheck[n-1+col-row] == true){
    return false;
}

if(lowerleftdiagonalcheck[row+col] == true){
    return false;
}
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
            rowcheck[row] = true;
            upperleftdiagonalcheck[n-1+col-row] = true;
            lowerleftdiagonalcheck[row+col] = true;
            // Recursion solution laaega
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = '-';
            rowcheck[row] = false;
            upperleftdiagonalcheck[n-1+col-row] = false;
            lowerleftdiagonalcheck[row+col] = false;
        }
    }
}




int main()
{

    int n = 4;

    vector<vector<char>> board(n, vector<char>(n, '-'));

    int col = 0;
    // 0->empty cell
    // 1-> queen at the cell
    solve(board, col, n);

    return 0;
}