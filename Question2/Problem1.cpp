#include<iostream>
using namespace std;

class Patient {
    private:
        int patientId;
        string name;
        int age;
        string ward;
        const string* bloodGroup;

    public:
        Patient() : patientId(0), name("Unknown"), age(0), ward("General"), bloodGroup("O+")
        {
            cout<<"[Constructor] Default patient registered."<<endl;
        }

        Patient(int id, const string& name) : patientId(id), name(n), ward("General"), bloodGroup("O+")
        {
            cout<<"[Constructor] Emergency: "<<name<<endl;
        }

        Patient() : patientId(int id, const string& name, int age, const string& ward, const string& bg)
        {
            cout<<"[Constructor] Full admission: "<<endl;
        }

        ~Patient()
        {
             cout<<"[Destructor] Paitent."<<name<<"discharged"<<endl;
        }

        void displayRecord() const
        {
            cout << "Patient Record:" << endl;
            cout << " ID        : " << patientId << endl;
            cout << " Name      : " << name << endl;
            cout << " Age       : " << age << endl;
            cout << " Ward      : " << ward << endl;
            cout << " Blood Grp : " << bloodGroup << endl;
        }

        void transferWard(const string& newWard)
        {
            ward=newWard;

            cout << "Ward Transfer: "<< name<< " -> "<< ward<< endl;
        }


};

int main(){
    
    Patient p1(1001, "Meera Joshi", 34, "Cardiology", "B+");
    Patient p2(1002, "Raj Patel");
    Patient p3;

    Patient* paitents=new Patient[4];

    paitents[0].displayRecord();
    paitents[1].displayRecord();
    paitents[2].displayRecord();
    paitents[3].displayRecord();

    p2.transferWard{"ICU"};

    delete[] paitents;

    return 0;
}