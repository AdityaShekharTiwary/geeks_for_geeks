#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    int pro=1;
    for(int i =0;i<n;i++)
  {
      cin>>a[i];
      pro=pro*a[i];

  }
   for(int i = 0;i<n;i++)
   {
       cout<<pro/a[i]<<" ";
   }
    cout<<endl;
}
}
