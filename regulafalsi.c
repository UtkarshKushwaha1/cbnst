#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float f(float a){
    float r;
    r=(a*a*a)-(a)-10;
    return r;
}

int main(){
    char ch;
    float a,b,c,temp=0,be;
    int t,i,d;
   
    do
    {
            
            A: printf("Enter limits a and b:");

            scanf("%f %f",&a,&b);


            if(f(a)*f(b)>0)
            {
                printf("Try again!\n");

                goto A;
            }

            else if(f(a)*f(b)==0)
            {
                if(f(a)==0)
                {
                    printf("%f is the root!\n",a);
                    exit(0);
                }

                else    
                    {
                        printf("%f is the root!\n",b);
                        exit(0);
                    }
            }

            else if(f(a)*f(b)<0)
            {
                printf("Right Intervals!\n");
            }

            printf("Want to enter again? (y,n):");
            fflush(stdin);
            scanf("%c",&ch);

    } while(ch == 'y'||ch=='Y');


    printf("Enter decimal points to match:");
    scanf("%d",&d);

    be=pow(10,-d-1);

    printf("Enter number of iterations:");
    scanf("%d",&t);

    for(i=0;i<t;i++){

        c=((a*f(b))-(b*f(a)))/(f(b)-f(a));

            if(c==0)
            {
                printf("%f is the root!",c);
                exit(0);
            }
            
            printf("The value of root on iteration %d:%.*f\n",i+1,d,c);

            
            if (fabs(c-temp)<=be)
                {   printf("\nFinal root found at iteration %d: %.*f",i+1,d,c);
                    exit(0);
                }

            if (i==t-1)
            {
                printf("Ended at %d iteration: %.*f",i+1,d,c);
            }
                
             if(f(a)*f(c)<0)
                b=c;
            else
                a=c;
            
            temp=c;

    }

    return 0;
    
}