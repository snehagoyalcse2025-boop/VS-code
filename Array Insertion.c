#include<stdio.h>
int main(){
    int arr[100],pos,i,ele,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++){   
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert an element:");
    scanf("%d",&pos);
    if(pos>n+1 || pos<=0){
        printf("Invalid position! Please enter a position between 1 and %d\n", n+1);
    } else {
        printf("Enter the element to be inserted:");
        scanf("%d",&ele);
        for(i=n;i>=pos-1;i--){
            arr[i]=arr[i-1];
        }
        arr[pos-1]=ele;
        n++;
        printf("Array after insertion:\n");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
}