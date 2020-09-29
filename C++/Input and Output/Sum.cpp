#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int a, int b, int c)
{
    int ans = 0;
    ans += a;
    ans += b;
    ans +=c;

    return ans;
}


int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(1<= a <=1000 && 1<= b <=1000 && 1<= c <=1000)
    {
        cout<<sum(a,b,c);
    }
    return 0;
}
