#include<stdio.h>

int main(){
    int i, n ;
    int a = 0;
    printf("\t\t\t Enter the value of n: ");
    scanf("%d",&n);

    for(i = 2 ; i < n-1 ; i++){
        if(n%i == 0){
            a = 1;
            break;
        }
    }

    if(n == 1 ){
        printf(" One is neither prime nor composite.");
    }
    else if( n == 0){
        printf("\t\t\t It is a prime number!!!");
    }
    else{
        printf("\t\t\t It is a composite number!!!.");
    }
    return 0;
}