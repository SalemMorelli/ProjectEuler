/* Obtains the sum of all even numbers of the Fibinacci sequence that are below 4,000,000 */


#include <iostream>

using namespace std;

int main(){


    int num1 = 0;
    int num2 = 1;
    int next = 0;
    int sum = 0;

    cout<<num1<<endl;
    cout<<num2<<endl;
    while(next<4000000){


        next = num2 + num1;


        if(next % 2 == 0){
            sum = sum + next;
            cout<<sum<<endl;
        }
        num1 = num2;
        num2 = next;
    }
    return 0;
    }
