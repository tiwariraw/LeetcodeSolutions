#include <iostream>
using namespace std;
int main()
{
int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
cout << "Enter the rows and columns for matrix a: ";
cin >> r1 >> c1;
// Storing elements of first matrix.
cout <<"Enter the elements of matrix a:" << endl;
for(i = 0; i < r1; ++i)
for(j = 0; j < c1; ++j)
{
cin >> a[i][j];
}

cout << "Enter the rows and columns for matrix b: ";
cin >> r2 >> c2;

// Storing elements of second matrix.
cout << endl << "Enter elements of matrix b:" << endl;
for(i = 0; i < r2; ++i)
for(j = 0; j < c2; ++j)
{
cin >> b[i][j];
}

if (c1!=r2)
{
cout<<"Can't be multiplied";
return 0;
}

// Multiplying matrix a and b and storing in array mult.
for(i = 0; i < r1; ++i)
{
for(j = 0; j < c2; ++j)
{
mult[i][j]=0;
for(k = 0; k < c1; ++k)
{
mult[i][j] += a[i][k] * b[k][j];
}
}
}
// Displaying the multiplication of two matrix.
cout <<"Resultant Matrix: "<<endl;
for(i = 0; i < r1; ++i)
{
for(j = 0; j < c2; ++j)
{
cout<<mult[i][j]<<"  ";
}
cout << endl;
}
return 0;
}