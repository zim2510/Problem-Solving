#include <iostream>

using namespace std;

int cal(int);

int main()
{
    int tc;
    cin>>tc;
    for(int i = 1; i<=tc; i++){
        int count = 0;
        double a, b;
        cin>>a>>b;
        count = cal(b) - cal(a-1);
        cout<<"Case "<<i<<": "<<count<<endl;
    }
}

int cal(int n)
{
    if(n%3 == 2) return (n/3)*2 + 1;
    else return (n/3)*2;
}

