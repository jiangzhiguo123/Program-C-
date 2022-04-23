#include<stdio.h>
void swap(int* pa,int* pb){
    int tmp=0;
    tmp=*pa;
    *pa=*pb;
    *pb=tmp;

}
int main(){
    int a=20;
    int b=10;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}