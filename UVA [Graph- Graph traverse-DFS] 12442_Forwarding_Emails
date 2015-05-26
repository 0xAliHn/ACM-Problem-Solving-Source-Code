

#include <stdio.h>
#include<vector>

using namespace std;

int T, N, u, v, maxV, vertex;
vector<int> graph;
vector<int> visited;
vector<int> count;

int DFS(int s)
{
visited[s]=1;
int temp=0;
printf(“s= %d \n”,s);
if(graph[s] != -1 && !visited[graph[s]])
temp+=1+DFS(graph[s]);
visited[s]=0;
printf(“temp= %d s= %d \n”,temp,s);
return count[s]=temp;

}

int main()
{
int cas=0;
scanf(“%d”, &T);
while(T–) {
maxV=0;
cas++;

scanf(“%d”,&N);
graph.assign(N+1, -1);
visited.assign(N+1, 0);
count.assign(N+1, -1);

for(int i=0;i<N;i++){
scanf(“%d %d”, &u, &v);
graph[u]=v;
}

for(int i=1;i<=N;i++){
if(count[i] == -1)
DFS(i);
printf(“count[%d]= %d \n”, i, count[i]);
if (count[i]>maxV){
maxV=count[i];
vertex = i;
}

}
printf(“Case %d: %d\n”, cas, vertex);
}

return 0;
}
