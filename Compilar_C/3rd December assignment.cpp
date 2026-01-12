#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);

    string x;
    cout<<"Give commant without space:";

    while (getline(cin,x))
    {
        int l=x.size();
    int pos=0;
    string y;
    for(int i=0;i<l;i++){
        if(x[i]=='='||x[i]=='('){
            pos=i;break;
        }
    } char dt;
    for(int i=0;i<l;i++){
        if(x[i]=='%'){
            dt=x[i+1];break;
        }
    }
    y=x.substr(0,pos);
    cout <<y<<endl;
        if(y=="Result"){
            string op;
            if(x[8]=='+'){
                op="Added to ";
            }
            if(x[8]=='-'){
                op="substracted From ";
            }
            if(x[8]=='*'){
                op="multiplied with ";
            }
            if(x[8]=='/'){
                op="dividing ";
            }
            cout<<"value of "<<x[9]<<" is "<<op<<"the value of "<<x[7]<<" and stored in "<<y<<endl;
        }
        else if(y=="scanf"){
            string val;
            if(dt=='d'){
                val="integer val";
            }
            if(dt=='f'){
                val="float val";
            }
            if(dt=='c'){
                val="char";
            }
            if(dt=='s'){
                val="string";
            }
            cout<<"Strandard input function which takes an "<<val<<endl;
        }
        else if(y=="printf"){
            string val;
            if(dt=='d'){
                val="integer val";
            }
            if(dt=='f'){
                val="float val";
            }
            if(dt=='c'){
                val="char";
            }
            if(dt=='s'){
                val="string";
            }
            cout<<"Strandard Output function which takes an "<<val<<endl;
        }
        else{
            cout<<"User defined Function"<<endl;
        }

    }

    return 0;
}
