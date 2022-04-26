#include <stdio.h>
void bubble_sort(int arr[],int sz){
    for(int i=0;i<sz-1;i++){//第一个for循环确定趟数
        for(int j=0;j<sz-1-i;j++){//第二个for循环写内容
            if (arr[j]>arr[j+1]){
            int tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= tmp;
            }
        }
    }
}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    for(int m=0;m<10;m++){
        printf("%d ",arr[m]);
    }
    return 0;
}