//  Feras Ahmed
//	apple.cpp
//	cube
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int const LOCATION_DIM_SZ = 2;
int const TIME_DIM_SZ= 2;
int const PRODUCT_DIM_SIZE= 3;

string Location[]  = {"FL", "TX"};
string Period[]	= {"Jan", "FEB"};
string Product[]	= {"iPhone","iPad","MacBookPro"};


/* 1 */
void printSalesDetails(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){
    
    int i(0),j(0),k(0);
    int sum =0;
    
    cout<<"Sales Details per Location per Period per Product" <<endl; cout<<"================================================="<<endl;
    
    for (i=0; i < LOCATION_DIM_SZ; i++)
        for (j=0; j < TIME_DIM_SZ; j++)
            for (k=0; k < PRODUCT_DIM_SIZE; k++){
                cout << "Sales for Location " << Location[i] << "/" << Period[j] << "/" << Product[k];
                cout << setw(5) << sales[i][j][k] << " ";
               sum= sum + sales[i][j][k];
                cout << endl;
            }
            cout << "Sum of Sales for all Apple: " << sum << endl;
    
    cout<<"==================================================="<<endl;
    
    
}

void printSalesByProduct(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
    double salesPerProduct=0;
    
    cout<<"Sales per Product" <<endl; cout<<"================="<<endl;
    
    //double salesPerProduct =0;
    
    for (k=0; k < PRODUCT_DIM_SIZE; k++){
        //salesPerProduct =0;
        cout << "Total Sales for " << Product[k];
        for (i=0; i < LOCATION_DIM_SZ; i++)
            for (j=0; j < TIME_DIM_SZ; j++)
                salesPerProduct = salesPerProduct + sales[i][j][k];
                cout << " " << salesPerProduct;
                cout << endl;
                }

    cout<<endl; cout<<"==================================================="<<endl;
    
    
}

void printSalesByLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
    double salesPerLocation=0;
    
    cout<<"Sales per Location" <<endl; cout<<"================="<<endl;
    //int sum =0;
    
    for (i=0; i < LOCATION_DIM_SZ; i++){
        salesPerLocation =0;
        cout << "Total Sales for " << Location[i];
        for (k=0; k < PRODUCT_DIM_SIZE; k++)
            for (j=0; j < TIME_DIM_SZ; j++)
                salesPerLocation = salesPerLocation + sales[i][j][k];
        cout << " " << salesPerLocation;
        cout << endl;
    }
cout<<endl; cout<<"==================================================="<<endl;
    
    
}


/* 4 */
void printSalesByPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){ int i(0),j(0),k(0);
    double salesPerPeriod=0;
    
    cout<<"Sales per Period" <<endl; cout<<"================="<<endl;
    
    //int sum =0;
    
    for (j=0; j < TIME_DIM_SZ; j++){ //
        salesPerPeriod =0;
        cout << "Total Sales for " << Period[j];
        for (k=0; k < PRODUCT_DIM_SIZE; k++)
            for (i=0; i < LOCATION_DIM_SZ; i++) //
                salesPerPeriod = salesPerPeriod + sales[i][j][k];
        cout << " " << salesPerPeriod;
        cout << endl;
    }


    
    cout<<endl; cout<<"==================================================="<<endl;
    
    
}
/* 5 */
void printSalesPerProductPerLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){
    
    int i(0),j(0),k(0);
    double salesPerProductPerLocation=0;
    
    cout<<"Total Sales per Product per Location" <<endl; cout<<"===================================="<<endl;
    
    
    //int sum =0;
    
    for (k=0; k < PRODUCT_DIM_SIZE; k++)
        for (i=0; i < LOCATION_DIM_SZ; i++){
            salesPerProductPerLocation =0;
            cout << "Total Sales for " << Product[k] << " in " << Location[i];
            for (j=0; j < TIME_DIM_SZ; j++)
                salesPerProductPerLocation = salesPerProductPerLocation + sales[i][j][k];
        cout << " " << salesPerProductPerLocation;
        cout << endl;
    }

    
    cout<<endl; cout<<"==================================================="<<endl;
    
    
}


