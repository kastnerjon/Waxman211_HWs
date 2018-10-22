#include <iostream>
using namespace std;
int main(){
    long long i=1;
    while (true){
        long long k=i*i;
        if (k%2==1&&(k/10)%2==1){
                cout << k;
                return 0;
        }
        i++;
    }
}
