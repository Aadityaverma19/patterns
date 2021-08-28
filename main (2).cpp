/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=1;
    
    for(int i=1; i<=n ;i++){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        for(int l=1; l<=n-i; l++){
            cout<<" ";
        }
        for(int m=1; m<=i; m++){
            cout<< "*";
        }
        cout<<endl;
        
    }
    for(int i=n; i>=1 ;i--){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        for(int k=1; k<=n-i; k++){
            cout<<" ";
        }
        for(int l=1; l<=n-i; l++){
            cout<<" ";
        }
        for(int m=1; m<=i; m++){
            cout<< "*";
        }
        cout<<endl;
    }
    

    return 0;
}
