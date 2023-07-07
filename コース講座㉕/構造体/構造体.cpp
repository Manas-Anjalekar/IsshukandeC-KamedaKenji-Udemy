#include <iostream>

using namespace std;

struct DData {
    int n;
    double d;
};

int main(){
    DData dt;
    dt.n = 100;
    dt.d = 12.34;
    cout << "dt.n = " << dt.n << endl << "dt.d = " << dt.d << endl;
    return 0;
}