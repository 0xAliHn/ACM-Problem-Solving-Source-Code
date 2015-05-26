

#include <stdio.h>
#include <string.h>

char NA[21][21];
char str[21][21], land;
int M, N, X, Y, count, max;

void find(int a,int b){
NA[a][b]=’0′;
count++;
if(a>0 && NA[a-1][b]==land)
find(a-1,b);

if(a<M && NA[a+1][b]==land)
find(a+1,b);

if(NA[a][(b-1+N)%N]==land)
find(a,(b-1+N)%N);

if(NA[a][(b+1+N)%N]==land)
find(a,(b+1+N)%N);

}

int main()
{

while(scanf(“%d”,&M) != EOF){
for(int i=0;i<21;i++)
for(int j=0;j<21;j++)
{
NA[i][j]=0;
str[i][j]=0;
}

max=0;
count=0;
scanf(“%d”,&N);

for(int i=0;i<M;i++) {
scanf(“%s”,str[i]);
for(int j=0;j<N;j++)
{
NA[i][j]=str[i][j];
}
getchar();
}
scanf(“%d %d”, &X, &Y);

land = NA[X][Y];
find(X,Y);

for(int i=0;i<M;i++){
for(int j=0;j<N;j++){
if(NA[i][j]==land)
{
count=0;
find(i,j);
if(count>max)
max=count;
}

}
}

printf(“%d\n”,max);
}

return 0;
}
