#include <iostream>
 
using namespace std;
 
int main()
{
    int tc, r;
 
    cin>>tc;
 
    for(int i = 1; i<=tc; i++){
        r = 0;
        int n;
        cin>>n;
        while(n--){
          int m;
          cin>>m;
          if(m>0) r +=m;
        }
        cout<<"Case "<<i<<": "<<r<<endl;
    }
}