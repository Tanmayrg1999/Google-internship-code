#include<iostream>
#include<string>
using namespace std;
int check(char a,char b)
{
	if(a>b)
	{
		return 1;	
	}
	else
	{
		return 0;
	}	
}
int main()
{
	string str;
	cout<<"Enter the string:"<<endl;
	getline(cin,str);
	int len=str.length();
	cout<<"String is: "<<str<<endl<<"Lenght is: "<<len<<endl;
	int count=01;
	for(int i=0;i<len-3;i++)
	{
		if(str[i]!=str[i+1])
		{
		if(check(str[i],str[i+1])==check(str[i+1],str[i+2]))
		{
			continue;
		}
		else
		{
			count++;
		}
	}
	else
	{
		continue;
	}
	}
	cout<<"total possible is"<<count;
}
