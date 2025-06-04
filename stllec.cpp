#include <bits/stdc++.h>
#include <set>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int s = sum(1, 10);
    cout << s;

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

    auto it = newst.find(65); // it will find the elem in the set

    newst.erase(it); // and it will erase that elem

    for (auto x : newst)
    {
        cout << x << " "; // it will print the each elem of the set
    }

    //{ 5, 50, 58, 54, 65 }
    auto it1 = newst.find(58);
    auto it2 = newst.find(65);
    newst.erase(it1, it2); // it will erase the elem from it1 to it2

    cout << endl;
    for (auto x : newst)
    {
        cout << x << " ";
    }

    /*
    Set:      {10, 20, 30, 40, 50}

          lower_bound(25) → Finds first number ≥ 25 → 30
          upper_bound(30) → Finds first number > 30 → 40

    */
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    // MULTISET -- It stores the repreatedd value also
    multiset<int> newst1;
    newst1.insert(5);
    newst1.insert(50);
    newst1.insert(58);
    newst1.insert(54);
    newst1.insert(65);
    newst1.insert(65);
    newst1.insert(65);

    newst1.erase(newst1.find(54));
    for (auto x : newst1)
    {
        cout << x << " ";
    }

    // UNORDERD SET
    unordered_set<int> newnewst;
    // All the operations are same

    // MAP - It stores unique keys in sorted order , similar to set data order

    // map< key , value > name ;
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2;
    // Rest all are same

    // MULTIMAP

    /*

    similar to the map but it can stores multiple key values
    */


// SORTING THROUGH STL
/*
sort(a , a+n ); // for an array 

sort( v.begin() , v.end()); // for vectors



*/

    return 0;
}