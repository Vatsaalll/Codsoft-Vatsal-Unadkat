#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char filename[30], ch, str[1000];
    int total = 0, i=0, totword = 0;
    ifstream fp;
    cout<<"Enter the name of the file: ";
    cin>>filename;
    fp.open(filename, ifstream::in);
    
    if(!fp)
    {
        cout<<endl<<"File doesn't exist or Access denied";
        return 0;
    }
    
    while(fp>>noskipws>>ch)
    {
        str[total] = ch;
        total++;
    }

    fp.close();
    str[total]='\0';

    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            if(str[i+1] != '\0' && str[i+1] != ' ')
            totword++;
            i++;
        }

        else if(str[i] != ' ')
        {
            i++;
        }

        else
        {
            if(str[i+1] != '\0' && str[i+1] != ' ')
            totword++;
            i++;
        }
        
    }
    cout<<endl<<"Total words = "<<totword;
    cout<<endl;
    return 0;
}