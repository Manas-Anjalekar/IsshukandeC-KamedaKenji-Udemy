#include <stdio.h>

int main(){
    char s1[4] = { 'a', 'b', 'c', '\0' }; //　文字列"abc"
    char s2[] = "HelloWorld."; //　文字列”HelloWorld”
    char s3[10]; //　最大１０文字まで入れる文字列
    //　文字列の入力
    printf("文字列の入力：\t");
    //　キーボードから文字列を入力
    scanf("%s",s3);
    //　printf関数で文字列の表示
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
}