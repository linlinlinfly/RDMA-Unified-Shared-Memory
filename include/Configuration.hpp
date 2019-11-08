/***********************************************************************
* 
* 
* Tsinghua Univ, 2016
*
***********************************************************************/
#ifndef CONFIGURATION_HEADER
#define CONFIGURATION_HEADER

#include <iostream>  
#include <boost/property_tree/ptree.hpp>  
#include <boost/property_tree/xml_parser.hpp>  
#include <boost/typeof/typeof.hpp>
#include <map>
#include <string>

using namespace std;  
using namespace boost::property_tree;

class Configuration {
private:
	ptree pt;
    map<uint16_t, string> id2ip;
    map<string, uint16_t> ip2id;
	int ServerCount;
public:
	Configuration();
	~Configuration();
	string getIPbyID(uint16_t id);
	uint16_t getIDbyIP(string ip);
    map<uint16_t, string> getInstance();
	int getServerCount();
};

#endif
