#include "List.hpp"


// TODO: implement this function
Employment* build_empl_list(std::string filename) {
    
    //Initialise file stream
    ifstream in(filename);
    
    //Variables to read in from the file
    string a_fips, junk;
    unsigned estabs;
    unsigned long emplvl, wages;
    
    //Burn the First line of Lables
    getLine(filename, junk);
    
//read in and set head
in >> a_fips >> estabs >> emplvl >> wages;
Employment *head = new Employment(a_fips, estabs, emplvl, wages);
Employment *temp = head;
while(!in.eof){
    //Read in Employment And Append to head
    //Order: area_fips	annual_avg_estabs	annual_avg_emplvl	total_annual_wages
    in >> a_fips >> estabs >> emplvl >> wages;
    temp->next = new Employment(a_fips, estabs, emplvl, wages);
    temp = temp->next;
    
}

in.close();
}
    

// TODO: implement this function
void print_every_empl(Employment *emp) {
}



// TODO: implement this function
int list_length(Employment *emp) {
}



// TODO: implement this function
void append_lists(Employment* list1, Employment* list2); {
}

