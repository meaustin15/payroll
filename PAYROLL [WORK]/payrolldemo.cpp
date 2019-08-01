//
//  main.cpp
//  Class setHoursWorkedsetPayRate
//
//  Created by Matthew Austin on 3/7/16.
//  Copyright (c) 2016 Matt. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string>


using namespace std;

class setHoursWorkedsetPayRate
{
    int hours[1], low;
    float grosspay, payrate;
public:
    //setHoursWorked & setPayRate
    void Hour(int hours[], int payrate){
        int x;
        
        for( x = 0; x < 1; x++){
            cout << "How Many Hours Worked: ";
            cin >> hours[0];
            cout << "Payrate (Per Hour): $";
            cin >> payrate;
        }
        
        
    }
    
    //getHoursWorked & getPayRate
    float getHoursWorkedgetPayRate(int hours[], int payrate){
        int tot=0;
        
        //Advanced if they worked overtime
        /*if(hours[0] <= 40);
         {
         grosspay = hours[0] * payrate;
         }
         
         if(hours[0] >= 40);
         {
         grosspay = (40*payrate)+(hours[0]-40)*(payrate*1.5);
         }*/
        
        tot=hours[0];
        
        
        grosspay = (tot * payrate);
        return grosspay;
    }
    
    //getGrossPay
    void getGrossPay(int hours[], int payrate)
    {
        
        
        cout << " " << endl;
        
        cout << "Grosspay: " << getHoursWorkedgetPayRate(hours, payrate)  << endl;
        
        
    }
    
};



int main(){
    int hours[1], payrate;
    
    setHoursWorkedsetPayRate Hour;
    Hour.Hour(hours, payrate);
    setHoursWorkedsetPayRate getHoursWorkedgetPayRate;
    getHoursWorkedgetPayRate.getHoursWorkedgetPayRate(hours, payrate);
    setHoursWorkedsetPayRate getGrossPay;
    getGrossPay.getGrossPay(hours, payrate);
    
    return 0;
    
}
