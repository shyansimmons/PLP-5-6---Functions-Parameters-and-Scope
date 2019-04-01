#include<iostream>

using namespace std;

//Question 1 declaring a function
int varFunc();

//Question 3 Recursive function
int sum(int num)
{
    if (num != 0)
        return(num + sum(num - 1));
    else
        return num;
}

//Question 4 Multiple parameters
int addNum(int y, int z)
{
    int answer = y + z;
    return answer;
}

//Question 7 Variable declaration inside function
int varFunc(){
    int x = 1;
    return x;
}

//Question 8 declaring global variable
int x = 10;

//Question 9 Passing variables
void addOne(int &ref) // ref is a reference variable
{
    ref = ref + 1;
}

// main() function
int main()
{
    //Question 3 Recursive function
    int n;
    cout << "Enter number to calculate sum of natural numbers: ";
    cin >> n;
    int total = sum(n);
    cout << "Recursive func to find sum of natural numbers from 1 to " << n << " = " << total << endl;

    //Question 4 Multiple parameters
    cout << "(Passing multiple parameters) calculating the sum of 1231231 and 4920384: " << addNum(1231231, 4920384) << endl;

    //Question 6 Overwritten variables
    int x = 5;
    int i=0;
    cout << "Printing value of x before loop: " << x << endl;

    for (int i=0; i < 3; i++) {
        x = 3;
        cout << "Printing value of x declared inside loop: " << x << endl;
    }

    //Question 7
    cout << "Variable x from function call = " << varFunc() << endl;

   //Question 8 Accessing Global variable
   cout << "Printing global x = " << ::x << endl; // use scope resolution operator ( :: ) to access global x

   //Question 9 Passing variables
   {
        int val = 6;
        addOne(val);
        cout << "Sum of 6+1 by passing reference variable: " << val << endl;
   }
    //Question 10 Assignment handling
    // uncomment code to view compiling errors

    // int x = 0;
    // int i = 0;
    // both variable x and i output error: redeclaration of 'int x' and 'int i'

    char a [] = {'c','a','t'}; //correct array format
    char b []  = {'d','o','g'}; //correct array format
    //a = b; // invalid array assignment
    b[1] = 'u'; //correct format to replace value in array
    cout << "Printing two arrays of character values: " << endl;
    cout << a;
    cout << b;

   return 0;
}
