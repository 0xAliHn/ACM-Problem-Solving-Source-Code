

#include <stdio.h>
#include<vector>

using namespace std;
#define MAX 100005

int T, n, m, x, y, ans;
vector<int> graph[MAX];
vector<int> visited;
vector<int> store;

void DFS(int s)    ///Traverse and store all nodes as LIFO order.
{
visited[s]=1;
for(int i=0; i<graph[s].size(); i++)
{
if(visited[graph[s][i]]==0)
{
DFS(graph[s][i]);
}
}
store.push_back(s);
}

void DFS2()      ///Traverse again to find out previous DFS root nodes.
{
visited.assign(n+1,0);
int i , j;
j = store.size()-1;
for(i=j; i>=0; i–)
{
if(visited[store[i]]==0)
{
DFS(store[i]); ///To make root connected nodes visited. So, that only root node counted.
ans++;
}

}
}

int main()
{
scanf(“%d”, &T);
while(T–) {
ans=0;
store.clear();
scanf(“%d %d”,&n,&m);
visited.assign(n+1, 0);
for(int i=0; i<MAX; i++)
graph[i].clear();
for(int i=1;i<=m;i++){
scanf(“%d %d”, &x, &y);
graph[x].push_back(y);

}

for (int i=1; i<=n; i++){
if(visited[i]==0){
DFS(i);
}
}
DFS2();
printf(“%d\n”,ans);
}

return 0;
}
