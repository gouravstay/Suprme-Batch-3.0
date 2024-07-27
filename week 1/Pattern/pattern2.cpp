#include<iostream>
using namespace std;


int main(){
//Half pyramid
int n;
cout << "Enter the value of N: ";
cin>> n;

   // outer loop
for (int row= 0; row < n; row++)
{
   //inner loop
   for (int col = 0; col<=row; col++)
   {
      cout << "* ";
   }
   cout << endl;
}



















// Inverted half pyramid   
// int n;
// cout << "Enter the value: ";
// cin >> n;

// //outer loop
// for (int row=0; row<n; row++)
// {
//     for (int col=0; col<n-row; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }


// Sqare
// int n;
// cout << "Enter the Square value: ";
// cin >> n;
// // Outer loop
// for (int row = 0; row < n; row++)
// {   //inner loop
//     for (int  col=0; col<n; col++)
//     {
//         cout << "* ";
//     }
//     cout << endl;
// }
















return 0;
}