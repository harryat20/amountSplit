#include<iostream>
using namespace std;

int main(){
    int amt;
    cout<<"Enter the amount :";
    cin>>amt;
    
    int hun,fif,twe,one;

    hun = amt/100;
    amt = amt - (hun*100);

    fif = amt/50;
    amt = amt - (fif*50);

    twe = amt/20;
    amt = amt - (twe*20);

    one = amt;

    cout<<amt<<" contains : "<<endl;
    cout<<hun<<" Rs Hundred notes."<<endl;
    cout<<fif<<" Rs Fifty notes."<<endl;
    cout<<twe<<" Rs Twents notes."<<endl;
    cout<<one<<" Rs one notes."<<endl;

}