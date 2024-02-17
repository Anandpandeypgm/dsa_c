#include<stdio.h>
#include<conio.h>
void main(){
    int x,n,a[10];
    printf("enter the element to be search :");
    scanf("%d", &x);
    printf("enter the no of element:");
    scanf("%d", &n);

    printf("enter the elements \n");
    for(int i=0;i<n; i++){
    scanf("%d",&a[i]);

    }
    for(int i=1 ;i<=n; i++){
        if(a[i]==x){
            printf("element found at the index %d",i);
            break;
        }

    }

}