/* Obtains the difference between the sum of the squares and the square of the sum of the first 100 numbers */


#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int number;
    int sum = 0;
    int square;
    int total = 0;
    int difference;
    int square_total;

    for(int i = 1; i<=100; i++){   //another way would be to have a i*i instead of pow

        square = pow(i, 2);   //pow(base, power)
        total = total + i;
        sum = sum + square;
    }

    square_total = pow(total, 2);

    difference = square_total - sum;

    cout<<difference<<" this is the difference"<<endl;

    return 0;

}
