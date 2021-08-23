/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int row, col,i,j;
    cin>>row>>col;
    for (i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if (i==row||i==1){
                cout <<"*";
            }
            else if (j==col || j==1){
                cout<<"*";
            }
            else {
                cout <<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
