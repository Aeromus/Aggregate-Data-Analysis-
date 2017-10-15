#include "ListStats.hpp"

// TODO: implement this function
unsigned long total_annual_wages(Employment *emp) {
    unsigned long total = 0;
    while(emp->next != NULL){
        total += emp->total_annual_wages;
        emp = emp->next;
    }
    return total;
}



//TODO: implement this function
unsigned long min_annual_wages(Employment *emp) {
    unsigned long min = emp->total_annual_wages;
    
    while (emp->next != NULL)
    {
        if(emp->total_annual_wages < min)
            min = emp-> total_annual_wages;
            
        emp = emp->next;
    }
    return min;
}



// TODO: implement this function
unsigned long max_annual_wages(Employment *emp) {
    unsigned long max =  emp->total_annual_wages;
     while (emp->next != NULL)
    {
        if(emp->total_annual_wages > max)
            max = emp-> total_annual_wages;
            
        emp = emp->next;
    }
    return max;
}



// TODO: implement this function
float stdev_annual_wages(Employment *emp) {
    unsigned long wages = total_annual_wages(emp);
    int n = list_length(emp);
    float mean = static_cast<float>(wages) / static_cast<float>(n);
    float sos = 0.0;
    while(emp->next != NULL)
    {
        float diff = emp->total_annual_wages - mean;
        sos += diff * diff;
        emp = emp->next;
    }
    
    return sqrt(sos/n);
}



// TODO: implement this function
unsigned total_annual_emplvl(Employment *emp) {
    unsigned total =  0;
    
    while (emp->next != NULL){
        total += emp->annual_avg_emplvl;
        emp = emp->next;
    }
    
    return total;
}



// TODO: implement this function
unsigned max_annual_emplvl(Employment *emp) {
    unsigned max =  emp->annual_avg_emplvl;
    while(emp->next != NULL)
    {
        if(emp->annual_avg_emplvl > max)
            max = emp->annual_avg_emplvl;
            
        emp = emp->next;
    }
    return max;
}



// TODO: implement this function
unsigned min_annual_emplvl(Employment *emp) {
    unsigned min = emp->annual_avg_emplvl;
    while(emp->next != NULL)
    {
        if(emp->annual_avg_emplvl < min)
            min = emp->annual_avg_emplvl;
        emp = emp->next;
    }
    return min;
}



// TODO: implement this function
unsigned total_annual_estabs(Employment *emp) {
    unsigned total = 0;
    while(emp->next != NULL)
    {
        total += emp->annual_avg_estabs;
        emp= emp->next; 
    }
    return total;
}



// TODO: implement this function
unsigned max_annual_estabs(Employment *emp) {
    unsigned max = emp->annual_avg_estabs;
    
    while(emp->next != NULL){
        if(emp->annual_avg_estabs > max)
            max = emp->annual_avg_estabs;
            
        emp = emp->next;
    }
    return max;
}



// TODO: implement this function
unsigned min_annual_estabs(Employment *emp) {
    unsigned min =  emp->annual_avg_estabs;
    
    while(emp->next != NULL)
    {
        if(emp->annual_avg_estabs < min)
            min = emp->annual_avg_estabs;

        emp = emp->next;        
    }
    return min;
}

