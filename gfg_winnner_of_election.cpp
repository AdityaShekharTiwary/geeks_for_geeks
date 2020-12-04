// { Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;

vector<string> winner(string arr[],int n);

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {


        int n;
        cin>>n;

        string arr[n];

        for (int i=0;i<n;i++)
        cin>>arr[i];

        vector<string> result = winner(arr,n);

        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


// Funtion to find winner
// arr[]: input array
// n: size of array

vector<string> winner(string arr[],int n)
{
    // Your code here
    // Return the string containing the name and an integer
    // representing the number of votes the winning candidate got
     map<string, int> m;
    int max_votes = 0;
    string output;

    for(int i = 0; i < n; i++)
    {
        m[arr[i]]++;

        if(max_votes < m[arr[i]])
        {
            max_votes = m[arr[i]];
            output = arr[i];
        }

        if(max_votes == m[arr[i]])
        {
            output = min(arr[i], output);
        }
    }

     cout<<output<<" "<<max_votes<<endl;
}
