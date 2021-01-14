
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void mini(int t[], int n , int *mini){


int i;

*mini = t[0] ;

for (i=1 ; i < n ; i++ ) {
    if (t[i] < *mini ) {
        *mini=t[i];

        }

    }



}
