// Nathan 
// Ouk
// 0834524@my.msjc.edu
// 10/15/2026
// Assignment #10b - Overloaded Functions
// Assignment #10b - Write overloaded sumAscii functions, with one taking a single string argument, and the second taking two string arguments, both returning the sum of all of the ASCII charcters within string arguments.

#include <iostream>
#include <string>
using namespace std;

int sumAscii(string input);
int sumAscii(string input1, string input2);

int main()
{
    string input1;
    string input2;

    cout << "Enter the first string to decode." << endl;

    cin >> input1;
    cout << endl;

    cout << "Enter the second string to decode." << endl;

    cin >> input2;
    cout << endl;

    cout << "The first sum is: " << sumAscii(input1) << endl;
    cout << "And the second sum is: " << sumAscii(input2) << endl;
    cout << "Combined, the ASCII sum of both strings is: " << sumAscii(input1, input2) << endl;

    return 0;
}

int sumAscii(string input)
{
    int sum = 0;

    for (int i = 0; i < input.length(); i++)
    {
        sum += static_cast<int>(input.at(i));
    }

    return sum;
}

int sumAscii(string input, string input2)
{
    return sumAscii(input) + sumAscii(input2);
}

