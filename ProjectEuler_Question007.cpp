/* Obtains the 10001st prime number. Project Euler question 7 */

#include <iostream>


using namespace std;


int main(){

    int counter;
    int count;
    int j = 0;
    int i = 2;

    while( i<=1000000){   //starts at 2 because 1 is a special prime so no need to look for it
        count = 0;    //resets the count to zero everytime you move on to an new number
        
        for(j = 1; j<=i;j++){      
            if(i%j == 0){
                count++;
            }

        }
        if(count == 2){
         // cout<<i<<" Prime number"<<endl;
            counter++;
            if(counter == 10001){    //when it is the 10001st prime....
                cout<<i<< " This is the 10001st prime number"<<endl;
                return 0;
            }
        }
      /*  else{
           cout<<i<<" number not a prime number"<<endl;
        } */

        ++i;
    }
    return 0;
}


