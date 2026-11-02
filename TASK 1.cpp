
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "HOSPITAL OPERATING SYSTEM REQUIREMENTS EVALUATION\n";
    cout << "=================================================\n\n";

    cout << "1. ICU MONITORING SYSTEM\n";
    cout << "Priority 1: Reliability and patient safety\n";
    cout << "Priority 2: Fast response time\n";
    cout << "Priority 3: Security\n";
    cout << "Priority 4: Throughput\n";
    cout << "Priority 5: Battery efficiency\n";
    cout << "Justification: Immediate response to critical patient alarms is essential.\n\n";

    cout << "2. HOSPITAL SERVERS\n";
    cout << "Priority 1: Reliability\n";
    cout << "Priority 2: Security\n";
    cout << "Priority 3: High throughput\n";
    cout << "Priority 4: Response time\n";
    cout << "Priority 5: Battery efficiency\n";
    cout << "Justification: Servers must support many users and protect patient records.\n\n";

    cout << "3. DOCTORS' AND NURSES' COMPUTERS\n";
    cout << "Priority 1: Security\n";
    cout << "Priority 2: Reliability\n";
    cout << "Priority 3: Response time\n";
    cout << "Priority 4: Throughput\n";
    cout << "Priority 5: Battery efficiency\n";
    cout << "Justification: Staff need quick and secure access to patient information.\n\n";

    cout << "4. MOBILE MEDICAL DEVICES\n";
    cout << "Priority 1: Reliability\n";
    cout << "Priority 2: Battery efficiency\n";
    cout << "Priority 3: Security\n";
    cout << "Priority 4: Response time\n";
    cout << "Priority 5: Throughput\n";
    cout << "Justification: Portable devices require long battery life and secure access.\n\n";

    cout << "5. HOSPITAL ADMINISTRATION SYSTEM\n";
    cout << "Priority 1: Data security\n";
    cout << "Priority 2: Reliability\n";
    cout << "Priority 3: Throughput\n";
    cout << "Priority 4: Response time\n";
    cout << "Priority 5: Battery efficiency\n";
    cout << "Justification: Patient records and financial information must be protected.\n\n";

    cout << "CONFLICTING REQUIREMENTS\n";
    cout << "Fast response time may conflict with high throughput.\n";
    cout << "High security may increase processing time.\n";
    cout << "High performance may increase battery consumption.\n\n";

    cout << "OPERATING SYSTEM HISTORY APPLICATION\n";
    cout << "Batch OS: Useful for payroll and billing tasks.\n";
    cout << "Time-sharing OS: Supports multiple hospital users.\n";
    cout << "Personal OS: Used in doctors' and nurses' computers.\n";
    cout << "Mobile OS: Used in portable medical devices.\n";
    cout << "Real-time OS: Used for critical patient monitoring.\n\n";

    cout << "ALTERNATIVE CONCEPT AND COMPLEXITY ANALYSIS\n";
    cout << "Using one general-purpose OS on all devices:\n";
    cout << "1. Alarm response time may be unbounded.\n";
    cout << "2. Memory requirements may be too high for small devices.\n";
    cout << "3. Administration becomes easier but less specialized.\n";
    cout << "4. A guaranteed real-time deadline cannot be assumed.\n\n";

    cout << "CONCLUSION\n";
    cout << "Different operating systems should be selected according to\n";
    cout << "the requirements of each hospital environment.\n";
    cout << "Patient safety, reliability and fast alarm response are the\n";
    cout << "most critical requirements.\n";

    return 0;
}
