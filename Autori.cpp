#include<iostream>
#include<string>

using namespace std;

int main()
{
    string inputstr;
    cin>>inputstr;
   // cout<<inputstr.length();
    
    size_t found=-1;
    do{
    	found++;
    	cout<<inputstr[found];
    	found=inputstr.find('-',found);
	}while(found!=string::npos);
    
    return 0;
}
