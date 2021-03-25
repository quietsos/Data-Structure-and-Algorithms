#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>


using namespace std;

int main(){

    int array[3];

    vector<int> vec;
    vec.push_back(34); //vec[0]=32
    vec.push_back(10); //vec[1]=10
    vec.push_back(11); //vec[3]=11

    //cout<<vec;
    printf("%d\n",vec[1]);
    cout<<vec.size()<<endl;

    for(int i=0;i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }







    return 0;
}
