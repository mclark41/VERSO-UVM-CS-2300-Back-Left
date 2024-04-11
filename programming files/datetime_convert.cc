#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    // initialize date_str variable
    std::string date_str = "2022-03-17 10:45:30";
    // create time struct object to hold the date
    std::tm date_obj = {};
    // initialize stringstream with date_str
    std::istringstream ss(date_str);
    // call get_time function to get current time and store it in the date object
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    // create formatted date stringstream
    std::stringstream formatted_date_ss;
    // insert formatted date into stringstream variable
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    // convert stringstream into string
    std::string formatted_date = formatted_date_ss.str();
    // print out date
    std::cout << formatted_date << std::endl;

    return 0;
}