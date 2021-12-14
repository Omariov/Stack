
#include <iostream>
#include "stack.h"
using namespace Algo;
using namespace std;

int main()
{
    stack<int>* S = stack<int>::creator();
    for (int i = 0; i <= 3; i++) S->push(new int(i));
    int* k = S->top();
    cout << *k << endl;
    S->pop();
    int* j = S->top();
    cout << *j << endl;
    stack<int>::garbage(S);
}

