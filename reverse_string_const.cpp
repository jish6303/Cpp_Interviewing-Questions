#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
char *string_reverse2(const char* string);
int main()
{
  string test;
  cout << "Please input a string"<<endl;
  getline(cin,test);
  int l=test.length();
  char test2[l+1];
  char* test3;
  for(int i=0;i<l;i++) test2[i]=test.at(i); // converting c-string
  test2[l]='\0';
  test3=string_reverse2(test2);
  cout<<test3<<endl;
  system("pause");
}
char *string_reverse2(const char* string)
{
     int i=0;
     while(string[i]!='\0')
     {
        i++;
     }
     char* another_str=new char[i];
     another_str[i]='\0';
     int j=i-1;
     i--;
     for(int k=0;k<=j;k++)
     {
        another_str[k]=string[i];
        i--;
     }
     return another_str;
}
