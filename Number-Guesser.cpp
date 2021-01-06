#include <iostream>
using namespace std;

int main()
{
    int high=100;
    int low = 0;
    int middle = 50;

    char answer;

    for(int i  = 0; i<7; i++)
    {
        cout<<"Is your number between "<<low<<" and "<<middle<<"(y/n)"<<endl;
        cin>>answer;
        if(answer=='y')
        {
            high=middle;
            middle=(low+high) /2;
        }
        else if(answer=='n')
        {
            low=middle;
            middle=(low+high) /2;
        }
    }

    cout<<"The number you guessed is "<<middle+1<<endl;
}