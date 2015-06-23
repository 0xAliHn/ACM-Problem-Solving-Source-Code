

#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;
#define MAX 205

int T, v, e, f, t, ans;
vector<int> adj[MAX];
vector<int> visited;

int bfs(int s)
{
queue<int> q;
q.push(s);
visited[s]=1;
int tot=0,guard=0;
while(!q.empty())
{
int u=q.front();
q.pop();
tot++;
if(visited[u]==1)guard++;
int l=adj[u].size();
for(int k=0;k<l;k++)
{
int node = adj[u][k];
if(visited[node]==5){
visited[node]=1-visited[u];
q.push(node);
}else if(visited[node]==visited[u])
return -1;

}
}
if (tot==1) return 1;
return min(guard,tot-guard);
}

int main()
{
scanf(“%d”, &T);
while(T–) {
ans = 0;
scanf(“%d %d”,&v,&e);
visited.assign(v+1, 5);
for(int i=0; i<MAX; i++)
adj[i].clear();
for(int i=0;i<e;i++){
scanf(“%d %d”, &f, &t);
adj[f].push_back(t);
adj[t].push_back(f);

}
for (int i=0; i<v; i++)
if(visited[i]==5){
int x=bfs(i);
if(x==-1){
ans=-1;
break;
}
ans+=x;
}

printf(“%d\n”,ans);
}

return 0;
}
