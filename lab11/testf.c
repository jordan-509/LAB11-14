#include <stdio.h>
#include <stdlib.h>
#include "var.h"
#include "min1.h"
#include "max1.h"
int main()
{

int n =10 ;
int t [10] = {2,5,7,2,9,5,3,4,7,8};
float  var1; 

int maxi; 

int min1;

var(t,n,&var1);

var(t,n,&var1);
max1(t,n,&maxi);
mini(t,n,&min1);




    printf("%f \n %d \n %d \n " , var1 ,maxi,min1);
    return 0;
}

