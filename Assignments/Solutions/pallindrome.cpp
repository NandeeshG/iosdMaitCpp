#include<bits/stdc++.h>

using namespace std;

int main()
{

string op;
cin>>op;
string po=op;
reverse(op.begin(),op.end());

if(po==op)
cout<<"PAllINDROME";
else
cout<<"not pallindrome";

return 0;
