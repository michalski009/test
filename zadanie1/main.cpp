#include <iostream>
#include <windows.h>
#include <time.h>


using namespace std;
int t_before[100], t_after[100];

int main()
{
    //the writing out of integer random numbers from
    //the range from 35 to 70 in two tables "t_before" and "t_after"
    srand(time(NULL));
    for(int i=0; i<100; i++)
    {
        int r_num=rand()%36+35;
        t_before[i]=r_num;
        t_after[i]=r_num;
    }
    //the sorting of numbers in the table "t_after" ascending
    int r;
    for(int i=0; i<99; i++)
    {
        for(int j=i+1; j<100; j++)
        {
            r=t_after[i];
            if(t_after[j]<r)
            {
                t_after[i]=t_after[j];
                t_after[j]=r;
            }
        }
    }
    //the show up of the total table on the screen
    cout<<" before after index "<< endl;
    cout<<endl;
    for(int i=0; i<100; i++)
    {
        //this condition runs for the best perception of the  calculation results
        if(i<10)
        cout<<" "<<t_before[i]<<"     "<<t_after[i]<<"    "<<" "<<i<<endl;

        else cout<<" "<<t_before[i]<<"     "<<t_after[i]<<"    "<<i<<endl;

    }

    return(0);
}
