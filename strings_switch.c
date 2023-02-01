#include<stdio.h>
#include<string.h>
int ascii_int(char*s1);
void int_ascii(int a);
void palindrome(char*s2);
void cancatination(char*s3,char*s4);
char string1[20];     
char string2[20]; 
void individual_char_count(char *s);
int mystrncmp(char*src,char*dst,int n);

int main()
{	
	int opt,a,m,rem,sum=0,temp,n,m1;
	char s1[10];
	char s2[10];
	char *s3=string1;
	char *s4=string2;
	char*s[100];
	int stat=0,c=0;
	int i;
	char src[100];
	char *dst[100];
	while(1)
	{
		printf("0.exit\n 1.ascii to int\n 2.int to ascii\n 3.string palindrome\n 4.string cancatination\n 5.char repeated in string\n 6.search for a string\n");
		printf("select the option:\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 0:
				exit(0);
			case 1:
				printf("enter a string:");
				scanf("%s",s1);
				//char(*fptr)(char);
				//fptr=ascii_int;
				m=ascii_int(s1);
				printf("%d\n",m);
				break;
			case 2:
				printf("enter a number:");
				scanf("%d",&a);
				int_ascii(a);
				break;
			case 3:
				printf("enter a string for checking whether it was palin or not:");
				scanf("%s",s2);
				palindrome(s2);
				break;
			case 4:
				printf("enter string1:");
				scanf("%s",string1);
				printf("enter string2:");
				scanf("%s",string2);
				cancatination(s3,s4);
				break;
			case 5:
				printf("Enter  the string :");
                        scanf("%s",s);
                        individual_char_count(s);
				break;
			case 6:
				printf("enter a string:");
				scanf("%s",src);
				printf("enter a string for search:");
				scanf("%s",dst);
				m1=strlen(src);
				n=strlen(dst);
				for(i=0;i<=(m1-n);)
				{
					stat=mystrncmp(&src[i],dst,n);
					if(stat==0)
					{
						c++;
						i+n;
					}
					i++;
				}
				printf("%d\n",c);
				break;
				
				
			default:
				printf("enter valid option:\n");
		}
		
	}
}



int ascii_int(char *s1)
{
printf("%s received\n",s1);
	int i,sum=0,temp;
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='0')&&(s1[i]<='9'))
		{		
			temp=s1[i]-48;
			sum=sum*10+temp;
		}
		
	}	
		return sum;
}



void int_ascii(int a)
{
	printf("%d is received\n",a);
	int i,rem,temp,c=0;
	char sum[10];
	temp=a;
	while(temp>0)
	{	 
		temp=temp/10;
		c++;
	}	
	temp=a;
	sum[c]='\0';
	for(i=(c-1);i>=0;i--)
	{
		rem=temp%10;
		temp=temp/10;
		sum[i]=rem+48;
	}
	printf("\"%s\"\n",sum);
}




void palindrome(char* s2)
{
	printf("%s is received\n",s2);
	int i,j,l;
	l=strlen(s2);
	for(i=0,j=(l-1);i<=j;i++,j--)
	{
		if(s2[i]==s2[j])
		continue;
		else
		{
			printf("not palindrome");
			exit(1);
		}
	}
	printf("palindrome\n");
}




void cancatination(char *s3,char *s4)
      {
      printf("%s-%s is received from calling\n",s3,s4);
      printf("\n");
    
       int i=0,j=0;  
      while(string1[i]!='\0')  
      {  
            
         ++s3;  
         i++; 
      }  
      while(string2[j]!='\0')  
      {  
          *s3=*s4; 
          s3++;
          s4++;  
          j++;  
      }  
      printf("The concatenated string is %s\n",string1);  
      
     
}  


void individual_char_count(char *s)
{
	int i,j,count=0;
	char d[100];
	strcpy(d,s);
	for(i=0;d[i]!='\0';i++)
	{
		if(d[i]==' ')
		{
		continue;
		}
		count=1;
		for(j=i+1;d[j]!='\0';j++)
		{
			if(d[i]==d[j])
			{
				count++;
				d[j]=' ';
			}
		}
			printf("%c-%d\n",d[i],count);
	}
}





int mystrncmp(char*src,char*dst,int n)
{
int i;
for(i=0;i<n;i++)
{
if(src[i]!=dst[i])
	return 1;
}
return 0;
}













	





































				
				
				
