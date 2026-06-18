#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter len of array : ";
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cout<<"enter array num: ";
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"enter no of quries: ";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter qurie numbers: ";
        cin>>num;
        cout<<num<<"is repeated :"<<hash[num]<<endl;
    }

}
