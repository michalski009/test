#include <iostream>
#include <windows.h>
#include <time.h>
#include <iomanip>

using namespace std;

int t_before[100], t_even[100], t_after[100];

int main()
{
    //the writing out of integer random numbers from
    //the range from 9 to 300 in two tables "t_before" and "t_even"
    srand(time(NULL));
    for(int i=0; i<100; i++)
    {
        int r_num=rand()%292+9;
        t_before[i]=r_num;
        t_after[i]=r_num;
        t_even[i]=r_num;
    }

//the  writing only even numbers to table "t_even"
    for (int i=0; i<100; i++)
    {
        if((t_even[i]%2)!=0)
            t_even[i]=0;
        else t_even[i]=t_even[i];
    }

    //the sorting of numbers in the table "t_even" ascending
    int r;
    for(int i=0; i<99; i++)
    {
        for(int j=i+1; j<100; j++)
        {
            r=t_even[i];
            if(t_even[j]<r)
            {
                t_even[i]=t_even[j];
                t_even[j]=r;
            }
        }
    }

//the sorting of numbers in the table "t_after" descending
    for(int i=0; i<99; i++)
    {
        for(int j=i+1; j<100; j++)
        {
            r=t_after[i];
            if(t_after[j]>r)
            {
                t_after[i]=t_after[j];
                t_after[j]=r;
            }
        }
    }
    //the show up of the total table on the screen
    cout<<" before  descending  ascending_even_numbers index "<< endl;
    cout<<endl;
    for(int i=0; i<100; i++)
    {
        //this operator "setw" runs for the best perception of the  calculation results

        cout<<" "<<setw(3)<<t_before[i]<<"      "<<setw(3)<<t_after[i]<<"             "<<setw(3)<<t_even[i]<<"                 "<<setw(3)<<i<<endl;
    }
    return 0;
}
