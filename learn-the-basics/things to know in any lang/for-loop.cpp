#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        int num1,num2,sum;
        if(n==1 || n==2){
                sum=1;
        }
        else{
                num1=1;
                num2=2;
                for(int i=2;i<n-1;i++){
                        sum=num1+num2;
                        num1=num2;
                        num2=sum;
                }

        }
        cout<<sum;
}