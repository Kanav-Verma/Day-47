#include <stdio.h>
#include <string.h>
int main (){
    
int a1[26],a2[26],num,i;
char str1[100],str2[100];
printf("Enter string 1 \n");
fgets(str1,sizeof(str1),stdin);

printf("Enter string 2 \n");
fgets(str2,sizeof(str2),stdin);
if(strlen(str1)!=strlen(str2))
return 0;
else{
    for(int i=0;i<26;i++){
        a1[i]=0;
        a2[i]=0;
    }
       for(int i =0 ;i<strlen(str1);i++){
           num=(int)str1[i]-97;
           a1[num]++;
           
       }
       for(int i =0 ;i<strlen(str2);i++){
           num=(int)str1[i]-97;
           a2[num]++;
           
       }
int flag = 0;
for(i=0;i<26;i++){
    if(a2[i]== a1[i])
    continue;
    else 
    flag=1;
    break;
}
 if(flag==0)
 printf("Anagram");
 else 
 printf("Not Anagram");
    
}
    return 0;
}
