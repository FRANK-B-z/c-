#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //choice delcarations
    int choice;
    // question one declarations
    int Area;
    int base;
    int height;
    //declarations of question two
    int num1;
    int num2;
    int sum;
    //delrations of question three
    double length;
    int perimeter;
    //declarations of question four
    double retail_price;
    double VAT_rate;
    double VAT_ratio;
    double  VAT_amount;
    double Retail_price;
    double Total_retail_price;
    while(choice!=9){
    //declarations of questions five
    int number1;
    int number2;
    int number3;
    int number4;
    int avarage;
    //declarations of questions six
    const double PI=3.142;
    double area;
    double radius;
    //declarations of questions seven
   double bill_amount;
   double tip_percentage;
   double tip_ratio;
   double tip_amount;
   double  total_cost;
   //declarations of question eight
   double height1;
   double weight;
   double BMI;
   //declarations of question nine
   double basic_salary;
   double employee;
   double employer;
   
 while(choice!=10){
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"TUTORIAL SHEET ONE SOLUTIONS 2026"<<endl;
    cout<<"1.Parallelogram calculations"<<endl;
    cout<<"2.Adding two numbers"<<endl;
    cout<<"3.Area of a square"<<endl;
    cout<<"4.Total retail price"<<endl;
    cout<<"5.Calculate avarage of four numbers"<<endl;
    cout<<"6.Calculate the are of the circle"<<endl;
    cout<<"7.calculate the cost of your meal"<<endl;
    cout<<"8.find the BMI"<<endl;
    cout<<"9.NHIMA returns"<<endl;
    cout<<"10.exist"<<endl;
    cout<<"choice:"<<"\t";
    cin>>choice;
    if(choice==1){
        cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
        cout<<"1.Parallelogram calculations"<<endl;
        cout<<"Enter Base: ";
        cin>>base;
        cout<<"Enter Height: ";
        cin>>height;
        Area=base*height;
        cout<<"area:"<<Area<<"cm"<<endl;

    }else if(choice==2){
        cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
        cout<<"2.Adding two numbers"<<endl;
        cout<<"Enter number one: ";
        cin>>num1;
        cout<<"Enter number two: ";
        cin>>num2;
        sum=num1+num2;
        cout<<"sum="<<sum<<endl;
    }else if(choice==3){
        cout<<"\t\t\t\t\t\t\t\t"<<endl;
        cout<<"3.Area of a square"<<endl;
        cout<<"enter length: ";
        cin>>length;
        cout<<"perimeter"<<perimeter<<endl;
    }else if(choice==4){
        cout<<"\t\t\t\t\t\t\t"<<endl;
        cout<<"4.Total retail price"<<endl;
        cout<<"Enter Retail price: ";
        cin>>retail_price;
        cout<<"Enter VAT rate:";
        cin>>VAT_rate;
        VAT_ratio=VAT_rate/100;
        VAT_amount=Retail_price*VAT_amount;
        cout<<"VAT AMOUNT"<<VAT_amount<<endl;
        cout<<"TOTAL RETAIL PRICE"<<Total_retail_price<<endl;
    }else if(choice==5){
        cout<<"\t\t\t\t\t\t\t\t"<<endl;
        cout<<"5.Calculate avarage of four numbers"<<endl;
        cout<<"enter number 1: "<<endl;
        cin>>number1;
        cout<<"enter number 2: "<<endl;
        cin>>number2;
        cout<<"enter number 3: "<<endl;
        cin>>number3;
        cout<<"enter number 4: "<<endl;
        cin>>number4;
        avarage=number1+number2+number3+number4/4;
        cout<<"avarage number="<<avarage<<endl;
    }else if(choice==6){
        cout<<"\t\t\t\t\t\t\t\t"<<endl;
        cout<<"6.Calculate the are of the circle"<<endl;
        cout<<"enter radius: ";
        cin>>radius;
        area=PI*pow(radius,2);
        cout<<"area"<<area<<endl;
    }else if(choice==7){
        cout<<"\t\t\t\t\t\t\t"<<endl;
        cout<<"7.calculate the cost of your meal"<<endl;
        cout<<"enter bill amount: ";
        cin>>bill_amount;
        cout<<"enter tip percentage";
        cin>>tip_percentage;
        tip_ratio=tip_percentage/100;
        tip_amount=tip_ratio*bill_amount;
        total_cost=tip_amount-bill_amount;
        cout<<"tip amount "<<tip_amount<<endl;
        cout<<"total cost "<<total_cost<<endl;
    }else if(choice==8){
        cout<<"\t\t\t\t\t\t\t"<<endl;
        cout<<"8.find the BMI"<<endl;
        cout<<"enter height: ";
        cin>>height1;
        cout<<"enter weight: ";
        cin>>weight;
        BMI =weight/pow(height1,2);
        cout<<"body max index: "<<BMI<<endl;
    }else if(choice==9){
        cout<<"\t\t\t\t\t\t\t\t\t\t"<<endl;
        cout<<"9.NHIMA returns"<<endl;
        cout<<"enter basic salary: ";
        cin>>basic_salary;
        employee=basic_salary*1/100;
        employer=basic_salary*1/100;
        cout<<"empoyer="<<employer<<endl;
        cout<<"employee= "<<employee<<endl;
        
    }else if(choice==10){
        cout<<"existing.... "<<endl;
        break;
    }else{
        cerr<<"invalid input enter again!!!!!!"<<endl;
    }
  }
 }
 return 0;
}