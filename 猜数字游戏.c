#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu(){
    printf("*******************************");
    printf("***     1.play   0.exit     ***");
    printf("*******************************");
}
void game(){
    int ret =0;
    int guess=0;
    ret=rand()%100+1;//rand是一个内置函数 生存一个随机数，但是需要设置一个随机起点；所以再调用一个time内置函数 通过时间戳来定义随机起点。
    while (1)
    {
        printf("请猜数字：");
        scanf("%d",&guess);
        if (guess>ret)
        {
            printf("大了\n");
        }
        else if (guess<ret)
        {
            printf("小了\n");
        }
        else{
            printf("恭喜你\n");
            break;
        }
        
        
    }
    
}
int main(){
    int input=0;
    srand((unsigned int)time(NULL));//利用时间戳定义随机起点
    do{
        menu();
        printf("请选择>");
        scanf("%d",&input);
        switch(input){
            case 1:
                game();//猜数字游戏
                break;
            case 0:
            printf("退出游戏\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }
    }while(input);
    return 0;
}