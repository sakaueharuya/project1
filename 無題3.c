#include <stdio.h>

int main(void)
{
    int a,b;
    
    printf("一つ目の数字を入力してください:");
    scanf("%d",&a);
    
    printf("二つ目の数字を入力してください:");
    scanf("%d",&b);
    
    if (a>b){
        printf("%dは%dよりも大きいです。\n",a,b);
    } else if (a<b){
        printf("%dは%dよりも小さいです。\n",a,b);
    } else {
        printf("%dは%dと等しいです。\n",a,b);
    }   
    
    
    
    return 0;
}