#include<iostream>
using namespace std;

class Product {

    private:
        int productId;
        char name[10];
        double price;
        int quantity;
        
    public:
        void acceptDetails(){
            cout<<"Enter Product ID: ";
            cin>>productId;

            cout<<"Enter Product Name: ";
            cin>>name;

            cout<<"Enter Price: ";
            cin>>price;

            cout<<"Enter Quantity: ";
            cin>>quantity;
        }

        void displayDetails() const
        {
            cout<<"Product Id: "<<productId<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<"Quantity: "<<quantity<<endl;
            cout<<"Total Value: "<<totalValue()<<endl;
        }

        double totalValue() const
        {
            return price*quantity;
        }

        bool isLowStock(int threshold) const
        {
            if (quantity<threshold)
                return true;
            else
                return false;
            
        }

};

int main() {
    Product products[5];

   for (int i=0;i<5;i++){
    cout<<"Enter Product Details"<<i+1<<endl;
    products[i].acceptDetails();
   }
   
   cout<<"====Inventory Report====";
   for (int i=0;i<5;i++){
    products[i].displayDetails();
   }

   int highest=0;
   for (int i=0;i<5;i++){
    if (products[i].totalValue()>products[highest].totalValue()){
        highest=i;
    }
   }

   cout<<"Highest Value Product: ";
   products[highest].displayDetails();

   int threshold;
   
   cout<<"Enter Low Value Product: ";
   cin>>threshold;

   for (int i=0;i<5;i++){
    if(products[i].isLowStock(threshold)){
        products[i].displayDetails();
    }
   }

   return 0;
}