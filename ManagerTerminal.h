#include "structs.h"
#include <cstring> 
#include <cctype>
#include <iostream>
using namespace std;

class ManagerTerminal {

    public:
        ManagerTerminal();
        int AddProvider(void);
        int AddMember(void);
        int AddService(void);
        int EditProvider(void);
        int EditMember(void);
        int EditService(void);
        int DeleteProvider(void);
        int DeleteMember(void);
        int DeleteService(void);
        int ReportMembers(void);
        int ReportProviders(void);
        int ReportSummary(void);
        int ReportEFT(void);


    private:

        int TerminalID;
        struct ProviderMember person;
        struct ServiceCode servicecode;
        class DataCenter * DC;
};