/* 6 */
void printSalesPerProductPerPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){
    
    int i(0),j(0),k(0);
    double salesPerProductPerPeriod=0;
    
    
    cout<<"Total Sales per Product per Period" <<endl; cout<<"===================================="<<endl;
    
    
    
    //int sum =0;
    
    for (k=0; k < PRODUCT_DIM_SIZE; k++)
        for (j=0; j < TIME_DIM_SZ; j++){//
            salesPerProductPerPeriod =0;
            cout << "Total Sales for " << Product[k] << " in " << Period[j];
            for (i=0; i < LOCATION_DIM_SZ; i++)//
                salesPerProductPerPeriod = salesPerProductPerPeriod + sales[i][j][k];
            cout << " " << salesPerProductPerPeriod;
            cout << endl;
        }
    
    

    cout<<endl; cout<<"==================================================="<<endl;
    
}

/* 7 */
void printSalesPerLocationPerPeriod(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){
    cout<<"Total Sales per Location per Period" <<endl; cout<<"===================================="<<endl;
    int i(0),j(0),k(0);
    double salesPerLocationPerPeriod=0;
    
    
    //int sum =0;
    
    for (i=0; i < LOCATION_DIM_SZ; i++)
        for (j=0; j < TIME_DIM_SZ; j++){//
            salesPerLocationPerPeriod =0;
            cout << "Total Sales for " << Location[i] << " in " << Period[j];
            for (k=0; k < PRODUCT_DIM_SIZE; k++)//
                salesPerLocationPerPeriod = salesPerLocationPerPeriod + sales[i][j][k];
            cout << " " << salesPerLocationPerPeriod;
            cout << endl;
        }
    
    cout<<endl; cout<<"==================================================="<<endl;
    
    
}


/* 8 */
void printSalesPerPeriodPerLocation(double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]){
    
    int i(0),j(0),k(0);
    double salesPerPeriodPerLocation=0;
    
    
    cout<<"Total Sales per Period per Location" <<endl; cout<<"===================================="<<endl;
    //int sum =0;
    
        for (j=0; j < TIME_DIM_SZ; j++)
        for (i=0; i < LOCATION_DIM_SZ; i++){//
            salesPerPeriodPerLocation =0;
            cout << "Total Sales for " << Period[j] << " in " << Location[i];
            for (k=0; k < PRODUCT_DIM_SIZE; k++)//
                salesPerPeriodPerLocation = salesPerPeriodPerLocation + sales[i][j][k];
            cout << " " << salesPerPeriodPerLocation;
            cout << endl;
        }
    
    
    cout<<endl; cout<<"==================================================="<<endl;
    
}


int main(int argc, const char * argv[]) {
    
    
    double sales[LOCATION_DIM_SZ][TIME_DIM_SZ][PRODUCT_DIM_SIZE]={0};
    
   
    
    
    sales[0][0][0]=45;
    sales[0][0][1]=8;
    
    sales[0][0][2]=4;
    sales[0][1][0]=35;
    
    sales[0][1][1]=10;
    sales[0][1][2]=5;
    
    
    sales[1][0][0]=75;
    sales[1][0][1]=15;
    
    
    sales[1][0][2]=13;
    sales[1][1][0]=45;
    
    sales[1][1][1]=17;
    sales[1][1][2]=23.1;
    
    printSalesDetails(sales);
    
    /*
     
     1
     
     */
    printSalesByProduct(sales);
    /*
     2
     */
    
    printSalesByLocation(sales);
    /*
     3
     */
    
    printSalesByPeriod(sales);
    /*
     4
     */
    
    printSalesPerProductPerLocation(sales);
    /*
     5
     */
    
    printSalesPerProductPerPeriod(sales);
    /*
     6
     */
    
    printSalesPerLocationPerPeriod(sales);
    /*
     7
     */
    printSalesPerPeriodPerLocation(sales);
    /*
     8
     */

    return 0;
}
