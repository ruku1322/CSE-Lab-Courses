#include<iostream>
#include<stack>
using namespace std;

int main() {
   string input;
   stack <string> stk;

    while(1){
        cin>>input;
        if(input=="$")
            break;

        if(input!=="+" || input!=="-" || input!=="*" || input!=="/"|| input!=="(" || input!==")" )
            cout<<input<<" ";
        else if(input=="(") {
            stk.push(input);
        }


    }
}


