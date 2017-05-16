#include "cath_ADA.h"

// argv[1] automaton
// argv[1+]
//  -print : print out all the steps
//  -set k : set min back step (followed by an integer)

int main(int argc, char ** argv)
{
    bool print = false;
    int k_step = 1;

    for(int i = 2; i < argc; i++)
    {
        std::string temp = argv[i];
        if(temp == "-print")
            print = true;
        if(temp == "-setk")
        {
            k_step = std::stoi(argv[i + 1]);
            i++;
        }
    }

    cath::ADA a(argv[1], print);

    cath::time_point start, end;

    start = cath::now();

    if(a.is_empty(print, k_step))
        std::cout << "EMPTY" << std::endl;
    else
        std::cout << "NOT EMPTY" << std::endl;

    end = cath::now();

    double time_sec = cath::time_diff_sec(start, end);
    double time_msec = cath::time_diff_msec(start, end);
    unsigned long time_usec = cath::time_diff_usec(start, end);

    printf("\t|\t-> Time used: %.3lf sec\n", time_sec);
    printf("\t|\t-> Time used: %.3lf msec\n", time_msec);
    printf("\t|\t-> Time used: %ld usec\n", time_usec);

    return 0;
}
