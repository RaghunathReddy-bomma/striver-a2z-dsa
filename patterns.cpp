#include <iostream>
using namespace std;
int i,j;
void  print10(int n){
    int j;
    for(int i=1;i<=2*n-1;i++){
      int stars=i;
      if(i>n) stars= 2*n-i;
        for(j=1;j<=stars;j++){
            cout<<"*";
        }
    cout<<endl;    
    }

}
void print11(int n){
    int i,j;
    int start=1;
    for(i=1;i<=n;i++){
        if(i %2==0) start=0;
        else start=1;
        for(j=1;j<=i;j++){
            cout <<start;
            start=1-start;
            
        }
    cout<< endl;
    }
}
void print12(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(j=i;j>=1;j--){
            cout<<j;
        }

    cout<<endl;
    }
}
void print13(int n){
    int num=1;
    int i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout << num<< " ";
            num+=1;
        }
    cout<< endl;    
    }

}
void print14(int n){
    char ch;
    for(i=0;i<=n;i++){
        for(ch='A';ch<='A'+i;ch++){
            cout<<ch;
        }
    cout<<endl;    
    }
}

void print15(int n){
    char ch;
    for(i=n;i>=0;i--){
        for(ch='A';ch<='A'+i;ch++){
            cout<<ch <<" ";
        }
    cout<<endl;    
    }
}
void print16(int n){
    char ch;
    for(i=0;i<=n;i++){
        ch='A'+i;
        for(j=0;j<=i;j++){
            cout<< ch;
        }
    cout<<endl;                  
    }
}
void print17(int n){
    
    for(i=0;i<n;i++){
        for(j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(j=0;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(j=0;j<(n-i-1);j++){
            cout<<" ";
        }
    cout<<endl;    

    }
}
void print18(int n){
    char ch;
    for(i=0;i<=n;i++){
        for(ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
    cout << endl;    
    }

}
void print19(int n){
    int inis=0;
    for(i=0;i<=n;i++){
        int star=n-i+1;
        for(j=1;j<=star;j++){
            cout<< "*";
        }
        for(j=0;j<=inis;j++){
            cout<< " ";
            
        }
        
        for(j=1;j<=star;j++){
            cout <<"*";
        }
    inis+=2;
    cout<<endl;
    }
    inis=2*n+2;
    for(i=0;i<=n;i++){
        
        for(j=1;j<=i;j++){
            cout<< "*";
        }
        for(j=0;j<=inis;j++){
            cout<< " ";
            
        }
        
        for(j=1;j<=i;j++){
            cout <<"*";
            
        }
    inis-=2;
    cout<<endl;   
    }      

}
void print20(int n){
    int spaces=2*n-2;
    for(i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(j=1;j<=star;j++){
            cout<<"*";
        }
        for(j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(j=1;j<=star;j++){
            cout<<"*";
        }
    cout<<endl;    
    if(i<n) spaces-=2;
    else spaces+=2;
       
    }
}
void print21(int n){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i== 1 or i==n or j==1 or j==n){
                cout<<"*";
            }
            else cout<<" ";
        }
    cout<<endl;    

    }
}




int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n;
        cin >> n;
        print21(n);

    }
    

    
    return 0;
}