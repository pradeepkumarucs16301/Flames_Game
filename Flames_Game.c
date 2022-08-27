#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
     int i,j,n,l,m=0;
     char s1[1000],s2[1000],s3[2000];
     printf("//Its for Fun!!\n");
     char a[]={'F','L','A','M','E','S','\0'};
     printf("Enter Boy Name: \n");
     scanf("%s",s1);
     printf("Enter Girl Name: \n");
     scanf("%s",s2);
     for(i=0;i<strlen(s1);i++)
     {
         for(j=0;j<strlen(s2);j++)
         {
             if(s1[i]==s2[j])
             {
                 s1[i]='0';
                 s2[j]='0';
                 break;
             }
         }
     }
     for(i=0;i<strlen(s1);i++)
     {
         if(s1[i]!='0')
         {
            s3[m++]=s1[i];
         }
     }
     for(i=0;i<strlen(s2);i++)
     {
         if(s2[i]!='0')
         {
             s3[m++]=s2[i];
         }
     }
     n=m;
     int o=n%6,c=1,k=1;
     a[o-1]='*';
     j=o;
     while(j<6)
     {
         if(a[j]!='*' && c!=n)
         {
             if(j==5)
             {
                 j=0;c++;
             }
             else
             {
                 j++;c++;
             }
         }
         else if(a[j]!='*' && c==n)
         {
             a[j]='*';c=1;k++;
             if(j==5)
             {
                 j=0;
             }
             else
             {
                 j++;
             }
         }
         else if(a[j]=='*')
         {
             if(j==5)
             {
                 j=0;
             }
             else
             {
                 j++;
             }
         }
         
         if(k==5)
         {
             break;
         }
     }
     for(i=0;i<6;i++)
     {
         if(a[i]!='*')
         {
             //printf("%c",a[i]);
             if(a[i]=='F')
             {
                printf("FRIENDS");
             }
             else if(a[i]=='L')
             {
                printf("LOVE");
             }
             else if(a[i]=='A')
             {
                printf("AFFECTION");
             }
             else if(a[i]=='M')
             {
                printf("MARRIAGE");
             }
             else if(a[i]=='E')
             {
                printf("ENIMIES");
             }
             else
             {
                printf("SISTER");
             }
         }
     }
     
}
