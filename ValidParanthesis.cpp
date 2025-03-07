#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<char> sp;
    int temp = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            sp.push(s[i]);
        }
        else
        {
            if(sp.size()==0)
            {
                temp=1;
                break;
            }
            if(s[i]==')')
            {
                char test = sp.top();
                if(test == '(')
                {
                    sp.pop();
                }
                else 
                {
                    temp = 1;
                    break;
                }
            }
            if(s[i]=='}')
            {
                char test = sp.top();
                if(test == '{')
                {
                    sp.pop();
                }
                else 
                {
                    temp = 1;
                    break;
                }
            }
            if(s[i]==']')
            {
                char test = sp.top();
                if(test == '[')
                {
                    sp.pop();
                }
                else 
                {
                    temp = 1;
                    break;
                }
            }
        }
    }
    if (temp == 1 || sp.size() > 0)
    {
        cout << "no";
    }
    else
        cout << "yes";
    return 0;
}