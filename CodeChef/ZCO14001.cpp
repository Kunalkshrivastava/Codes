#include <iostream>
using namespace std;

int main(void) {
	// your code goes here
	long long N,H,c;
	long long i, pick;
	cin>>N;
	cin>>H;
	int arr[N];
	for(i=0; i< N; i++)
	    cin>>arr[i];

    i=0;
    pick=-1;
	while(1)
	{
	    cin>>c;
	    switch(c)
	    {
	        case 1:
	            if(i!=0)
	                --i;
	            break;
	        case 2:
	            if(i<N-1)
	                ++i;
	            break;
	        case 3:
	            if(pick == -1 && arr[i] !=0)
	            {
	                pick = i;
	                arr[pick] = arr[pick] - 1;
	            }
	            break;
	        case 4:
	            if(pick != -1 && arr[i] < H)
	            {
	                arr[i] = arr[i] + 1;
	                pick = -1;
	            }
	            break;
	        case 0:
	            break;
	    }
	    
	    if(c == 0)
	        break;
	        
	}
		for(i=0; i< N; i++)
	        cout<<" "<<arr[i];
	return 0;
}

