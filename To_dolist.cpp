#include <iostream>
#include<vector>
#include<string>
using namespace std;
string choice;
string one;
int numm;
void all(){
cout<<"\n________________________________________\n";
cout<<"\n______________todo list_________________\n";
cout<<"\n________________________________________\n";
         }
void des()
{
 cout<<"\n            TO DO LIST                  \n";
    cout<<"\n       manage your time           "<<endl;
    cout<<"\n";
    cout<<"      1:     Add  your tasks              "<<endl;
    cout<<"      2:     number your tasks              "<<endl;
    cout<<"      3:     See   your tasks              "<<endl;
    cout<<"      4:     delete your tasks             "<<endl;
    cout<<"      5:    update your tasks              "<<endl;
    cout<<"      6:    EXIT                    "<<endl;


cout<<"\n  choice :";cin>>numm;
}

void add(vector<string>&tasks)
{
all();
cout<<"\n";
int i=0;
    string one;
do
{

cout<<"ENTER YOUR TASKS or enter x to menu\n";
if(i==0)
cin.ignore(1,'\n');


   getline(cin,one);

cout<<"\n";
 if(one!="x"){
 tasks.push_back(one);}
i++;

}while(one!="x");
}
void number(vector<string>&tasks)
{
  all();
  cout<<"YOU HAVE "<<tasks.size()<<" TASKS"<<endl;
}
void store(vector<string>&tasks)
{
all();
for(int i=0;i<tasks.size();i++)
{
cout<<"task"<<i+1<<" :"<<tasks[i]<<endl;
}

}
void delte(vector<string>&tasks)
{
 store(tasks);
  vector<string>::iterator i=tasks.begin();
  cout<<"x:Clear all or num of element  \n";
    string id;
cin>>id;
if(id!="x"){
int m=stoi(id);
tasks.erase(i+(m-1));
}
if(id=="x")
tasks.clear();

cout<<"tasks after deletation \n\n";
for(int i=0;i<tasks.size();i++)
{
cout<<"task"<<i+1<<" :"<<tasks[i]<<endl;
}



}
void update(vector<string>&tasks)
{
 store(tasks);
 vector<string>::iterator i=tasks.begin();
    cout<<"Enter num of elemnt you want \n ";
   cout<<"num of element :";
   int num;
    cin>>num;
   string val;
    if(num>0){
    cout<<"your update :";
    cin.ignore(1,'\n');
    getline(cin,val );
    i[num-1]=val;
cout<<"\n\n";
    }
 cout<<"tasks after update\n\n";
for(int i=0;i<tasks.size();i++)
{
cout<<"task"<<i+1<<" :"<<tasks[i]<<endl;
}


}
int exit(){
return 0;
}
void tomenu(){
cout<<"any number To menu    \n";
cout<<"your choice :";
cin>>choice;
}
void run(vector<string>n)
{

des();

 if(numm==1){
   system("cls");
    add(n);
 if(one=="x"){
   system("cls");
   run(n);
 }
 }
 if(numm==2){
   system("cls");
   number(n);
tomenu();
if(choice=="1"){
system("cls");
run(n);
}
   }
 if(numm==3){
    system("cls");
    store(n);
tomenu();
    if(choice=="1"){
system("cls");
run(n);
    }
}
 if(numm==4)
     {
      system("cls");
      delte(n);
 tomenu();if(choice=="1"){system("cls");
run(n);
 }
     }
 if(numm==5){
system("cls");
update(n);
tomenu();
system("cls");
run(n);
}
if(numm==6){
cout<<exit();}
else{system("cls");run(n);}
}
int main()
{
vector<string>k;

 run(k);
    return 0;
}
