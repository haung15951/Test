#include<stdio.h>
    int gcd(int,int);
    int main(){
        int e,f,c;
        printf("Please enter two numbers:");
        scanf("%d%d",&e,&f);
        c = gcd(e,f);
        printf("%d",c);
    return 0;
    }
    int gcd(int a,int b){
            unsigned int r = a % b;
            if (r==0)
                return b;
            else
                return gcd(b,r);

        }
