class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    int n=A.size();
		    string str="";
		    map<char,int>mp;
		    queue<char>q;
		    for(int i=0;i<n;i++)
		    {
		        mp[A[i]]++;
		        q.push(A[i]);
		        while(!q.empty() && mp[q.front()]>1)
		        {
		            q.pop();
		        }
		        if(q.empty())
		        {
		            str+='#';
		        }
		        else
		        {
		            str+=q.front();
		        }
		    }
		    return str;
		}

};
