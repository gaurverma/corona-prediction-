/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int test_case;
   cin>>test_case;
   for(int i=0;i<test_case;i++)
   {
       double theta1= -0.188555 ,theta2= 0.000543 ,theta3=0.001640 ,theta4=0.024569 ,theta5=0.002619 ,theta6=0.018671 ;
       int val_fev,age;
       bool body_pain,runny_nose,breath_problem;
       cout<<"ENTER your FEVER VALUE"<<endl;
       cin>>val_fev;
       cout<<"ENTER your age"<<endl;
       cin>>age;
       cout<<"DO you have body pain?"<<endl;
       cin>>body_pain;
       cout<<"DO you suffer from runny nose?"<<endl;
       cin>>runny_nose;
       cout<<"ARE  you suffering from breathing problems"<<endl;
       cin>>breath_problem;
       double fun=theta1 + theta2*age + theta3*val_fev + theta4*body_pain + theta5*runny_nose + theta6*breath_problem;
       double g = 1/(1 + exp(-fun));
       if(g<=0.5)
       cout<<"Congrats! You are corona negative! But keep on taking precautions"<<endl;
       else
       {cout<<"You are suspected to be Corona positive!!"<<endl;
       cout<<"  Your probabilty of corona positive is "<<(g+0.2)*100<<" %"<<endl;
       cout<<"    Immediately self isolate yourself And go for a checkup" <<endl;}
   }
       return 0;
}

