/* Finds all the prime factors of the number specified and ends with the largest */



#include <iostream>

using namespace std;

int main(){

    int count = 0;
    long int number = 60085147543;    //number given by project Euler
    int i;

    for(i = 2; i*i<number; i++){
        while(number%i == 0){
            cout<<i<<" Number is a factor"<<endl;

            if(number>i) 
                number = number/i;        //reduces the number everytime
        }
    }
    cout<<number <<" Largest prime factor"<<endl;


    return 0;
}
