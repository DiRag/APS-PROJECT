
#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pi;
vector<pair<int, int>> min_dist (int key[], int n)
{
    vector<pair<int,int>> vect;
    for(int i=0;i<n;++i)
       vect.push_back(make_pair(key[i],i));
       sort(vect.begin(),vect.end());
       return vect;
}
bool find(bool *check, int t)
{
    if (check[t] == true)
        return false;
    else
        return true;
}
vector<pair<int,int>> dijkshastra(int graph[][10], int n, int u, bool check[])
{
    int *p = new int[n];
    int *key = new int[n];
    //priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<pi, vector<pi> ,greater<pi>> pq; 
    //priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i<n; ++i)
    {  
        if (graph[u][i]!=0)
        {
            p[i] = u;
            key[i] = graph[u][i];
        }
        else if(graph[u][i]==0)
        {
            p[i] = -1;
            key[i] = INT_MAX;
        }
    }
    key[u] = 0;
    for (int i = 0; i < n; ++i)
    {
        pq.push(make_pair(key[i],i));
    }
    //vector<int> arr;
    while (!pq.empty())
    {
        pair<int,int> t = pq.top();
        pq.pop();
        check[t.second]=true;

        for (int i = 0; i < n; ++i)
        {  if(i==t.second)
               continue;

            else if (graph[t.second][i])
            {
                if (find(check,i))
                {   
                    if (((graph[t.second][i] + key[t.second]) < key[i])&&(key[t.second]!=INT_MAX))
                    {
                        
                        key[i] = graph[t.second][i] + key[t.second]; 
                        p[i] = t.second;
                        //cout<< t.second<< " " <<i <<" " << key[i]<<" \n";
                        
                    }
                    
                 }
                }
            }
    //cout<<endl;
    }
    return min_dist(key, n);
}

/*int main()
{
    int n, u;
    cin >> n;
    int **graph = new int *[n];
    for (int i = 0; i < n; ++i)
    {
        graph[i] = new int[n];
        for (int j = 0; j < n; ++j)
            cin >> graph[i][j];
    }
    cin >> u;
    //cout << "vfdvs";
    bool *check = new bool[n];
    memset(check, false, sizeof(check));
    //check[u]=true;
    dijkshastra(graph, n, u, check);

    return 0;
}*/
