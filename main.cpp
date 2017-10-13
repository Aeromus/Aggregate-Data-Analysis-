#include <iostream>
#include <dirent.h>
#include "List.hpp"
#include "ListStats.hpp"
#include "Report.hpp"
#include "AllFilesInDirectory.hpp"



int main(void) {
	// Read in all employment lists

	Employment* final_list = AllFilesInDirectory("data");

	// Append them into one list
	std::cout << "--------------\n INITALIZING TEST \n ---------------" << std::endl;
	Employment *list_main = build_empl_list("data/01.txt");
	Employment *list_temp = build_empl_list("data/02.txt");
	append_lists(list_main, list_temp);
	//print_every_empl(list);
	std::cout << "List Length is : \t" <<  list_length(final_list) << std::endl;
	std::cout << "Total Wages : \t" << total_annual_wages(list_main) << std::endl;
	std::cout << "Max Wages : \t" << max_annual_wages(list_main) << std::endl;
	std::cout << "Min Wages : \t" << min_annual_wages(list_main) << std::endl;
	// Compute the statistics

	// Fill out the report
	/*
	Report rpt;

	rpt.num_areas      = 1;

	rpt.gross_wages    = 2;
	rpt.min_wages      = 3;
	rpt.max_wages      = 4;
	rpt.stdev_wages    = 5;
	rpt.unique_wages   = 6;
	rpt.distinct_wages = 7;

	rpt.gross_emplvl   = 8;
	rpt.max_emplvl     = 9;
	rpt.min_emplvl     = 10;

	rpt.gross_estabs   = 11;
	rpt.max_estabs     = 12;
	rpt.min_estabs     = 13;

	// Print the report
	std::cout << rpt; */
}
