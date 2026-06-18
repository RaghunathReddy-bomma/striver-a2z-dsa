#include<iostream>
using namespace std;
int main(){
    string s;
     cout<<"Enter string: ";
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;

    }
    int q;
     cout<<"enter no of quries: ";
    cin >>q;
    while(q--){
        char c;
        cout<<"enter char";
        cin >>c;
        cout<<c <<" no. oftimes repeted :"<<hash[c-'a']<<endl;
    }
    return 0;
}
