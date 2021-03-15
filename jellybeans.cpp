// Taylor Allen

#include <iostream>

using namespace std;

int high(int[]);
int low(int[]);
int yes(int[]);

int high(int array[]){
    
    int high = array[0];
    
    int y;
    
    y = 0;
    
    for (int a = 0; a<6; a++){
        
        if(array[a]>high){
            
            high = array[a];
            y = a;
            
        }
    }
    
    return y;
    
}

int low(int array[]){
    
    int low = array[6];
    
    int y;
    int z;
    y = 0;
    z = 0;
    
    for(int a = 0; a<6; a++){
        
        if(array[a]<low){
            
            low = array[a];
            y = a;
            
        }
    }
    
    return y;
    
}

int yes(int array[]){
    
    int z;
    z = 0;
    
    for (int x = 0; x < 6 ; x++){
        
        z+=array[x];
        
    }
    
return z;
}

int main(){
    
    string flavor[6]={"Cherry     ","Cinnamon    ","Licorice    ","Orange      ","Coconut    ","Cotton Candy"};
    
    int sale[6];
    
    for (int x = 0; x < 6; x++){
        
        cout << "Enter the total sales for " << flavor[x] << ": ";
        cin >> sale[x];
        
        while (sale[x]<0){
            
            cout << "Please enter only positive numbers.\n";
            cout << "Enter the total sales for " << flavor[x]<< ": " << endl;
            
            cin >> sale[x];
            
        }
    }
    
    cout << "Flavor          Bags sold \n";
    cout << "__________________________ \n";
    
    for (int x = 0; x < 6; x++){
        
        cout << flavor[x] << " \t \t " << sale[x] << endl;
        
    }
    
    cout << "Total Sales: " << yes(sale) << endl;
    cout << "Highest Selling Flavor: " << flavor[high(sale)]<< " with sales " << sale[high(sale)] << ". \n";
    cout << "Lowest Selling Flavor: " << flavor[low(sale)] << " with sales " << sale[low(sale)] << ".";
    
    return 0;
}