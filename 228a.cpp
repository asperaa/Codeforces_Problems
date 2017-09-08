#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[4];

	for(int i=0;i<4;i++)
		cin>>a[i];
	int sim=0;

	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]==a[j]){

				sim++;
			}
		}

			if(sim>=2){
				break;

			}


}

cout<<sim;

return 0;
}




