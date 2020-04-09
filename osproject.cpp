#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	a=5;
	b=3;
	int alloc[5][3]={ { 0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};
	int max[5][3]={{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
	int avail[3]={3,3,2};
	int f[a],ans[a],ind=0;
	for(e=0;e<a;++e)
	
	
	 {
	 	f[e]=0;
	 	
	 }
	 int need[a][b];
	 
    for(c=0;c<a;++c){
    	for(d=0;d<b;++d){
    		need[c][d]= max[c][d]-alloc[c][d];
    		
		}
 }
	int y =0;
	for(e=0;e<5;++e)
	{
		for(c=0;c<a;c++)
		{
			if(f[c]==0){
				int flag=0;
				for(d=0;d<b;d++)
				{if(need[c][d] > avail[d]){
					flag =1;
					break;
				}
				}
				if(flag==0){
					ans[ind++]=c;
					for(y=0;y<b;y++)
					avail[y]+=alloc[c][y];
					f[c]=1;
				}			}
		}
	}
	printf("folloing is the safe sequence");
	for(c=0;c<a-1;c++)
	{printf("p%d->",ans[c]);}
		
		printf("p%d",ans[a-1]);
		return 0;

}
