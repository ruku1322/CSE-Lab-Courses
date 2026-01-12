//One line code decoding (expression, input, output, function)

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Enter one line code :"<<endl;
    string str;
    getline(cin, str);
    char A;

    for(int i=0; i < str.size(); i++)
    {
        if(str[i]=='=')
        {
            A= str[i+1];
            for(int j = i; j<str.size(); j++)
            {
                if(str[j]== '+')
                {
                    cout<<"Value of " << str[j+1]<<" is adding with value of "<<A<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '-')
                {
                    cout<<"Value of " << str[j+1]<<" is subtracted from value of "<<A<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '*')
                {
                    cout<<"Value of " << str[j+1]<<" is multiplying with value of "<<A<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '/')
                {
                    cout<<"Value of " << A <<" is deviding by value of "<<str[j+1] <<" and storing result to "<<str[0]<<endl;
                }
            }
            break;
        }
    }

    return 0;
}
