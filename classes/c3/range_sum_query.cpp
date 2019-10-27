#include<iostream>
using namespace std;

//OPTIMISED APPROACH - Time complexity O(n)
int main()
{
    int x; //size of arr
    cin>>x;  
    int arr[x];  //array of elements to be input
    int suma[x];  //prefix sum array
    for(int i=0; i<x; ++i)      // O(n) in this loop
    {
        cin>>arr[i];
        if(i==0)
            suma[i] = arr[i];
        else
            suma[i] = suma[i-1] + arr[i];
    }

    int q;  //no. of queries
    cin>>q;
    while(q--)   // O(n) in this loop
    //similar as saying for(int c=q; c>0; --c), but not actually same because in while
    //we are changing value of q
    {
        int l,r; //left and right index
        cin>>l>>r;
        int sum=0;  //sum from [left,right].  Notice square brackets mean both inclusive
        //Assume user gives input in zero indexed form.
        sum = suma[r]-suma[l]+arr[l];
        cout<<sum<<endl;
    }
        
    return 0;
}

//UNOPTIMISED APPROACH - Time complexity O(n squared)
/*
int main()
{
    int x; //size of arr
    cin>>x;  
    int arr[x];  //array of elements to be input
    for(int i=0; i<x; ++i)      // O(n) in this loop
    {
        cin>>arr[i];
    }

    int q;  //no. of queries
    cin>>q;
    while(q--)   // O(n squared) overall in this loop
    //similar as saying for(int c=q; c>0; --c), but not actually same because in while
    //we are changing value of q
    {
        int l,r; //left and right index
        cin>>l>>r;
        int sum=0;  //sum from [left,right].  Notice square brackets mean both inclusive
        //Assume user gives input in zero indexed form.
        for(int i=l; i<=r; ++i)  //This loop runs O(n) times, and it itself is inside in a 
            //while loop running O(n) times, thus overall complexity of the block is O9n squared
        {
            sum += arr[i];
        }
        cout<<sum<<endl;
    }
        
    return 0;
}
*/
