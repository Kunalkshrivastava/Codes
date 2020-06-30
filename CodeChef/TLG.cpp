#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int N; cin>>N;
    int p1, p1_total = 0, p2, p2_total = 0, k,temp, winner, max_lead = 0;
    for(int i=0; i<N; i++)
    {
        cin>>p1>>p2;
        p1_total += p1; p2_total += p2; // sum of scores of player1 and player2 till the current round
        if(p2_total>p1_total)
        {
            temp = p2_total-p1_total; // temp is -ve if player1 is in lead after the current round 
            k=2;
        }
        else
        {
           temp = p1_total-p2_total;
            k =1;
        }
        
        if (max_lead < temp)
        {
            max_lead = temp;
            winner = k;
        }
    }
    cout<<winner<<" "<<max_lead;
 
}
