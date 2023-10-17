#include <bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][3], int row, int col)
{
    for (int j = 0; j < col; j++)
    {

        if (j & 1)
        {

            for (int i = row - 1; i > -1; i--)
            {
                cout << arr[i][j] <<" ";
            }
        }
        else
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][j] <<" ";
            }
        }
    }
}



int main()
{
    int arr[3][3];
    // taking input
    cout << "give input for 2d array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    wavePrint(arr,3,3);

    return 0;
}

// void wavePrint(int arr[][3],int ROWS,int COLS) {
//     for (int col = 0; col < COLS; col++) {
//         // Forward direction in even columns
//         if (col % 2 == 0) {
//             for (int row = 0; row < ROWS; row++) {
//                 cout << arr[row][col] << " ";
//             }
//         } 
//         // Backward direction in odd columns
//         else {
//             for (int row = ROWS - 1; row >= 0; row--) {
//                 cout << arr[row][col] << " ";
//             }
//         }
//     }
// }