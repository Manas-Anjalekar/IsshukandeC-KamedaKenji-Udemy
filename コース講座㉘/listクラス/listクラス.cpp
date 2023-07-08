#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> li;
    li.push_back(1); //　後ろにデータを挿入
    li.push_back(2); //　後ろにデータを挿入
    li.push_front(3); //　前にデータを挿入
    list<int>::iterator itr;
    //　データの挿入
    itr = li.begin(); //　イテレータを先頭に設定
    itr++; //　一つ移動
    li.insert(itr, 4); //　値の挿入
    //　データの表示
    for (itr = li.begin(); itr != li.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    return 0;
}