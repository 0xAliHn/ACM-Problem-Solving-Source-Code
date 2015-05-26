

#include <stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include <algorithm>
using namespace std;

#define MAX 21

char CA[MAX*2];
char constr[50][2];
map<char, int> maps;
int T, C;
string ans[10000];

int main()
{
scanf(“%d\n\n”,&T);
while(T–){
int count=0;
cin.getline(CA,MAX*2);
int l=strlen(CA);
for(int i=0; i<l; i++){
if(CA[i]!=’ ‘)
CA[count++]=CA[i];
}
CA[count]=”;
char tempStr[4];
tempStr[0]=tempStr[1]=tempStr[2]=”;
int i=0;
while(scanf(“%s”,tempStr)!= EOF){
constr[i][0]=tempStr[0];
constr[i][1]=tempStr[2];
i++;
char ch = getchar();
if(ch==’\n’)
break;
}
int l1=count;
int l2=i;
int validFlag=1;
int ansCount=0;

do{
validFlag=1;
for(int i=0; i<l1+1; i++){
maps[CA[i]]=i;
}

for(int i=0; i<l2; i++){
if(validFlag && maps[constr[i][0]] < maps[constr[i][1]]){
validFlag=1;
}else validFlag=0;
}

if(validFlag){
ans[ansCount++]=CA;
}

}
while (next_permutation(CA, (CA + l1) ) );

if (ansCount==0)
printf(“NO\n”);
for(int i=0; i<ansCount; i++){
printf(“%c”,ans[i][0]);
for(int j=1; j<l1; j++)
printf(” %c”,ans[i][j]);
printf(“\n”);
}
if(T){
printf(“\n”);
scanf(“\n”);
}

}

return 0;
}
