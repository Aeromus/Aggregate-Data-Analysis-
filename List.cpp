#include "List.hpp"


// TODO: implement this function
Employment* build_empl_list(std::string filename) {
    
    //Initialise file stream
    std::ifstream inFile(filename);
    
    //Variables to read in from the file
    std::string a_fips, junk;
    unsigned estabs, emplvl;
    unsigned long wages;
    
    //Burn the First line of Lables
    std::getline(inFile, junk);
    
//read in and set head
inFile >> a_fips >> estabs >> emplvl >> wages;
Employment *head = new Employment(a_fips, estabs, emplvl, wages);
Employment *temp = head;
while(!inFile.eof()){
    //Read in Employment And Append to head
    //Order: area_fips	annual_avg_estabs	annual_avg_emplvl	total_annual_wages
    inFile >> a_fips >> estabs >> emplvl >> wages;
    temp->next = new Employment(a_fips, estabs, emplvl, wages);
    temp = temp->next;
    
}

inFile.close();
return head;
}
    

// TODO: implement this function
void print_every_empl(Employment *emp) {
    
    while(emp->next != NULL){
        std::cout<< emp->area_fips << "\t" << emp->annual_avg_estabs << "\t" << emp->annual_avg_emplvl << "\t" << emp->total_annual_wages << std::endl;
        emp = emp->next;
    }
    
}



// TODO: implement this function 

int list_length(Employment *emp) {
    int count = 0;
    
    while(emp->next != NULL)
    {
        count++;
        emp = emp->next;
    }
    
    
    return count;
}



//TODO: implement this function
void append_lists(Employment* list1, Employment* list2) {
    
   //tail pointer black magic
    while (list1->next->next != NULL){
        list1 = list1->next;
    }
    
    list1->next = list2;
    
    
}


void cleanup_list(Employment* list){
    Employment* head = list;
    Employment* tempNode;
    while(list->next != NULL){
        tempNode =head;
        head = head->next;
        delete tempNode;
    }
}