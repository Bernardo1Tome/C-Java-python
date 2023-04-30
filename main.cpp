/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int a;
   int b;
   int c;
    cout << "Give me a number: ";
    cin >> a;
    cout << "Give me another number:";
    cin >> b;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    cout<<"Swap in progress..."<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"a: "<<a<<" b: "<<b<<endl;
    
    int meter;
    double foot = 3.28;
    double converted;
    cout <<"Metres to feet converter"<<endl;
    cout << "please give a number that you want to convert has to be meters to feet: ";
    cin >> meter;
    converted = meter * foot;
    cout << meter << " meters is "<<converted<<" feet."<<endl;
    
    int numbera;
  int numberb;
  cout << "Please give me a number: ";
  cin >> numbera;
  cout << "PLease give me another number: ";
  cin >> numberb;
  cout << "The sum of " << numbera << " and " << numberb << " is: " << numbera+numberb<<endl;
  
    int numberab;
    int numberba;
    cout << "Create a number: ";
    cin >> numberab;
    cout << "Create another number: ";
    cin >> numberba;
    
    if(numberab>numberba){
        cout << "a is bigger than b";
    }
    else if(numberba>numberab){
        cout << "b is bigger than a";
    }

    


    
    
    

}




