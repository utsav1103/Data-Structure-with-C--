//printing a 2d array

// in C++

// #include <iostream>
// using namespace std;

// main(){
//     int arr[4][2] = {
//         {10,11},
//         {20, 21},
//         {30 , 31},
//         {40, 41},
//     };
//     int i, j;
//     cout<<"Printing a 2D Array:/n";
//     for(i=0; i<4 ; i++)
//     {
//         for(j=0;j<2;j++)
//         {
//             cout<<" "<<arr[i][j];
//         }cout<<endl;
//     }
// }

// IN C language

#include <stdio.h>

int main()
{
    int arr[4][2] = {
        {10, 11},
        {20, 21},
        {30, 31},
        {40, 41}};

    int i, j;

    printf("Printing a 2D Array:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}