#include<iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;

    cout << a;

    //if(condition)
    if(a%2 == 0)
    {
        //% gives remainder of a/b
        if(a%4 == 0)
            a+=10;
        else if(a%6 == 0)
            a+=100;
    }
    if(a%3 == 0)
    {
        a-=10;
    }
    else
    {
        a-=20;
    }
    cout<<a<<endl;

    int b=5;
    //range of a%b is 0 to b-1
    if(b%2 == 1)
    if(b&1)
    {
        cout << b << " is ODD" << endl;
    }
    if(b%2 == 0)
    {
        cout << b << " is EVEN" << endl;
    }
    return 0;

///   1100 = 12
//    0001 = 1 
//    0000 = 0
//
//    12&1 = 0
//    13&1 = 1
//
//
//      LOOPS-
//      FOR, WHILE, DO-WHILE

        int i=1;  //initialisation
        while(i<=10) //condition
        {
            //statements
            cout<<"Hello "<<i<<endl;
        
            //increament or dec
            ++i;
        }

        
        //for(int j=1;j<=10; ++j)
        for(int j=1;j<=10; j++)
        {
            //statements
            cout<<"Hello "<<j<<endl;
        }

        for(;;)
        {
            cout<<"infinte"<<endl;
        }

        //a = ++i;
        //a = i++;

        int d = 2;
        do
        {
            //statements
            cout<<d<<endl;
        }while(d==1);

}

