#include <bits/stdc++.h>
using namespace std;

int main()
{

    // cout << "Hello world" << endl;
    // int x;
    // cin >> x;
    // cout << "value of x " << x;

    // DATA TYPE for large number we use large and large large together , float , double
    // string and getline

    int x = 10;
    float y = 5.6;
    // cout << y;

    string s1;
    string s2;
    cin >> s1 >> s2;
    // cout << s1 << " " << s2;

    // If we want ro print the whole string then
    //  we have to use getline , it picks on line just

    // In this getline we are getting the whole strinig as a input and print that ;
    string str;
    getline(cin, str);
    // cout << str;

    // CHAR - character

    // Write a program that takes an input as age
    // and prints that you are adult or not
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    else
    {
        cout << " You are not an adult";
    }

    // I/O is not working properly but the code is correct

    // Another question
    int result;
    cin >> result;
    int result;
    cin >> result;

    if (result < 0 || result > 100)
    {
        cout << "You were absent in the exam";
    }
    else if (result < 25)
    {
        cout << "You failed";
    }
    else if (result <= 44)
    {
        cout << "Your score is E";
    }
    else if (result <= 49)
    {
        cout << "Your score is D";
    }
    else if (result <= 59)
    {
        cout << "Your score is C";
    }
    else if (result <= 79)
    {
        cout << "Your score is B";
    }
    else
    {
        cout << "Your score is A";
    }

    // SWITCH STATEMENT
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thursday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;
        cout << "Check iniside switch ";
    // If non of the case matched then we can also give a default value
    default:
        cout << "Invalid check";
        cout << "Please try again";
    }
    cout << "Check ";

    return 0;

}
