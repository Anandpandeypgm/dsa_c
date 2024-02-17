#include<stdio.h>
#include<conio.h>
void main(){
      int x,n,a[10],low,high,mid;
    printf("enter the element to be search :");
    scanf("%d", &x);
    printf("enter the no of element:");
    scanf("%d", &n);

  

    printf("enter the elements \n");
    for(int i=0;i<n; i++){
    scanf("%d",&a[i]);
    }

      low=0;
    high=n-1;

    while (low<=high){
        mid=(low+high)/2;
        
        if(x==a[mid]){
            printf("element is found at the index %d",mid);
            break;

        } else if(x< a[mid]){
            high=mid-1;
            }
            else{
              low= mid+1;

            }
          
    }
}
