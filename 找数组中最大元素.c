#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int max=arr[0];
    for(int i=2;i<sizeof(arr)/sizeof(arr[0]);i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;
}