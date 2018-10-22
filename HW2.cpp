#include <iostream>
using namespace std;

bool equivalent (int a[], int b[], int size){
    
    for (int shift=0; shift<size; shift++){
        for (int position=0; position<size; position++){
            if (a[position]!=b[(position+shift)%size]) break;
                if (position==(size-1)) return true;}
                                                        }
                return false;  
                                            }

int main(){
    int a[5]={3,4,3,1,2};
    int b[5]={3,1,2,3,4};
    int c[5]={3,4,2,1,2};

if (equivalent(a,b,5)) cout << "true.";
else cout << "false.";
cout << endl;
if(equivalent(a,c,5)) cout << "true!";
else cout << "false!";
}
