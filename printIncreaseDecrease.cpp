#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printIncreseDecrease(int n)
{
    if (n<0)//base case
    {   
        cout<<n<<" ";
        return ;
    }
    cout<<n<<" ";//if this is commented then decreasing order will print
    printIncreseDecrease (n-4);//recursive case
    cout<<n<<" ";//if this is commented then increasing order will print
}

int main()
{   
    int n;
    cin>>n;
    
    printIncreseDecrease(n);
    
    return 0;
} 
