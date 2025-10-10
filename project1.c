/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前をつけて数字を保存しておく**/
    int seihai=100;
    printf("血質スタマイ%d％\n",seihai);
    seihai=seihai/10;
    /**printfは、""の間に表記したい文字を書く**/
    printf("3デブ物理乗算%d％",seihai);

    return 0;
}