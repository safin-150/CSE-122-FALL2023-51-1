#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string word;
    cin>>word;

    int sml=0,big=0;

    for(int i=0;i<word.size();i++){
        if(isupper(word[i])){
            big++;
        }else{
            sml++;
        }
    }

    if(sml>big || sml==big){
        for(int i=0;i<word.size();i++){
            word[i] = tolower(word[i]);
        }
    }else{
        for(int i=0;i<word.size();i++){
            word[i] = toupper(word[i]);
        }
    }

    cout<<word<<endl;

    return 0;
}
