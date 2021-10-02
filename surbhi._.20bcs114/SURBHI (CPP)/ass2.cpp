#include <iostream>

#include <bits/stdc++.h>

#define endl "\n";

using namespace std;

class Matrix{

int arr[3][3];

public:

void getdata();

void display();

friend Matrix Multiplication(Matrix, Matrix);

};

void Matrix::getdata() {

cout << "Enter the elements in 3 X 3 matrix:" << endl;

for(int i = 0; i < 3; i++)

for(int j = 0; j < 3; j++)

cin >> arr[i][j];

}

void Matrix::display() {

for(int i = 0; i < 3; i++)

{

for(int j = 0; j < 3; j++)

{


cout << arr[i][j] << " ";

}

cout << endl;

}

}

Matrix Multiplication(Matrix a, Matrix b)

{

Matrix r;

for(int i = 0; i < 3; i++)

{

for(int j = 0; j < 3; j++)

{

r.arr[i][j] = 0;

for(int k = 0; k < 3; k++)

{

r.arr[i][j] += (a.arr[i][k] * b.arr[k][j]);

}

}

}

return r;

}

int main()

{

Matrix A;

A.getdata();

Matrix B;

B.getdata();

Matrix C;

cout << endl;

cout << "Resultant matrix is:" << endl;

C = Multiplication(A, B);

C.display();

return 0;

}


