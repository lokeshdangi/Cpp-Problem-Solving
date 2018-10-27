#include<iostream>
using namespace std;

int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer + c) != '\0' )
      c++;
   return c;
}


void reverse(char *s)
{
   int length, c;
   char *begin, *end, temp,temp1;;
 
   length = string_length(s);
   begin  = s;
   end    = s;

   for (c = 0; c < length-1; c++)
      end++;
    for(int c =0; c < length/2;c++){
    	cout << *begin << " " <<*end << ",";
    	temp   = *end;
       *end   = *begin;
       *begin = temp;
 
      begin++;
      end--;
    	
	}
}


int main(){
	char * str = "lokesh";
	reverse(str);
}
