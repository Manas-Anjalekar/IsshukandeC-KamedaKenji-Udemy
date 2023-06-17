#include<stdio.h>

int main(){
    //　変数の宣言
    int userNum;
    //　printf関数でユーザーに数値を入力してもらう
    printf("１〜３の値を入力してください：\t");
    //　キーボードから数値を入力
    scanf("%d", &userNum);
    //　入力した値が、ｉf関数でチェックして、適切かどうかを調べる
    if (userNum == 1){
        //　入力した値は、１と同じだった場合の処理
        printf("one。\n"); 
    }else if (userNum == 2){
        //　入力した値は、２と同じだった場合の処理
        printf("two。\n");
    }else if(userNum == 3){
        //　入力した値は、３と同じだった場合の処理
        printf("three。\n");
    }else{
        //　０か、３の上の正数か、負の数だった場合の処理
        printf("不適切な値です。\n");
    }
    return 0;
}