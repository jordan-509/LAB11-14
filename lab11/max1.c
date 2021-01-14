#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void max1(int t[], int n , int *maxi){


int i;

*maxi = t[0] ;

for (i=1 ; i < n ; i++ ) {
    if (t[i] > *maxi ) {
        *maxi=t[i];

        }

    }



}
