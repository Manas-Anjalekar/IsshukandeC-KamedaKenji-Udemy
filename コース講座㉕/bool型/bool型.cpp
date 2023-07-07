#include <iostream>

using namespace std;

bool judge(int);

int main(){
    int n;
    cout << "整数を入力：";
    cin >> n;
    if (judge(n)) {
        cout << "この数は０以上です。" << endl;
    }else{
        cout << "この数は０未満です。" << endl;
    }
    return 0;
}

bool judge(int n){
    if(n >= 0){
        return true;
    }else{
        return false;
    }
}