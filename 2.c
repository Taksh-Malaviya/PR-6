/*Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome*/
#include<stdio.h>
#include<string.h>

void main(){
	
	char a[100];
	int count=0;
	int i,c;
	
	printf("Enter the name : ");
    gets(a);
	
	for(c='a';c<='z';c++ ){
            count=0;
		for(i=0;a[i]!=NULL;i++){
			if(c==a[i]){
				count ++;
			}
			printf("%c => %d\n",c,count);
		}
	}
	
	
}
