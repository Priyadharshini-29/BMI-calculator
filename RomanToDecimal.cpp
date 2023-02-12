#include <iostream>

using namespace std;

int value(char s)
    {
        if(s=='I')
        return 1;
        if(s=='V')
        return 5;
        if(s=='X')
        return 10;
        if(s=='L')
        return 50;
        if(s=='C')
        return 100;
        if(s=='D')
        return 500;
        if(s=='M')
        return 1000;

        return -1;
    }
  int romanToDecimal(string &str) {

        int res=0;
        for(int i=0;i<str.length();i++)
        {
            int s1=value(str[i]);

            if(i+1<str.length())
            {
                int s2=value(str[i+1]);


                if(s1>=s2)
                {
                    res=res+s1;
                }
                else
                {
                res=res+s2-s1;
                i++;
                }
            }
            else
            res=res+s1;

        }
        return res;
    }
    int main()
    {

        string str;
        cin>>str;
        int ans=romanToDecimal(str);
        cout<<ans;
    }
