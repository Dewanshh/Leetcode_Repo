#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class h1
{

public:
//Add Code Functionality
    unordered_set<string>ans;
    unordered_map<int,int>m;
    void solve(string tiles,string s)
    {
      
      int n=tiles.size();
      for(int i=0;i<n;i++)
      {
        if(m[i]==0)
        {
          m[i]=1;
          s.push_back(tiles[i]);
          ans.insert(s);
          solve(tiles,s);
          m[i]=0;
          s.pop_back();
        }
      }
    }
    
};


int main()
{
    string s;
    cin>>s;

    h1 ha;
    string p="";
    ha.solve(s,p);
    //code
    cout<<ha.ans.size();
}