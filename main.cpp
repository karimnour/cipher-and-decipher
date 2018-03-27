#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    double rate, cost;
    int  duration, time;
    string dayInput;
    cout<<"Please enter the time";
    do {
    cin>>time;

    }while(time<0 || time>24);
    cout<<"Please enter the day";
    cin>>dayInput;
    cout<<"Please enter duration of the call";
    cin>>duration;
    for (int i = 0; i<=2; i++)
    {
        dayInput[i] = toupper(dayInput[i]);
    }
    if((time>=8 && time<18) && (dayInput == "MO" || dayInput == "TU" || dayInput == "WE" || dayInput == "TH" || dayInput == "FR" ))
        {rate = 0.4;
        cost = duration * rate;

        }
    else if (!(time>=8 && time<18) && (dayInput == "MO" || dayInput == "TU" || dayInput == "WE" || dayInput == "TH" || dayInput == "FR" ))
      {

        rate = 0.25;
        cost = duration * rate;

}
    else
    {


        rate = 0.15;
        cost = duration * rate;

    }

    cout<<"the cost is : "<<cost<<endl;
    return 0;

}
