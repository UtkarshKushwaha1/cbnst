//NEWTON - RAMPSON METHOD
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double f(double b){
    
    return pow(b,3)-(4*b)-9;
}
double df(double x){
    
    return 3*x*x-4;
}

int main(){
    float nr,c,d;
    int t,b;
            
    printf("Enter Starting Point:");

    scanf("%f",&c);

    printf("Enter decimal points to match:");
    scanf("%d",&b);

    d=pow(10,-b-1); 

    printf("Enter number of iterations:");
    scanf("%d",&t);

    for(int i=0;i<t;i++){

            nr=c-(f(c)/df(c));

            if(nr==0)
            {
                printf("%f is the root!",c);
                exit(0);
            }
            
            printf("The value of root on iteration %d:  %.*f\n",i+1,b,c);

            
            if (fabs(nr-c)<=d)
                {   printf("Final root found at iteration %d:  %.*f",i+1,b,c);
                    exit(0);
                }

            if (i==t-1)
            {
                printf("Ended at %d iteration: %.*f",i+1,b,c);
            }
            c=nr;

    }

    return 0;
    
}
