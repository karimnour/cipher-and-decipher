#include <bits/stdc++.h>
using namespace std;




int main()
{
    double x,q,z;
    while(true)
    {
        cout<<"please enter you salary: ";
        cin>>x;
        z=0.076;
        cout<<"salary retroactive: "<<(x*z)<<endl;
        cout<<"new monthly salary: "<<((x*z)+x)<<endl;
        cout<<"the new annual salary: "<<(((x*z)+x)*6)+(x*6)<<endl;
        cout<<"again(1) & exit(2): ";
        cin>>q;
        while ((q!=1)&&(q!=2))
        {
            cout<<"error"<<endl;
            cin>>q;
        }
        if (q==2)
        {
            exit(0);
        }
    }


    return 0;
}
