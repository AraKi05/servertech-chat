#include <iostream>
#include <boost/date_time.hpp>

int main() {
    // 使用 Boost.DateTime 获取当前系统时间
    boost::gregorian::date today = boost::gregorian::day_clock::local_day();

    // 输出当前日期
    std::cout << "Today's date is: " << today << std::endl;

    // 使用 Boost.DateTime 获取当前时间
    boost::posix_time::ptime now = boost::posix_time::second_clock::local_time();

    // 输出当前时间
    std::cout << "Current time is: " << now.time_of_day() << std::endl;

    return 0;
}