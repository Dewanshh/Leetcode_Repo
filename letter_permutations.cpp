#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class h1
{
    public:
//Add Code Functionality

    
    void solve(vector<string>&ans, string &t,int i,string p){
        if(i>=p.size())
        {
            ans.push_back(t);
            return ;
        }

        if(isalpha(p[i]))
        {
            string gr=t;
            gr.push_back(toupper(p[i]));
            string sm=t;
            sm.push_back(tolower(p[i]));
            solve(ans,gr,i+1,p);
            solve(ans,sm,i+1,p);
            

        }
        else{
            string op=t;
            op.push_back(p[i]);
            solve(ans,op,i+1,p);
        }
        
    }
};


int main()
{
    vector<string>ans;
    string s="";
    string t;
    cin>>t;
    h1 a;
    a.solve(ans,s,0,t);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
}