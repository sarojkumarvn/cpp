#include <bits/stdc++.h>
#include <set>
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

    vector<int> v = {10, 20, 30, 40, 50};
    v.pop_back();
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    list<int> ls;
    ls.push_back(2254);
    ls.push_back(20);
    ls.push_back(200);
    cout << ls.front();

    cout << endl;
    // Stack   LAST IN FIRST OUT
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    st.emplace(5);

    cout << st.size();

    cout << endl;
    // Queue FIIRST IN FIRST OUT
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.back() += 10; // add 10 to the last elem
    cout << q.back();
    q.pop();           // removes 1
    cout << q.front(); // shows 2 ;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // PRIORITY_QUEUE
    priority_queue<int> pq;
    // The largest element stays at the top . like priority first
    pq.push(5);
    pq.push(50);
    pq.push(58);
    pq.push(54);
    pq.push(65); // should be on top
    cout << pq.top();
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> newpq;
    newpq.push(5);
    newpq.push(50);
    newpq.push(58);
    newpq.push(54);
    newpq.push(65);
    cout << newpq.top();

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // SET

    // keep the elems in a sorted order
    // if we push two or more same elems it takes only once

    set<int> newst;
       newst.insert(5);
       newst.insert(50);
       newst.insert(58);
       newst.insert(54);
       newst.insert(65);
       newst.insert(65);
       newst.insert(65);

    

    return 0;
}