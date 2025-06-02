#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

void testingfunction()
{
    cout << "Hello world";
}


int main()
{
    int s = sum(1, 10);
    cout << s;
    testingfunction();

    vector<int> v = {10,20,30,40,50};
    v.pop_back();
     for( auto x:v){
        cout << x << " ";
        
     }



    return 0;
}