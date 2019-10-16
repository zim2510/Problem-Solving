#include <iostream>

using namespace std;
int main()
{
    int tc;
    cin>>tc;

    for(int i = 1; i<=tc; i++){
        long long int n, x;
        cin>>x;
        cout<<"Case "<<i<<": ";
        n = x;
        while(!(n%2)){
            n = n/2;
        }
        if(n != 1 && n != x) cout<<n<<" "<<x/n<<endl;
        else cout<<"Impossible"<<endl;
    }
}


