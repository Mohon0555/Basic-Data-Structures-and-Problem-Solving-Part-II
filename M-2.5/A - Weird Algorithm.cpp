#include <iostream>
using namespace std;

void alg(int n){
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n=n/2;
        }
        else{
            n=n*3+1;
        }
    }
     cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    alg(n);
}
