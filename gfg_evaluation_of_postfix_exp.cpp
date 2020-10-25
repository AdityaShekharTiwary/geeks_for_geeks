// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    stack<int> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>'0' && str[i]<='9')
        {
            s.push(str[i]-'0');
        }
        else
        {
            int n1=s.top();
            s.pop();
            int n2=s.top();
            s.pop();
            if(str[i]=='*')
            {
                s.push(n1*n2);
            }
            else if(str[i]=='/')
            {
                s.push(n2/n1);
            }
            else if(str[i]=='+')
            {
                s.push(n1+n2);
            }
            else if(str[i]=='-')
            {
                s.push(n2-n2);
            }
        }

    }
    return s.top();
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;

    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
