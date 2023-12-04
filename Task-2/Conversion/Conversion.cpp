#include <bits/stdc++.h>
using namespace std;
int main() {
    int size;
    string word;
    cin>>word;
    size = word.length();
    for (int i=0; i<size; ++i)
    {
        if (word[i]>=65&&word[i]<=90)
            cout<<char(word[i]+32);
        else if (word[i] >= 97 && word[i] <= 122)
            cout<<char(word[i]-32);
        else
            cout<<" ";
    }
    return 0;
}