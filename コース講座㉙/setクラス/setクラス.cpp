#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    set<string> names; //　setのデータ構造を用意する
    //　値を代入
    names.insert("トム");
    names.insert("マイク");
    names.insert("マイク"); //　同じ名前をダブって代入させる
    names.insert("ボブ");
    //　登録されている全データを表示
    set<string>::iterator it; //　イテレータを用意
    for (it = names.begin(); it != names.end(); it++){
        cout << *it << endl;
    }
    //　Bob Steveがデータ内に存在するか調べる
    string n[] = { "ボブ", "スチーブ" };
    int i;
    for (i = 0; i < 2; i++){
        it = names.find(n[i]);
        if (it == names.end()){
            //　データが、セット内に存在しない
            cout << n[i] << "がセット内に存在していません。" << endl;
        }else{
            //　データがセット内に存在する
            cout << n[i] << "がセット内に存在しています。" << endl;
        }
    }
    return 0;
}