#include "primenum.h"
/*
 Calculates whether the given number is prime or not
 bool: used show the result in TRUE or FALSE state
*/
bool isprime(int n){
 if(n<=1)
 {
     return false;
 }
 for(int i=2;i<n/2;i++)
 {
     if(n%i==0)
     {
         return false;
     }
 }
 return true;
}

