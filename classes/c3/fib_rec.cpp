#include<iostream>
using namespace std;

int fib(int n)
{
    //Just to help us track function calls
    cout<<"N is "<<n<<endl;

    //Base case
    if(n==0 || n==1)
    {
        return n;
    }

    //Recurrence relation
    int sum = fib(n-1) + fib(n-2);
    return sum;
}

int main()
{
    cout<<"Main result is "<<fib(4)<<endl;
    return 0;
}

//OUTPUT OF THE ABOVE PROGRAM

//N is 4
//N is 3
//N is 2
//N is 1
//N is 0
//N is 1
//N is 2
//N is 1
//N is 0
//Main result is 3
