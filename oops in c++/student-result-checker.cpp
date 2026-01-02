#include <iostream>
using namespace std;
class student{
private:
 int rno;
 string name;
 double marks;
 bool ispassed;
public:
 student(int rno, string name,double marks){
     this->rno=rno;
     this->name=name;
     this->marks=marks;
     if(marks>=40){
         ispassed=true;
     }
     else{
         ispassed=false;
     }
 }
 void checkresult(){
     if(ispassed){
         cout<<"pass"<<endl;
     }
     else{
         cout<<"fail"<<endl;
     }
 }
 void display(){
     cout<<"student name : "<<name<<endl;
     cout<<"students rno : "<<rno<<endl;
     cout<<"students marks : "<<marks<<endl;
     cout<<"student result : ";
     checkresult();
 }
};
int main(){
    student s1(54,"kashish",89);
    student s2(55,"anushka",35);
    s1.display();
    cout<<endl;
    s2.display();
}