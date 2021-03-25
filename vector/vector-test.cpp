#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>



using namespace std;

int main(){

    int array[3];

  // vector<int> vec(3,0); // this vector contain 3 element and all the element value will be 0
  vector<int> vec;
   vector<int>::iterator it;

   for(int i=1;i<=5;i++){
        vec.push_back(i);
   }
//    vec.push_back(11);
//    vec.push_back(34); //vec[0]=32
//    vec.push_back(10); //vec[1]=10
//    vec.push_back(11); //vec[3]=11

//    printf("%d\n",vec[1]);
    cout<<vec.size()<<endl;

    for(int i=0;i<vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    puts(""); //newline in vector

    it = vec.begin(); // iterator is act as an pointer
//    it++;
    cout<<*it<<endl;









    return 0;
}
