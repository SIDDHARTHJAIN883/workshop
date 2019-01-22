#include<iostream>
using namespace std;
class palindrome
{
    int x;
    int pal(int x )
    {
        int q=0,rem=0;
        for(int i=0;x!=0;i++)
        {
            q=q*10;
            rem=x%10;
            q=q+rem;
            x=x/10;
        }return q;
    }
public:
    int start()
    {
        int in;
        cin>>x;
        in=pal(x);
        if(in==x)
            cout<<"it is a palindrome";
        else
            cout<<"not a palindrome";
    }
}P1;
int main()
{
    P1.start();
}
