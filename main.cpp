#include <iostream>
#include <getopt.h>
#include "calculator.h"

using namespace std;

int main(int argc, char *argv[]) {
    int curr_com;
    static struct option long_options[] = {
            {"help", no_argument, NULL, 'h'},
            {"add", required_argument, NULL, 'a'},
            {"sub", required_argument, NULL, 's'},
            {"mul", required_argument, NULL, 'm'},
            {"div", required_argument, NULL, 'd'},
            {0,0,0,0}
    };
    int option_index = 0;

    while ((curr_com = getopt_long(argc, argv, "ha:s:m:d:",long_options, &option_index)) != -1){
        switch (curr_com)
        {
            case 'h':
                help();
                break;
            case 'a':
                Calculator(optarg, '+');
                break;
            case 's':
                Calculator(optarg, '-');
                break;
            case 'm':
                Calculator(optarg, '*');
                break;
            case 'd':
                Calculator(optarg, '/');
                break;
        }
    }
}