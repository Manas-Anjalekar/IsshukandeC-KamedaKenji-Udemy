#include <iostream>

using namespace std;

void ref(int&);
void print(int);

int main(){
    //　整数の値を代入
    int n = 5;
    print(n);
    //　参照渡し
    ref(n);
    print(n);
    return 0;
}

void ref(int& n){
    n = 1;
}

void print(int n){
    cout << "n = " << n << endl;
}