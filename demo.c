#include <stdio.h>
#include <conio.h>


void main()
{
    int a[5] = {0,2,1,2,0};
    int i,j,t;
    int n=5;
    
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if (a[i]>a[j]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
    printf("Accending order is \n");
    
    for(i=0;i<=n;i++){
        printf("%d",a[i]);
    }
}
