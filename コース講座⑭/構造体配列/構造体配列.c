#include <string.h>
#include <stdio.h>

//　学生のデータを入れる構造体
struct student{
    int id; //　学生番号（整数型変数）
    char name[256]; //　名前（文字列変数）
    int age; //　年齢（整数型変数）
};

//　構造体の名前をtypedefで定義
typedef struct student student_data;

int main(){
    int i;
    student_data data[] = {
        {1, "山田太郎", 18},
        {2, "砂糖良子", 19},
        {3, "太田陰", 18},
        {4, "中田優子", 18}
    };

    //　データの内訳を表示
    for (i = 0; i < 4; i++){
        printf("学生番号：%d 名前：%s 年齢：%d\n", data[i].id, data[i].name, data[i].age);
    }
    return 0;
}