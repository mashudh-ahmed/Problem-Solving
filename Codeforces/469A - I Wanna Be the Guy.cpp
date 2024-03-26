#include <bits/stdc++.h>

using namespace std;

int main()
{
	 int n;
	 cin>>n;

	 set<int> levels;

	  int x,y;

	  cin>>x;

	  for(int i=0;i<x;i++)
      {
		  int p;
		  cin>>p;

		  levels.insert(p);
	  }

	  cin>>y;

	  for(int i=0;i<y;i++)
	  {
		  int q;
		  cin>>q;

		  levels.insert(q);
	  }


	  if(levels.size()==n)
      {
           cout<<"I become the guy.";
      }

	  else
      {
         cout<<"Oh, my keyboard!";
      }

	return 0;
}
