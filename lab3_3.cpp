#include <iostream>
using namespace std;
int main(){

    float ans=0;
    float i = 6;
    while(i<=19){
        ans = ans + 1/i;
        i = i+1;
    }
    cout << ans;
return 0;
}
