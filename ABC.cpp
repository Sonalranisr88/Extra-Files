// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main(){
     char str[20];
     int i;
     int curr_st,init_st,final_st;
     curr_st=init_st='A';

     final_st='C';
     cout<<"Enter the string: ";
     cin>>str;
     i=0;
     while(str[i]!='\0'){
         cout<<"Current state:"<<(char)curr_st;
         cout<<"\n Chararcter read: "<<str[i];
         
         switch(curr_st){
             case'A':switch(str[i]){
                 case 'a':curr_st='B';break;
                 case 'b':curr_st='A';break;
                 default:curr_st=-1;
             }
             break;
             case'B':switch(str[i]){
                case 'a':curr_st='C';break;
                case 'b':curr_st='B';break;
                default:curr_st=-1;
            }
            break;
            case'C':switch(str[i]){
                case 'a':curr_st='C';break;
                case 'b':curr_st='C';break;
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