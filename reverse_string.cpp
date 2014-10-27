#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
void string_reverse(char* str);
int main()
{
  string test;
  cout << "Please input a string"<<endl;
  getline(cin,test);
  int l=test.length();
  char test2[l+1];
  for(int i=0;i<l;i++) test2[i]=test.at(i); // converting c-string
  test2[l]='\0';
  string_reverse(test2);
  cout<<test2<<endl;
  system("pause");
}
void string_reverse(char* string)
{
     char* tail=string; 
     char temp;
     if(string){
        while(*tail){
           ++tail;
        }
        --tail;
        while(string<tail){
           temp= *string;
           *string++=*tail;
           *tail-- = temp;
        }
     }
}

