


void sieve(ll n)
{

	bool prime[n + 1];
	memset(prime,true,sizeof(prime));

	for (ll p=2;p*p<=n;p++) 
	{
		
		if(prime[p]==true) 
		{

			for (ll i =p*p;i<=n;i+=p)
			{
				prime[i]=false;
			}
		}
	}

	
	
}
