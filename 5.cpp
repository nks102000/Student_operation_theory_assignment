/*WAP using classes, objects and constructors to represent the
class student with following specification
Private members
Roll no Name6 subjects
markTotal
Public members function to
Accept values from input device to calculate
the grand total and display grade.
Calculate the total marks*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char *name;
    int roll;
    float *marks;
    float total;
    char grade;
    public:
    void get(char *n,int r,float *m){
        name=new char[strlen(n)];
        name=n;
        roll=r;
        marks=new float[6];
        for (int i = 0; i < 6; i++)
        {
            marks[i]=m[i];
        }
        total=0;
        for (int i = 0; i < 6; i++)
        {
            total=total+marks[i];
        }
        
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout<<"Marks of subject "<<i+1<<"is: "<<marks[i]<<endl;
        }
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Grade: "<<grade<<endl;

    }
    void set_grade(){
        int tot=total/5;
        if(tot>=90){
            grade='O';
        }
        else if(tot>=80){
            grade='E';
        }
        else if(tot>=70){
            grade='A';
        }
        else if(tot>=60){
            grade='B';
        }
        else if(tot>=50){
            grade='C';
        }
        else if(tot>=40){
            grade='D';
        }
        else if(tot>=30){
            grade='E';
        }
        else if(tot>=0){
            grade='F';
        }
    }
};

int main(){
    int n;
    char name[50];
    int roll;
    float marks[6];
    cout<<"Enter the number of student details you want to input:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll: ";
        cin>>roll;
        for (int i = 0; i < 6; i++)
        {
            cout<<"Enter marks of subject "<<i+1<<": ";
            cin>>marks[i];
        }
        s[i].get(name,roll,marks);
    }
    for(int i=0;i<n;i++){
        s[i].set_grade();
        s[i].display();
    }
    return 0;
}
