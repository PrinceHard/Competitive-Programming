#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main()
{
    int a; int b; int c; int d;
    cin>>a>>b>>c>>d;
    int resp = max_of_four(a, b, c, d);
    cout<<resp;
}


int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if(a >= b && a>=c && a>=d){
        ans = a;
    }
    else if(b >= a && b>=c && b>=d){
        ans = b;
    }
    else if(c >=a && c>= b && c>=d){
        ans = c;
    }
    else{
        ans = d;
    }
    return ans;

}
