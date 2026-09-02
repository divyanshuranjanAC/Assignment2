#include<iostream>
using namespace std;



double reorderCost(int qty, double unitPrice){
    return qty*unitPrice;
}

double reorderCost(double qty, double unitPrice){
    return qty*unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate){
    double cost = qty*unitPrice;
    return cost+(cost*taxRate/100);
}

double applyDiscount(double price, double discountPercent = 10.0){
    return price-(price*discountPercent/100);
}

int main(){
    cout<<"Record Cost1: "<<reorderCost(10, 50.0)<<endl;
    cout<<"Record Cost2: "<<reorderCost(5.5, 100.0)<<endl;
    cout<<"Record Cost3: "<<reorderCost(20, 10, 50.0)<<endl;
    cout<<"Discounted Price: "<<applyDiscount(100)<<endl;

    return 0;

}