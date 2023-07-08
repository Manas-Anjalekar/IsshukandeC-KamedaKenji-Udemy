#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){
    vector<string> v;
    list<string> li;
    v.push_back("HELLO");
    v.push_back("WORLD");
    li.push_back("hello");
    li.push_back("world");
    li.push_back("!");
    //　vectorでのイテレータ
    vector<string>::iterator i1;
    list<string>::iterator i2;
    for (i1 = v.begin(); i1 != v.end(); i1++){
        cout << *i1 << endl;
    }
    //　listの要素の削除
    i2 = li.begin();
    li.remove(*i2); //　要素の削除（listにしかできない）
    for(i2 = li.begin(); i2 != li.end(); i2++){
        cout << *i2 << endl;
    } 
    return 0;
}
