/* Finds a Pythagorean triplet whose sum is equal to 1000 */

#include<cmath>
#include<iostream>


using namespace std;



int main(){

    int a, b, c;

    for(int i = 1; i<1000; i++){
        a = i;
        for(int j = 1; j<1000; j++){
            b = j;
            for(int z = 1; z <1000; z++){
                c = z;
                if( a + b + c == 1000 && (pow(a,2)+ pow(b,2)==pow(c,2)) && (a<b) && (b<c)){
                    cout<<a<<","<<b<<","<<c<<endl;
                    cout<<a*b*c<<" the product of these numbers is this.";
                }

            }
        }

    }
    return 0;
}
