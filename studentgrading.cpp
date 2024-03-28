#include<iostream>
using namespace std;

class studentgrading
{
    string name;
    float mark1, mark2, mark3;

    public :

    float avg;
    studentgrading()
    {
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"Enter the marks for 3 subjects : ";
        cin>>mark1>>mark2>>mark3;
        avg = (mark1+mark2+mark3)/3;
    }

};

int main() 
{
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    studentgrading s[n];
    cout<<"The average marks are : "<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<"Student "<<i+1<<" average is "<<s[i].avg<<endl;
    }
    float low=s[0].avg;
    for(int i = 0;i<n;i++)
    {
        if(s[i].avg<low)
        {
            low = s[i].avg;
        }


    }

    cout<<"The lowest average is : "<<low<<endl;

    float high = s[0].avg;
    for(int i=0;i<n;i++)
    {
        if(s[i].avg>high)
        {
            high = s[i].avg;
        }
    }
    cout<<"The highest average is : "<<high<<endl;
}

