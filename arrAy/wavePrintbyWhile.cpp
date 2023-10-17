#include<iostream>
using namespace std;

void input(int arr[][100],int row,int col){
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j<col ; j++){
            cin >> arr[i][j];
        }
    }
}
void wavePrint(int arr[][100],int row,int col){
    int i=0,j =0;
    while(j<col){

        if(j%2 == 0){

            while(i<row){
                cout <<arr[i][j]<<" ";
                i++;
            }
        }
        else{
            i = row-1;
            while(i>-1){
                cout <<arr[i][j]<<" ";
                i--;
            }
        }
            j++;
    }
}
int main(){
    cout << "give input for row and col"<<endl;
    int arr[100][100];
    int row,col;
    cin >> row >> col; 
    
    input(arr,row,col);
    wavePrint(arr,row,col);

    return 0;
}

// #include <iostream>
// using namespace std;

// void input(int arr[][100], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }

// void wavePrint(int arr[][100], int row, int col)
// {
//     int i = 0, j = 0;
//     while (j < col)
//     {
//         if (j % 2 == 0) // Check if column index is even
//         {
//             while (i < row)
//             {
//                 cout << arr[i][j] << " ";
//                 i++;
//             }
//         }
//         else
//         {
//             i = row - 1;
//             while (i >= 0)
//             {
//                 cout << arr[i][j] << " ";
//                 i--;
//             }
//         }
//         j++;
//     }
// }

// int main()
// {
//     cout << "Enter the number of rows and columns:" << endl;
//     int arr[100][100];
//     int row, col;
//     cin >> row >> col;

//     input(arr, row, col);
//     wavePrint(arr, row, col);

//     return 0;
// }
