/* Obtains the smallest positive number that is evenly divisible by all the numbers between 1 - 20. Answer is 232792560. Note: This is obviously not the most efficient way to do it.*/


#include <iostream>

using namespace std;


int main(){

    int number = 1;

    while(number>0){

        if(number % 11 == 0 && number % 12 == 0 &&  number % 13 == 0 && number % 14 == 0 &&number % 15 == 0 &&  number % 16 == 0 && number % 17 == 0 && 
                number % 18 == 0 && 
                number % 19 == 0 &&  number % 20 == 0 ){


            cout<<number<<" is the smallest number divisible by numbers between 1 - 20"<<endl;
            return 0;
        }

        ++number;
    }
}


