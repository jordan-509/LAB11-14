#include <stdio.h>


void var(int t[],int n ,float *var1){
int i;
float S=0.0;
float S1;
float  M;

*var1 = 0 ;

for(i=0;i<n;i++){
	

	S= S + t[i];
        //printf("%f \n" ,S);
	}

M=(S/ n) ; 
//printf("%f \n " ,M);
for(i=0;i<n;i++){

	S1=S1+((t[i]-M)*(t[i]-M));
}

*var1 = S1/n;


}
