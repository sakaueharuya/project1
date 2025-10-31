#include <stdio.h>

int main(void)
{
    char str[100];
    printf("文字列を入力してください:");
    scanf("%99s",str);
    
    for (int i=0;str[i]!='\0';i++){
        
        if (str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-('a'-'A');
        }
    }
    
    printf("大文字に変換した結果:%s\n",str);
    return 0;
}