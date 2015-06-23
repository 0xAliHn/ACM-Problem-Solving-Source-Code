

#include<stdio.h>
#include <queue>
using namespace std;

int T, R, C, M, N, W, x, y, Even, Odd;
int NA[105][105];
int fx[8], fy[8];

struct node{
int uu,vv;
node(int a,int b){uu=a; vv=b;}
};

void bfs(int sx,int sy)
{    int l=4;
if(M==N){
fx[0]=-M;fx[1]=M;fx[2]=-M;fx[3]=M;
fy[0]=N;fy[1]=N;fy[2]=-N;fy[3]=-N;
}else if(N==0 || M==0){
if(M==0){
M=N;N=0;}
fx[0]=-M;fx[1]=N;fx[2]=N;fx[3]=M;
fy[0]=N;fy[1]=-M;fy[2]=M;fy[3]=-N;
}else{
l=8;
fx[0]=-M;fx[1]=-N;fx[2]=N;fx[3]=M;
fx[4]=M;fx[5]=N;fx[6]=-N;fx[7]=-M;
fy[0]=N;fy[1]=M;fy[2]=M;fy[3]=N;
fy[4]=-N;fy[5]=-M;fy[6]=-M;fy[7]=-N;
}

queue<node> q;
q.push(node(sx,sy));
NA[sx][sy]=5;
while(!q.empty())
{
node top=q.front();
q.pop();
int count=0;
for(int k=0;k<l;k++)
{
int tx=top.uu+fx[k];
int ty=top.vv+fy[k];
if(tx>=0 && tx<R && ty>=0 && ty<C && NA[tx][ty]!=-1 && NA[tx][ty]!=0)
{
count++;
if(NA[tx][ty]==1){
NA[tx][ty]=5;
q.push(node(tx,ty));
}

}
}
if(count){
if(count%2==0)
Even++;
else Odd++;
}

}

}

int main()
{
int cas=0;
scanf(“%d”, &T);
while(T–) {
cas++;
for(int i=0;i<105;i++)
for(int j=0;j<105;j++)
{
NA[i][j]=0;
}
scanf(“%d %d %d %d”, &R, &C, &M, &N);
for(int i=0;i<R;i++)
for(int j=0;j<C;j++){
NA[i][j]=1;
}

scanf(“%d”, &W);
while(W–){
scanf(“%d %d”, &x, &y);
NA[x][y]=-1;
}

Even=Odd=0;
bfs(0,0);
if(Even==0 && Odd==0) {
Even=1;
Odd=0;
}
printf(“Case %d: %d %d\n”, cas, Even, Odd);
}

return 0;

}
