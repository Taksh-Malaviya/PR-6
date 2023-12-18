#include<stdio.h>
#include<string.h>

void main(){
	
	char a[100];
	int count=0;
	int i,c;
	
	printf("Enter the name : ");
    gets(a);
	
	for(c='a';c<='z';c++|| c='A';c<='Z';c++ ){
            count=0;
		for(i=0;a[i]!=NULL;i++){
			if(c==a[i]){
				count ++;
			}
			printf("%c => %d\n",c,count);
		}
	}
	
	
}
