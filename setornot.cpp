#include<iostream.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cin>>num>>pos;
    if(num&((pos-1)<<1))
      cout<<"Yes";
    else
      cout<<"No";
}
