#include<bits/stdc++.h>
void encode(int num_rails,char plain_text[],char cipher_text[])
{
int i=0,j=0,k=0;
for(i=1;i<=num_rails;i++)
    {
if(i==1||i==num_rails)
        {
for(j=i-1;j<strlen(plain_text);j+=2*(num_rails-1))
            {
 cipher_text[k++]=plain_text[j];             
            }                           
        }
else
        {
cipher_text[k++]=plain_text[i-1];
for(j=i-1;j<strlen(plain_text);)
            {
int x=0;
x++;
if(x%2==1)
                {
j=j+2*(num_rails-i);
                }
else
                {
j=j+2*(i-1);                        
                }
cipher_text[k++]=plain_text[j];
            }       
        }
    }
cipher_text[10]='\0';
}
void decode(int num_rails,char cipher_text[],char decrypt_text[],int length)
{
int i=0,j=0,k=0;
int y=strlen(cipher_text);
    //printf("%d\n",y);
for(i=1;i<=num_rails;i++)
    {
if(i==1||i==num_rails)
        {

 for(j=i-1;j<length;j+=2*(num_rails-1))
            {
 decrypt_text[j]=cipher_text[k++];   
                //printf("%d\n",j);         
            }
        }                           
 else
        {   
 decrypt_text[i-1]=cipher_text[k++];
for(j=i-1;j<length;)
            {
int x=0;
x++;
if(x%2==1)
                {
j=j+2*(num_rails-i);
                }
else
                {
j=j+2*(i-1);                        
                }
decrypt_text[j]=cipher_text[k++];
            }   
        }
    }   
}
int main()
{
    char plain_text[100],cipher_text[100],decrypt_text[100];
    printf("ENTER PLAIN TEXT\n");
    scanf("%s",plain_text);
    int num_rails,i;
    printf("ENTER NO OF RAILS\n");
    scanf("%d",&num_rails);
    int x=strlen(plain_text);
    encode(num_rails,plain_text,cipher_text);
    printf("CIPHER TEXT IS:");
    for(i=0;i<=x;i++)
    printf("%c",cipher_text[i]);
    printf("\n");
    printf("DECRYPTED TEXT IS:");
    decode(num_rails,cipher_text,decrypt_text,x);
    for(i=0;i<=x;i++)
    printf("%c",decrypt_text[i]);
}
ENTER PLAIN TEXT
helloworld
ENTER NO OF RAILS
3
CIPHER TEXT IS:holelwrdl
DECRYPTED TEXT IS:hellowrld