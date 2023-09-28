//Using if else

#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;

int i=1;
while(i<=n){

if(i%5==0 && i%7==0){
    cout<<"cheem doge"<<endl;

}
else if(i%7==0){
    cout<<"doge"<<endl;
}
else if(i%5==0){
    cout<<"cheem"<<endl;
}
else{
    cout<<i<<endl;
}
i++;
}

return 0;
}



//Using Switch
#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;

for(int i=1;i<=n;i++){
    switch(0){
        case 0:
        if (i % 5 == 0 && i % 7 == 0) {
         cout<<"cheem doge"<<endl;
         break;
        }
        case 1:
        if (i % 7 == 0) {
        cout<<"doge"<<endl;
        break;
        }
        case 2:
        if (i % 5 == 0) {
        cout<<"cheem"<<endl;
        break;
        }
        default:
        cout<<i<<endl;
        break;
    }
}
return 0;
}
