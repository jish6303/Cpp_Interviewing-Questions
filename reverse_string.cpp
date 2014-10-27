#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
void reverse(char* str);
int main()
{
  string test;
  cout << "Please input a string"<<endl;
  getline(cin,test);
  int l=test.length();
  char test2[l+1];
  for(int i=0;i<l;i++) test2[i]=test.at(i); // converting c-string
  test2[l]='\0';
  reverse(test2);
  cout<<test2<<endl;
  system("pause");
}
void reverse(char* str)
{
     char* tail=str; 
     char temp;
     if(str){
        while(*tail){
           ++tail;
        }
        --tail;
        while(str<tail){
           temp= *str;
           *str++=*tail;
           *tail-- = temp;
        }
     }
}

