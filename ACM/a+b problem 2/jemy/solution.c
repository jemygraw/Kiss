#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_INT_LEN 1000
int main(int argc, char* argv[])
{
    	int i; 
	int a_digit,b_digit;
	int times, fixed_str_len;
	int j,k,p;
	int a_str_len, b_str_len, diff_len;
	char a_str[MAX_INT_LEN];
	char b_str[MAX_INT_LEN];
	
	char r_str[MAX_INT_LEN+1];
	int test_case_count;
	int carry_int;
	int temp_sum;
	int remain_sum_digit;

	scanf("%d",&test_case_count);

	for(i=1;i<=test_case_count;i++)
	{
		memset(a_str,NULL,MAX_INT_LEN);
		memset(b_str,NULL,MAX_INT_LEN);
		memset(r_str,NULL,MAX_INT_LEN+1);

		carry_int=0;
		temp_sum=0;
		remain_sum_digit=0;
		p=0;

		scanf("%s %s",a_str,b_str);

		//print 
		printf("Case %d:\n", i);
		printf("%s + %s = ", a_str, b_str);

		//do calculation

		a_str_len=strlen(a_str);
		b_str_len=strlen(b_str);

		if(a_str_len>b_str_len)
		{
			diff_len=a_str_len-b_str_len;
			for(times=1;times<=diff_len;times++)
			{
				for(j=b_str_len-1;j>=0;j--)
				{
					b_str[j+1]=b_str[j];
					b_str[j]='0';

					b_str_len=strlen(b_str);
				}
			}

			fixed_str_len=a_str_len;
		}
		else if(a_str_len<b_str_len)
		{
			diff_len=b_str_len-a_str_len;
			for(times=1;times<=diff_len;times++)
			{
				for(j=a_str_len-1;j>=0;j--)
				{
					a_str[j+1]=a_str[j];
					a_str[j]='0';

					a_str_len=strlen(a_str);
				}
			}

			fixed_str_len=b_str_len;
		}
		else
		{
			fixed_str_len=a_str_len;
		}

		for(k=fixed_str_len-1;k>=0;k--)
		{
			a_digit=a_str[k]-'0';
			b_digit=b_str[k]-'0';

			temp_sum=a_digit+b_digit+carry_int;
			if(temp_sum>=10)
			{
				carry_int=temp_sum/10;
				remain_sum_digit=temp_sum%10;
			}
			else{
				carry_int=0;
				remain_sum_digit=temp_sum;
			}

			//put the remain sum digit
			r_str[p]=remain_sum_digit+'0';
			p++;
		}

		if(carry_int>0)
		{
			//put it to the end of the str
			r_str[p]=carry_int+'0';
		}

		//output result
		for(p=strlen(r_str)-1;p>=0;p--)
		{
			printf("%c",r_str[p]);
		}
		printf("\n");
		if(i!=test_case_count)
		{
			printf("\n");
		}
	}
}