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

int distinct_annual_wages(Employment* list) {
    int count = 1;
    int len   =  list_length(list);
    int test  = 0;
    if (len < 1)
        return 0;
    Employment* temp =  list;
    while(temp->next != NULL)  
    {
        if (temp->total_annual_wages != temp->next->total_annual_wages) {
            count++;
        }
        temp = temp->next;
        test++;
    }
    
    //std::cout << "*******Went through : " << test << " items*******\n\n";
    return count;
}

int distinct_avg_emp_lvl(Employment* list) {
    int count = 1;
    int len =  list_length(list);
    if (len < 1)
        return 0;
    Employment* temp =  list;
    while(temp->next != NULL)  
    {
        if (temp->annual_avg_emplvl != temp->next->annual_avg_emplvl) {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int distinct_avg_estabs(Employment* list) {
    int count = 1;
    int len =  list_length(list);
    if (len < 1)
        return 0;
    Employment* temp =  list;
    while(temp->next != NULL)  
    {
        if (temp->annual_avg_estabs != temp->next->annual_avg_estabs) {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

unsigned long unique_annual_wages(Employment *list) {
	int count = 0, seen = 0, test = 0;
    Employment* temp =list;
    while(temp->next != NULL){
        if (temp->total_annual_wages == temp->next->total_annual_wages) {
            seen++;
        }
        else {
            if (seen == 0) {
                count++;
            }
            seen = 0;
        }
        test++;
        temp = temp->next;
    }
    //std::cout << "*******Went through : " << test << " items*******\n\n";
    return count+2;
}

unsigned long unique_avg_emplvl(Employment *list) {
	int count = 0, seen = 0, test = 0;
    Employment* temp =list;
    while(temp->next != NULL){
        if (temp->annual_avg_emplvl == temp->next->annual_avg_emplvl) {
            seen++;
        }
        else {
            if (seen == 0) {
                count++;
            }
            seen = 0;
        }
        test++;
        temp = temp->next;
    }
    //std::cout << "*******Went through : " << test << " items*******\n\n";
    return count +2;
}

unsigned long unique_avg_estabs(Employment *list) {
	int count = 0, seen = 0, test = 0;
    Employment* temp =list;
    while(temp->next != NULL){
        if (temp->annual_avg_estabs == temp->next->annual_avg_estabs) {
            seen++;
        }
        else {
            if (seen == 0) {
                count++;
            }
            seen = 0;
        }
        test++;
        temp = temp->next;
    }
    //std::cout << "*******Went through : " << test << " items*******\n\n";
    return count +2;
}