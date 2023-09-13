// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main(){
     char str[20];
     int i;
     int curr_st,init_st,final_st;
     curr_st=init_st="A"

     final_st="B";
     cout<<"ENter the string";
     cin>>str;
     i=0;
     while(str[i]!='\0'){
         cout<<"\n Chararcter read: "<<str[i];
         cout<<"Current state:"<<curr_st;
         switch(curr_st){
             case'A':switch(str[i]){
                 case '0':curr_st='B';break;
                 case '1':curr_st="B";break;
                 default:curr_st=-1;
             }
             break;
             case'B':switch(str[i]){
                case '0':curr_st='B';break;
                case '1':curr_st="B";break;
                default:curr_st=-1;
            }
            break;
         }
     i++;
     }

if(curr_st==final_st){
    cout<<"String is VALID\n";
}
else
cout<<"String is INVALID\n";
}