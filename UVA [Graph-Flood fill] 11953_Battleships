

#include <stdio.h>

char NA[101][101];
char str[101][101];
int T, N, count;

void find(int a,int b){
NA[a][b]=’.';

if(a<N && NA[a+1][b]==’x’ || NA[a+1][b]==’@’)
find(a+1,b);

if(b<N && NA[a][b+1]==’x’ || NA[a][b+1]==’@’)
find(a,b+1);

}

int main()
{

int cas=0;
scanf(“%d”, &T);
while(T–) {
count=0;
cas++;

scanf(“%d”,&N);

for(int i=0;i<N;i++) {
scanf(“%s”,str[i]);
for(int j=0;j<N;j++)
{
NA[i][j]=str[i][j];
}
getchar();
}

for(int i=0;i<N;i++){
for(int j=0;j<N;j++){
if(NA[i][j]==’x’)
{
count++;
find(i,j);

}

}
}

printf(“Case %d: %d\n”, cas, count);
}

return 0;
}
