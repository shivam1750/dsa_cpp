#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{

    typedef map<string,int> mapType;
    mapType populationMap;

    populationMap.insert(pair<string, int>("Maharashtra", 7026357));
    populationMap.insert(pair<string, int>("Rajasthan", 6578936));
    populationMap.insert(pair<string, int>("Karanataka", 6678993));
    populationMap.insert(pair<string, int>("Punjab", 5789032));
    populationMap.insert(pair<string, int>("West Bengal", 6676291));
    populationMap.insert(pair<string, int>("pune", 9867291));
    mapType::iterator iter;

    cout<<"========Population of states in India==========\n";
    cout<<"\n Size of populationMap"<<populationMap.size()<<"\n";

    string state_name;

    cout<<"\n Enter name of the state :";
    cin>>state_name;

    iter = populationMap.find(state_name);

    if( iter!= populationMap.end() )
        cout<<state_name<<" 's population is "<<iter->second ;  //iter->second === printing the location and coordinate of state 
    else
        cout<<"Key is not populationMap"<<"\n";
        populationMap.clear();
    
    return 0 ;
}