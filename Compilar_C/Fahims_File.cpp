#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(n!=1)
    {
        cout<<"Enter your Input string"<<endl;
        string s;
        cin>>s;

        int Thik=1;
        int a=0;
        int cnt=0;
        for(char ch:s)
        {
            if(ch!='a' && ch!='b')
            {
                Thik=0;
                break;
            }
            if(ch=='b')
            {
                cnt++;
            }
            if(ch=='a' )
            {
                a=1;
            }
            if(ch=='b'&& a==1)
            {
                Thik=0;
            }

        }
        if(cnt<1)
        {
            Thik=0;
        }
        if(Thik==0)
        {
            cout<<"Wrong Input..."<<endl;
        }
        else
        {
            cout<<"Input Matched..."<<endl;
        }


        cout<<"Press 1 to exit or Anything to continue..."<<endl;

        cin>>n;

    }
    return 0;
}
