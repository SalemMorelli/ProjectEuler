/* Reference made to github: fredrikslattman (Thank you). Some tweaks were made. */
/* Obtaining the largest palindrome of the product of two 3 digit numbers */

#include <iostream>


using namespace std;

int Palindrome(unsigned long number);     //function declaration

int main(){

    unsigned int max = 0;

    unsigned long int product;

    for(unsigned int i = 100; i<=999; i++){
        for(unsigned int j= 100; j<=999; j++){

            product = i * j;

            if(Palindrome(product) && product > max){  //if the current palindrome found is greater than the previous one then update the max. 
                max = product;       //sets the last palindrome product to be the max
            }
        }
    }

    cout<<max<<" is the Largest Palindrome"<<endl;

    return 0;
}


/*Function that checks if a number is a palindrome. Returns the number if true */
int Palindrome(unsigned long some_number){

    unsigned int last_num;
    unsigned int product;
    int number = some_number;    //stores some_number so we can compare it later
    unsigned long int reversed = 0;

    do{
        last_num = n % 10;    //obtains the last digit of a number
        reversed = (reversed * 10) + last_num;   //adds this number to the nth position
        n = n/10;              //reduces the number until 0 also allows one move along the number 
    }
    while(n != 0);                              //setting the condition to stop at 0

    return number == reversed;    //returns the number once a palindrome is found

}
