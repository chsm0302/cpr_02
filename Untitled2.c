#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int divide_number(int divided_number[],int input)	
{
	int ten_square;
	int cipher=0;
	
	for(ten_square=1 ;  ; ten_square*10) 
	{
		if(ten_square<divided_number)
			break;
	}
	
	for(ten_square ; ten_square>0 ; ten_square/=10)  
	{
		divided_number[cipher]=input/ten_square;
		divided_number[cipher]%=10;
		cipher++;
	}
	return cipher;
}

bool solution(int x) 
{
    bool answer = true;
    
    return answer;
}

int main(void)
{
	unsigned input_value;
	bool result;
	int divided_number[10000]={0,};
	
	scanf("%d",&input_value);
	
	result=solution(input_value);
	
	if(result==true)
		printf("true");
	else
		printf("false");
	
	divide_number(divided_number,input_value);
	printf("%d",divided_number[0]);	
	
}
