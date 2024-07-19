#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    string inp;
    cin>>inp;

    //removing the '+' from the string

    int i = 0; 
    string temp;
    while( i < inp.length())
    {
        if(inp[i] != '+')
        {
            temp += inp[i];
        }
        i++;
    }

    //converting string array into int array
    int int_str[temp.length()];
    string t_str;
    for(i = 0 ; i < temp.length() ; i++)
    {
        t_str = temp[i];
        int_str[i] = stoi(t_str);
    }

    // sorting int_str
    int t;
    int j;

    for( i = 0 ; i < temp.length() ; i++)
    {
        for(j =  i+1 ; j <= temp.length();  j ++)
        {
            if(int_str[i] > int_str[j])
            {
                t = int_str[i];
                int_str[i] = int_str[j];
                int_str[j] = t;
            }
        }
    }
    // converting int_str into string 
    string str_arr;
    for(i = 0 ; i < temp.length() ; i++)
    {
        str_arr += to_string(int_str[i]);
    }

    // adding '+' in the str_arr
    string t1  , t2;  
    string out;
    int len = str_arr.length();
    for( i = 0 ; i < len ; i++)
    {
        t1 = str_arr[i];
        if(i != len -1)
        {
            t2 = t1 + '+';
        }
        else
        {
            t2 = t1;
        }
        out += t2;
    }
    cout<<out;
} 