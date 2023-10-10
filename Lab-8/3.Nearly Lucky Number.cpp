#include<iostream>
using namespace std;

int main()
{
    string num;
    cin>>num;

    int cnt=0;
    for(int i=0;i<num.size();i++){
        if(num[i]=='4' || num[i]=='7'){
            cnt++;
        }
    }
    
    if (cnt==4 || cnt==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
