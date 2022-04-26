#include <stdio.h>
void init(int arr[],int sz){
    for (int i =0;i<sz;i++){
        arr[i]=0;
    }
}
void print(int arr[],int sz){
    for (int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
}
void reserve(int arr[],int sz){
    int left=0;
    int right=sz-1;
    while(right>left){
        int tmp=arr[left];
        arr[left]=arr[right];
        arr[right]=tmp;
        left++;
        right--;
    }
}
int main(){
    int arr[]={0,1,2,3,4,5,6};
    int sz=sizeof(arr)/sizeof(arr[0]);
    reserve(arr,sz);
    print(arr,sz);
    printf("\n");
    init(arr,sz);
    print(arr,sz);
    return 0;
}