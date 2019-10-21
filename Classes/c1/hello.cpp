#include<iostream>       //Tells compiler to include code from iostream into our program
                         //IOSTREAM holds code for basic input output , i.e cout and cin commands
using namespace std;     //Tells compiler that we are using functions defined in std namespace under iostream

int main()               //The main function is the block of code that is executed as soon as we run our program
{
    for(int i=0; i<10; i=i+1)  // i varies from 0 to 9 (i.e. < 10) in this loop
    {
        cout<<"Hello"<<endl;   // print "Hello" (without " ) and then a newline (i.e. like pressing enter)
    }
    return 0;                  // tells program to exit normally
}

