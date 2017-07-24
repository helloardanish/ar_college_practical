#include<stdio.h>
int main(){

    int a[100],i,n,m,c,l,u;
    //what is the size of the array or the no of elements in array
    printf("Enter the size of an array: ");
    //storing the entered value in n variable
    scanf("%d",&n);
    //insert the number in array list
    printf("Enter the elements of the array: " );
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    //enter the number you want to search
    printf("Enter the number to be search: ");
    scanf("%d",&m);
    l=0,u=n-1;
    c=binary(a,n,m,l,u);
    if(c==0)
         printf("Number is not found.");
    else
         printf("Number is found.");

    return 0;
 }
//using mathematical logic binary search
int binary(int a[],int n,int m,int l,int u){

     int mid,c=0;

     if(l<=u){
          mid=(l+u)/2;
          if(m==a[mid]){
              c=1;
          }
          else if(m<a[mid]){
              return binary(a,n,m,l,mid-1);
          }
          else
              return binary(a,n,m,mid+1,u);
     }
     else
       return c;
}
