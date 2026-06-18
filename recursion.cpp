#include<iostream>
using namespace std;

void fun(int n,int i){
    if(i>n)return;

   


    
    fun(n,i+1);
    cout<<i<<endl;
}
int main(){
    int n=5;
    fun(n,1);

}