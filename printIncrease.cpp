#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printIncrease(int n)
{
    if (n<0)
    {   
        return ;
    }
    cout<<n<<" ";
    printIncrease(n-1);
}

int main()
{   
    int n;
    cin>>n;
    
    printIncrease(n);
    
    return 0;
}
