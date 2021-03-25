#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>



using namespace std;

int main(){


    //iterator create in int size vector
   vector<int> vec;
   vector<int>::iterator it;
//
//   //iterator create in double size vector
//   vector<double> vec1;
//   vector<double>::iterator it2;
//   it2=vec1.begin();
//
//   //interator create in char size vector
//   vector<char> vec2;
//   vector<char>::iterator it3;
//   it3 = vec2.begin();

   for(int i=1;i<=5;i++){
    vec.push_back(i);
   }


   for(int i=0;i<=vec.size();i++){
    cout<<vec[i]<<"\t";

   }

    puts(" ");

    it=vec.begin();
    it++;
    cout<<*it<<endl;

    //print vector element using iterator
    for(it = vec.begin();it != vec.end(); it++){
        cout<<*it<<endl;
    }





    return 0;
}
