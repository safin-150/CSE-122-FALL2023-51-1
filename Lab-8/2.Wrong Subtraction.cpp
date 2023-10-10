#include<iostream>
using namespace std;
int main()
{
    int num,t;
    cin>>num>>t;

    for(int i=0;i<t;i++){
        if(num%10==0){
            num=num/10;
        }else{
            num=num-1;
        }
    }
    cout<<num;

    return 0;
}
