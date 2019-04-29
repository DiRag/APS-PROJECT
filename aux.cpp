#include <bits/stdc++.h>
#include "dijkshastra.cpp"
using namespace std;
#define v 10

int main()
{
    //schools
    bool *check = new bool[10];
    memset(check, false, sizeof(check));

    int graph[v][v] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0},

    };
    /*for(int l=0;l<5;++l)
             {   int i=9;
                 for(int j=0;j<10;++j)
                    cin>>graph[i][j];
                    int m=9;
                 for(int t=0;t<10;++t)
                    cin>>graph[t][m];*/
    for(int i=0;i<3;++i) 
    {               
    vector<pair<int, int>> vect = dijkshastra(graph, 10, i, check);
     for(int j=0;j<10;++j)
     {   if(vect[j].second==0||vect[j].second==1||vect[j].second==2)
             continue;
         else    
              { 
                  cout << "For house " << i+1 << " school " << 10-(vect[j].second + 1) << " is at minimum distance of " << vect[j].first << "\n";
                  break;
              }

     }
    }
    

return 0;
}