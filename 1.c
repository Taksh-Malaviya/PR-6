#include <stdio.h>
#include <string.h>
 
int main()
{
    char a[100];  
    int i,length,n,b=0;
 
    printf("Enter the name : ");
    gets(a);
    
    length=strlen(a);
 
    for(i=0;i<length;i++)  
    {
    	if(a[i]==a[length-i-1])
    	b++;
 	}
 	if(b==i){
 		printf("string is palindrome");
	 } 
    else{
    	printf("string is not palindrome");
	}
}
