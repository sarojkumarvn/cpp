#include <bits/stdc++.h>
using namespace std;
void pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j = i; j++)
        {
            cout << j << "";
        }
        cout << endl;
    }
}
void pattern5()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6()
{
    for (int i = 1; i < 6; i++)
    {                                    // This line is correct
        for (int j = 1; j <= 6 - i; j++) // j = 1 to 6 - i (done)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        };

        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        };
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        };

        cout << endl;
    }
}
void pattern10()
{
    int n = 5;
    for (int i = 1; i <= 2 * n - 1; i++)
    { // it will give us 9 rows
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern11()
{
    int start = 1;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12()
{
    int n = 4;
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j; // perfect
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13()
{
    int num = 1;
    int n = 5;
    for (int i = 1; i <= n; i++) // outer loop
    {
        for (int j = 1; j <= i; j++)
        { // inner loop
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}
void pattern14()
{
    int n = 6;
    for (int i = 0; i < n; i++) // outer loop
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void pattern15()
{
    int n = 6;
    for (int i = 1; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2 + 1;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18() // TO BE CHECKED FOR ISSUE
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'E' - i; ch < 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern19()
{
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Second Part
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * n - 2 * i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20()
{
    int n = 5;
    int space = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++) // outer loop
    {
        // star
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}
void pattern21()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern22()
{
    int n = 5;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}
void pattern23(){
    int n = 5;
    for(int i = 0 ; i < n ; i ++){
		 int number = 1 ;
		 for (int j = 0 ; j < i ; j ++){
			 cout << number;
		 }
		 cout << endl ;
	}
}

void numberCrown() {
    // Write your code here.
    int n = 5;
    for(int i = 1 ; i <= n ; i++){ //outer loop
        int spacing = 2 * (n - i); //space
      for(int j = 1 ; j <= i ; j++){
          cout << j ;
      }
      for(int j = 1 ; j <= spacing ; j ++){
          cout << " ";

      }
      for(int j = i ; j >= 1 ; j--){
          cout << j;
      }
      cout << endl;
      spacing -= 2;

    }
}
void test(){
    int n = 4;
   for(int i = 0 ; i < n ; i++){ //outer loop
    
    for(char ch = 'C' ; ch >='C'-i ; ch--){
        cout << ch << " ";
    }
    cout << endl ;
    }
}
    
  void test2(){
    {
    // Write your code here.
    int n = 5;
    int inis = 0 ;
    for(int i = 0 ; i < n ; i++){
        //stars
        for(int j = 0 ; j<= n- i ; j++){
            cout << "*";
        }
        //space

        for(int j = 0 ; j < inis ; j++){
            cout << " ";
        }
        //stars

        for(int j = 0 ; j <= n-i ; j++){
            cout << "*";
        }
        cout << endl ;
     inis += 2;

    }
    for(int i =1 ; i<= n ; i++){ //outer loop
        int inis = 2*n - 2;
      for(int j = 1 ; j <= i ; j++){
          cout << "*";
      }
      for(int j = 1 ; j <= inis ; j++){
          cout << " ";
      }
      for(int j = 1 ; j<= i ; j++){
          cout << "*";
      }

 cout << endl ;
inis -= 2;
    }
}
  }
    
 void symmetry() {
    int n = 3;
    // Write your code here.
   
    for(int i = 0 ; i < n ; i++){
        //stars
        for(int j = 0 ; j< n- i ; j++){
            cout << "*";
        }
        //space

        for(int j = 0 ; j < 2*i ; j++){
            cout << " ";
        }
        //stars

        for(int j = 0 ; j < n- i ; j++){
            cout << "*";
        }
        cout << endl ;
     

    }
   
    for(int i =1 ; i<= n ; i++){ //outer loop
      for(int j = 0 ; j < i ; j++){
          cout << "* ";
      }
      for(int j = 0 ; j < 2*n -2*i  ; j++){
          cout << " ";
      }
      for(int j = 0 ; j< i ; j++){
          cout << "*";
      }

 cout << endl ;

    }
}
int main()

{

//   test2();
//   pattern19();
// symmetry();
pattern20();
    // cout << "Hello world ";
    return 0;
}
