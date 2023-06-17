#include<stdio.h>

int main(){
    //　複数の変数の宣言
    int i, num;
    //　printf関数でユーザーにnumを入力してもらう
    printf("回数を入力：\t");
    //　キーボードで数値を入力
    scanf("%d", &num);
    //　printf関数でwhileでの実行という報告
    printf("whileで実行\n");
    //　i変数の初期化
    i = 1;
    //　whileループで実行
    while (i <= num){
        //　printf関数で「*」キャラクターの表示
        printf("*");
        //　i変数の加算
        i++;
    }
    printf("\n"); //　whileループが済んだ場合に改行
    //　printf関数でdo〜whileループでの実行という報告
    printf("do〜whileで実行\n");
    //　i変数を代入
    i = 1;
    //　do〜whileループの実行
    do
    {
        //　printf関数で「*」キャラクターの表示
        printf("*");
        //　i変数の加算
        i++;
    } while (i <= num);
    printf("\n"); //　do〜whileループが済んだ場合に改行    
    return 0;
}