#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf ("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=0;j<(n-i);j++) printf(" ");
        for (int j=0;j<((2*i)-1);j++) printf("*");
        printf("\n");
    }
    int i=n-1;
    while(i>0){
        for (int j=0;j<(n-i);j++) printf(" ");
        for (int j=0;j<((2*i)-1);j++) printf("*");
        printf("\n");
        i-=1;
    }
    return 0;
}