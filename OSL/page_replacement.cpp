
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>
#include<iterator>
int pageFaults(int pages[], int n, int capacity)
{
    queue<int> indexes;
    unordered_set<int> s;
    int page_faults = 0;
    for (int i=0; i<n; i++)
    {
        if (s.size() < capacity)
        {
            if (s.find(pages[i])==s.end())
            {
                s.insert(pages[i]);
                page_faults++;
                indexes.push(pages[i]);
            }
        }
        else
        {
            if (s.find(pages[i]) == s.end())
            {

                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(pages[i]);

                indexes.push(pages[i]);
                page_faults++;
            }
        }
    }
  
    return page_faults;
}
int main()
{
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4,
                   2, 3, 0, 3, 2};
    int n = sizeof(pages)/sizeof(pages[0]);
    int capacity = 4;
    cout << pageFaults(pages, n, capacity);
    return 0;
}