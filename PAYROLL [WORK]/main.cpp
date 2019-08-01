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
#include "payroll.h"

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
