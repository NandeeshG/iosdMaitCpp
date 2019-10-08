#include<iostream>
using namespace std;

int main()
{
    //------------------------------------------
    //Q1
    int* var_ptr_arr[10] = {nullptr};
    //This variable holds a list of pointers to integral values
    //usage example ahead
    int* num1 = nullptr;
    int* num2 = nullptr;
    *num1 = 5;
    *num2 = 10;
    var_ptr_arr[0] = num1;
    var_ptr_arr[1] = num2;
    cout<<"VAR 0 "<<var_ptr_arr[0]<<" -> "<<*var_ptr_arr[0]<<endl;
    cout<<"VAR 1 "<<var_ptr_arr[1]<<" -> "<<*var_ptr_arr[0]<<endl;
    //------------------------------------------


    //------------------------------------------
    //Q2
    //for every iteration of outer loop( 'i' loop) the inner 
    //loop runs from 0 to 2n-1 (the 'j' loop)
    //i loop runs -> 0 to n-1 that is n times
    //j loop runs -> 0 to 2n-1 that is 2n times
    //total run time = n * 2n
    //that is = 2*n*n
    //check yourself by giving any value to n
    int n = 3;
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<2*n; ++j)
        {
            cout<<"IOSD"<<endl;
        }
    }
    //------------------------------------------


    //------------------------------------------
    //Q3
    //The most simple algorithm to check if num is prime 
    //is to run a loop from 2 to num-1 and check if num
    //is divisible by any one of them. If not it is prime.
    //
    //To improve upon this, run loop till num/2 only, because
    //any number greater than num/2 will not divide num.
    //
    //An even better approach is to run loop untill 
    //square_root(num) only. and run loop as 3 to sqrt(num)
    //with each iteration skipping two. (obviously we'll 
    //check if number is even before running loop)
    //
    //Their are many many 'Primality Tests' that may give 
    //better run times. Do lookup on the internet!
    //
    //Here i implement the easiest version
    int num;
    cout<<"Enter num to test primality ";
    cin>>num;
    bool prime = true;
    for(int i=2; i<num; ++i)
    {
        if(num%i == 0)
        {
            prime = false;
            break;
        }
    }
    if(prime) 
        cout<<"Prime number !"<<endl;
    else
        cout<<"Composite number :( "<<endl;
    //------------------------------------------


    //------------------------------------------
    //Q4
    //decimal codes are written in powers of 10
    //234 = 2*pow(10,2) + 3*pow(10,1) + 4*pow(10,0)
    //
    //similarly, binary codes are written in powers of 2.
    //11101010 = 1*pow(2,7) + 1*pow(2,6) + 1*pow(2,5) +
    //           0*pow(2,4) + 1*pow(2,3) + 0*pow(2,2) +
    //           1*pow(2,1) + 0*pow(2,0) = 234(in decimal)
    //
    //base of decimal is 10 (0 to 9)
    //base of binary is 2   (0 to 1)
    //base of octal is 8    (0 to 7)
    //base of hexadecimal is 16 (0 to 9 then a,b,c,d,e,f)
    //
    //in Computer science, we may put 0b infront 
    //of binary to tell it is binary code. (doesn't work in c++ though)
    //0x in front of hexa to tell to interpret following
    //sequence as hexadecimal code (works in c++)
    //0 in front of octal to tell to interpret following
    //sequence as octal code (works in c++)
    //
    //Answers
    // 9 = 0b1001
    // 0b100101 = 0x25
    // 045 = 4*8 + 5 = 37
    //------------------------------------------
    


    //------------------------------------------
    //Q5
    //4bytes = 8*4bits
    //each bit can be 0 or 1
    //since it is unsigned, we don't care about negative
    //sign's storage
    //so number of numbers that can be stored is pow(2,32)
    //this means we can store numbers ranging from 0
    //to pow(2,32)-1
    //------------------------------------------
    


    //------------------------------------------
    //Q6
    //NUMBERING MISTAKE IN ASSIGNMENT
    //------------------------------------------
 

    //------------------------------------------
    //Q7
    //This code is easy, I think no explanation is
    //required
    int twod_array[4][4];
    cout<<"Input 2d_arr 4 by 4"<<endl;
    for(int i=0; i<4; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            cin>>twod_array[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<4; ++i)
    {
        for(int j=0; j<4; ++j)
        {
            sum += twod_array[i][j];
        }
    }
    cout<<"Sum "<<sum<<endl;
    //Some people might think if all we had to do 
    //was display the sum, why even bother storing the
    //2d_array? Just calculate the sum directly as user
    //inputs and print it. 
    //If you thought that, that's awesome, and you are breathtaking :)
    //However, I had to show how to use 2d or higher
    //dimensional arrays.
    //Keep up the brainstorming.
    //------------------------------------------
 

    //------------------------------------------
    //Q8
    //NO answer given for this, think on your own.
    //I'll suggest to don't look at monitor's screen 
    //while finding the answer.
    //------------------------------------------


    //------------------------------------------
    //Q9
    //This is very similar to finding prime code.
    int num3;
    cout<<"Enter num to count factors ";
    cin>>num3;
    int fact=0;
    for(int i=1; i<=num3; ++i)
    {
        if(num3%i == 0)
        {
            fact++;
        }
    }
    cout<<"Number of factors = "<<fact<<endl;
    //------------------------------------------
    

    
    //------------------------------------------
    //Q10
    //Number of trailing zeroes in 100! is 24
    //we found this out by repeated factor division
    //refer this please 
    // http://www.mytechinterviews.com/how-many-trailing-zeros-in-100-factorial
    // This gives number of zeroes as 24
    // now when we subtract 1, all the zeroes become niners
    // Thus final answer for the question is 0
    //------------------------------------------
    

    //------------------------------------------
    //Q11
    //I can think of two ways to solve this.
    //1) Use XOR
    //2) Use sum
    //
    //1) Repeatedly XOR every element in two arrays as
    //the user inputs them. At the end only the unique
    //element will remain. This is because (a)XOR(a) = 0
    //and (0)XOR(b) = b
    //Thus, in a sense, every repeating element will cancel
    //itself and the unique element will be left remaining.
    //I hope you get this.
    //
    //2) This is pretty easy way. Calculate the sum of both
    //arrays. Subtract sum of smaller array, from that of 
    //larger one. This will leave only the unique element.
    //
    //I have implemented the XOR code here
    int size,temp;
    cout<<"Enter size of array for XOR question. ";
    cin>>size;
    int unique=0;
    cout<<"Enter elements of the two arrays. ";
    for(int i=0; i<(2*n+1); ++i)
    {
        cin>>temp;
        unique = unique ^ temp;
        //shorthand will be -> unique^=temp;
    }
    cout<<"Unique is "<<unique<<endl;
    //------------------------------------------------
    //
    //
    //THANKS A LOT, Contact Nandeesh Gupta if any feedback
    //or suggestions on how to provide you solutions or
    //just about anything.


    return 0;
}
