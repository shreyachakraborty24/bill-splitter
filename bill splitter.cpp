#include <iostream>
using namespace std;

int main()
{
    cout<<"This is a bill splitter code"<<endl;
    int ppl,amt,sum=0;
    cout<<"Enter the no. of your friends"<<endl;
    cin>>ppl;
    cout<<"Enter the amount"<<endl;
    cin>>amt;
    sum=amt/ppl;
    cout<<"The amount to be paid by each friend is "<<sum;
    return 0;
}
