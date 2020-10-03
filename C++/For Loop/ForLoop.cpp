#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a; int b;
    cin>>a;
    cin>>b;

    if(a <=b && 1<=a<=9){
        int n;
        for(n = a; n <= b; n++){
            switch(n){
                case 1:
                    cout<<"one"<<endl;
                    break;
                case 2:
                    cout<<"two"<<endl;
                    break;
                case 3:
                    cout<<"three"<<endl;
                    break;
                case 4:
                    cout<<"four"<<endl;
                    break;
                case 5:
                    cout<<"five"<<endl;
                    break;
                case 6:
                    cout<<"six"<<endl;
                    break;
                case 7:
                    cout<<"seven"<<endl;
                    break;
                case 8:
                    cout<<"eight"<<endl;
                    break;
                case 9:
                    cout<<"nine"<<endl;
                    break;
            }
        }
        for(int i = 10; i <= b; i++){
            if(i % 2 == 0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
    }
}
