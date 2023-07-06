#include <iostream>

using namespace std;

int main(){
    int *p = 0;
    p = new int(); //　int型の領域を動的確保
    *p = 123;
    cout << *p <<endl;
    delete p; //　動的に確保した領域を解放
    return 0;
}