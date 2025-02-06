#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   /* swap num
	int a=10;
	int b=90;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<" "<<b<<endl;
	*/
	/* check nth bit
	int a=13;
	int x;
	x=(a>>3)&1;
	if(x==0)
	{
		cout<<"unset"<<endl;
	}
	else
	{
		cout<<"set"<<endl;
	}
    time and space O(1)
	*/
	/* deci to bin
	for (int i = 31; i>=0; i--)
   {
   	int x;
   	x=(n>>i)&1;
	if(x==0)
	{
		cout<<"0";
	}
	else
	{
		cout<<"1";
	}
   }
   */
	/* unset to set
	int a=9;
	cout<<(a|(1<<2))<<endl;
	*/
	/* set to unset
	int a=13;
	cout<<(a&(~(1<<2)))<<endl;
	*/
	/* toggle nth bit
	int a=13;
	cout<<(a^(1<<1))<<endl;
	*/
	/* remove the last set bit(right most)
	Good implimantation
	int a=13;
	cout<<(a&(a-1))<<endl;
	*/
	/* check power of 2
	int a=65;
	if((a&(a-1))==0)
	{
		cout<<"power"<<endl;
	}
	else
	{
		cout<<"not power"<<endl;
	}
	*/
	/* count set bits
	int a=31;
	int ct=0;
	while(a!=0)
	{
       a=(a&(a-1));
       ct++;
	}
	cout<<ct<<endl;
	time O(set_bits)
	*/
	/* minimum flip bits to current a number 
	start a=2 goal b=5
	ans is set bit count
	*/
	/* Find a single number from an array(when every number appears twice)
	int nums[]={5,1,2,1,2};
	int Xor=0;
	for(int i=0;i<5;i++)
	{
		Xor=Xor^nums[i];
	}
	cout<<Xor<<endl;
	time O(n)-optimal sloution
	by using map it is O(nlogm)
	*/









}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	//int t;
	//cin>>t;
	//while(t--)
	//{
		solve();
	//}
	return 0;

}

