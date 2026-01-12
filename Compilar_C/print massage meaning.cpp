

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    cout<<"Enter one line code :"<<endl;
    string str;
    getline(cin, str);


    for(int i=0; i < str.size(); i++)
    {
        if(str[i]=='=')
        {

            for(int j = i; j<str.size(); j++)
            {
                if(str[j]== '+')
                {
                    cout<<"Value of " << str[j+1]<<" is adding with value of "<<str[i+1]<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '-')
                {
                    cout<<"Value of " << str[j+1]<<" is subtracted from value of "<<str[i+1]<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '*')
                {
                    cout<<"Value of " << str[j+1]<<" is multiplying with value of "<<str[i+1]<<" and storing result to "<<str[0]<<endl;
                }
                else if(str[j]== '/')
                {
                    cout<<"Value of " << str[i+1] <<" is deviding by value of "<<str[j+1] <<" and storing result to "<<str[0]<<endl;
                }
            }
            break;
        }
    }

    return 0;
}
