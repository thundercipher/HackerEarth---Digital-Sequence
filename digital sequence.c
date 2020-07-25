    #include<stdio.h>
    int check(int d,int num)
    {
    	while(num)
    	{
    		if(num%10==d)
    			return 1;
    		num/=10;
    	}
    	return 0;
    }
    int main() 
    {
    	int n;
    	scanf("%d",&n);
    	int arr[n],max=0;
    	for(int i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    	for(int i=0;i<10;i++)
    	{
    		int count=0;
    		for(int j=0;j<n;j++)
    		{
    			if(check(i,arr[j]))
    				count++;
    		}
    		if(count>max)
    			max = count;
    	}
    	printf("%d",max);
    	return 0;
    }
