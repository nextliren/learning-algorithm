#include<iostream>
#include<math.h>
using namespace std;
void statistics(double a[],int n,double *max,double *min,double *avg,double *stdev);
int main(){
	double x[1000];
	double Max,Min,Avg,Stdev;
	
	int i=0;
	cin>>x[i];
	while(x[i]!=-9999){
		i++;
		cin>>x[i];
	}
	statistics(x,i,&Max,&Min,&Avg,&Stdev);
	cout<<Max<<" "<<Min<<" "<<Avg<<" "<<Stdev; 

	return 0;
	
} 
void statistics(double a[],int n,double *max,double *min,double *avg,double *stdev){
	int i=0;
	double Sum=0,Esum=0;
	*max=a[i];
	*min=a[i];
	
	for(i=0;i<n;i++){
		Sum+=a[i];
		if(a[i]>*max){
			*max=a[i];
		}
		if(a[i]<*min){
			*min=a[i];
		}
	}
	*avg=Sum/n;
	for(i=0;i<n;i++){
		Esum+=(a[i]-*avg)*(a[i]-*avg) ;
	}
	*stdev=sqrt(Esum/n);
}
