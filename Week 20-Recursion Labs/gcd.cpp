/*The greatest common divisor of integers x and y is the largest integer that evenly divides both x and y.
Write a recursive function named gcd that returns the greatest common divisor of x and y.
The gcd of x and y is defined recursively as follows: If y is equal to 0,
 then gcd(x,y) is x; otherwise gcd(x,y) is gcd(y,x%y) where % is remainder operator.*/
#include<iostream>
#include<string>
using std::cout;

int gcd(int x, int y){
    int gcd_v;

    if(y == 0)
        gcd_v = x;
    else
    {
        gcd_v = gcd(y, x % y);
    }

    return gcd_v;

}

// int main(){

//     cout << gcd(15,5);

// }