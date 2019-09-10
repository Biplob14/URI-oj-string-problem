#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
    int i,t;
    string str;
    cin>>t;
    getchar();
    for(i=1;i<=t;i++){
        getline(cin, str);
        for(int j=0;j<=str.length();j++){
            if((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <='Z'))
                str[j] += 3;
        }
        reverse(str.begin(),str.end());
        for(int j=str.length()/2;j<=str.length();j++)
            str[j]--;
        cout<<str<<endl;
    }
    return 0;
}
