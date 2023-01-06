1.
### Problem 1 
nt k=1;
while(k<=n){
	cout<<k<<endl;
	k=k*2;
}

Time Complexity = O(1+1+n+1)
                = O(n);

### Problem 2

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;

Time Complexity = O(n+n*n);
                = O(n^2);

### Problem 3

for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

Time Complexity = O(n+1+1)
                = o(n)

### Problem 4
for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j*2){
   		cout<<i<<j<<endl;
	}
}

Time Complexity = O(n*n)
                = O(n^2)

### Problem 5 

for(int i=n/2;i<=n;i++){
	for(int j=1;j<=n;j=j+i){
   		cout<<i<<j<<endl;
	}
}


Time Complexity = O(n*n)
                = o(n^2)


### Problem 6 

for(int i=1;i<=n;i++)
{
	if(builtin_popcount(i) == 1)
	{
		for(int j=1;j<=n;j++)
			cout<<i<<j<<endl;
	}
}

Time Complexity = O(n+n*n+n)
                = o(n^2)

