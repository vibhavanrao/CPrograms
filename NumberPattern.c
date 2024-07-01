#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int i=n-1;
    while (i>0){
        int x=n;
        while(x>i){
            printf("%d ",x);
            x-=1;
        }
        x+=1;
        for (int j=0;j<((2*(x-1)-1));j++){
            printf("%d ",x);
        }
        while(x<n){
            printf("%d ",x);
            x+=1;
        }
        printf("%d ",x);
        printf("\n");
        i-=1;
    }
    i=n;
    while(i>0){
        printf("%d ",i);
        i-=1;
    }
    i=2;
    while (i<n){
        printf("%d ",i);
        i+=1;
    }
    if (n!=1)
        printf("%d",i);
    printf("\n");
    i=1;
    while (i<(n)){
        int x=n;
        while(x>i){
            printf("%d ",x);
            x-=1;
        }
        x+=1;
        for (int j=0;j<((2*(x-1)-1));j++){
            printf("%d ",x);
        }
        while(x<n){
            printf("%d ",x);
            x+=1;
        }
        printf("%d ",x);
        printf("\n");
        i+=1;
    }
    return 0;
}