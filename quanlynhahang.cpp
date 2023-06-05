/*
*File: quanlynhahang.cpp
*Author: Nguyen Minh Nhut
*Date: 04/06/2023
*Description: manage restaurant
*/
#include <stdio.h>
#include <stdint.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;
/*
*Class: Beverage
*Description: This class represents a basic implementation of a Beverage object.
*/
class Beverage{
    private:
        uint16_t id;
        string BeverageName;
        double Price;
    public:
        Beverage(string BeverageName, uint32_t Price);
        void setid(uint16_t id);
        uint16_t getid();
        void setBeverageName(string BeverageName);
        string getBeverageName();
        void setPrice(uint32_t Price);
        uint32_t getPrice();
};
/*
*Contructor: Beverage
*Discription: This constructor initializes a new instance of the Beverage class.
*Input:
*   name: name of Beverage
*   price: price of Beverage
*/
Beverage::Beverage(string BeverageName, uint32_t Price){
    static int16_t id=1;
    Beverage::id= id;
    Beverage::BeverageName = BeverageName;
    Beverage::Price= Price;
    id++;
}
/*
*Function: setid
*Description: This function returns id of current Beverage
*Input: id: id of Beverage
*Output: none
*/
void Beverage::setid(uint16_t id){
    Beverage::id= id;
}
/*
*Function: getid
*Description: This function returns id of current Beverage
*Output: id of current Beverage
*/
uint16_t Beverage::getid(){
    return id;
}
/*
*Function: setBeverageName
*Description: This function set name of current Beverage
*Input: Beveragename: name of Beverage
*Output: none
*/
void Beverage::setBeverageName(string BeverageName){
    Beverage::BeverageName= BeverageName;
}
/*
*Function: getBeverageName
*Description: This function returns name of current Beverage
*Output: name of current Beverage
*/
string Beverage::getBeverageName(){
    return BeverageName;
}
/*
*Function: setPrice
*Description: This function set price of current Beverage
*Input: price: price of Beverage
*Output: none
*/
void Beverage::setPrice(uint32_t Price){
    Beverage::Price= Price;
}
/*
*Function: getPrice
*Description: This function returns price of current Beverage
*Output: price of current Beverage
*/
uint32_t Beverage::getPrice(){
    return Price;
}
/*
*Class: Manage
*Description: This class represents a basic implementation of a Manage object.
*/
class Manager{
    private:
        vector <Beverage> DatabaseBeverage;
        uint8_t NumberofTable;
    public:
        void Managerr();
        void setNumberofTable();
        uint8_t getNumberofTable();
        vector <Beverage> getDatabaseBeverage();
        void NumberofTables();
        void AddBeverage();
        void EditBeverage();
        void DeleteBeverage();
        void BeverageMenu(Beverage beverage);
        void BeverageData();
};
/*
*Function: getDatabaseBeverage
*Description: This function get database of Beverage
*Input:none
*Output: none
*/
vector<Beverage> Manager::getDatabaseBeverage(){
    return this->DatabaseBeverage;
}
/*
*Function: setNumberofTable
*Description: This function set number of table
*Input:none
*Output: none
*/
void Manager::setNumberofTable(){
    cout<<"Dat so luong ban: ";
    cin>>this->NumberofTable;
}
/*
*Function: getNumberofTable
*Description: This function get number of table
*Input:none
*Output: none
*/
uint8_t Manager::getNumberofTable(){
    return this->NumberofTable;
}
/*
*Struct: QualityOfBeverage
*Description: This struct represents a basic implementation of quality of beverage.
*/
typedef struct{
    Beverage BeverageName;
    uint8_t Quatity;
}QuatityOfBeverage;
/*
*Struct: table
*Description: This struct represents a basic implementation of table number and status of table.
*/
typedef struct{
    uint8_t tablenumber;
    bool mode;
    vector <QuatityOfBeverage> databaseQuatityofBeverage;
}table;
/*
*Class: Employee
*Description: This class represents a basic implementation of a employee object.
*/
class Employee{
    private:
        int NumberOfTable;
        vector <table> databaseTable;
        vector <Beverage> databaseBeverage;
    public:
        Employee(vector <Beverage> databaseBeverage, uint8_t NumberofTable);
        void Order();
        void Edit();
        void Delete();
        void Add();
        void Menu();
        void Pay();
        void DisplayStatusTable();
};
/*
*Contructor: Employee
*Discription: This constructor initializes a new instance of the Staff class.
*Input:
*   databaseBeverage: data of Beverage
*   numberOfTable: variable saving number of table
*Output: none
*/
Employee::Employee(vector <Beverage> databaseBeverage, uint8_t NumberofTable){
    for(Beverage beverage : databaseBeverage){
        databaseBeverage.push_back(beverage);
    }
    for(uint8_t i=1; i<= NumberofTable; i++){
        table table;
        table.tablenumber = i;
        table.mode= false;
        databaseTable.push_back(table);
    }
    // for( table table: databaseTable){
    //     cout<<"Table: "<<table.tablenumber<<". ";
    //     if(table.mode) cout<<"x\n";
    //     else cout<<"o\n";
    // }
}
/*
*Function: displayStatusTable
*Description: This function display state of all table
*Input:none
*Output: none
*/
void Employee::DisplayStatusTable(){
    cout<<"Ban \t|";
    for(int i = 1; i<= this->NumberOfTable;i++) cout<<"   "<<i<<"   |";
    cout<<"\n";
    cout<<"---------------------------------------------------------";
    cout<<"   ";
    cout<<"T.Thai\t|";
    for(auto x : databaseTable){
        if(x.mode == 0)cout<<"   "<<"   |";
        else cout<<"   "<<"X"<<"   |";
    }
    cout<<"\n\n"; 
}
/*
*Function: Managerr
*Discription: This function initializes a new instance of the Manage class.
*Input:
*Output: none
*/
void Manager::Managerr(){
    uint8_t n=10;
    while(n!=0){
    printf("1. Them do uong\n");
    printf("2. Sua do uong\n");
    printf("3. Xoa do uong\n");
    printf("4. Danh sach do uong\n");
    printf("5. Dat so luong ban \n");
    printf("0. Quay lai\n");
    printf("Nhap: ");
    scanf("%d",&n);
    printf("-------------------------------------------------------------\n");
    switch (n){
        case 1: AddBeverage();
        break;
        case 2: EditBeverage();
        break;
        case 3: DeleteBeverage();
        break;
        case 4: BeverageData();
        break;
        case 5: setNumberofTable();
        break;
        case 0: 
        break;
    }
    }
}
/*
*Function: AddBeverage
*Description: This function add beverage to bill of the chosen table
*Input:none
*Output: none
*/
void Manager::AddBeverage(){
    string BeverageName;
    uint32_t price;
    printf("Them do uong\n");
    printf("Ten do uong:");
    cin>>BeverageName;
    printf("Gia: ");
    cin>>price;
    Beverage Beverage(BeverageName, price);
    DatabaseBeverage.push_back(Beverage);
}
/*
*Function: BeverageMenu
*Description: This function print list of beverage
*Input:none
*Output: none
*/
void Manager::BeverageMenu(Beverage beverage){
    printf("| %-4d | %-8s | %-6d |\n",beverage.getid(),beverage.getBeverageName().c_str(),beverage.getPrice());
    //cout<<beverage.getid()<<"  |  "<< beverage.getBeverageName()<<"  |  "<<beverage.getPrice()<<"\n";
}
/*
*Function: BeverageMenu
*Description: This function print list of beverage in database
*Input:none
*Output: none
*/
void Manager::BeverageData(){
    printf("Danh sach do uong:\n");
    printf("|  id  |   Ten    |   Gia  |\n");
    for(Beverage beverage : DatabaseBeverage){
        this->BeverageMenu(beverage);
    }
    printf("------------------------------------------------------------------------------------\n");
}
/*
*Function: EditBeverage
*Description: This function edit beverage
*Input: none
*Output: none
*/
void Manager::EditBeverage(){
    uint16_t id_edit;
    bool mode=0;
    uint8_t temp;
    printf("Nhap ID cua thuc uong can sua: ");
    scanf("%d",&id_edit);
    for(uint8_t i=0; i < DatabaseBeverage.size();i++){
        if(id_edit== DatabaseBeverage[i].getid()){
            mode=1;
            printf("  id  |   Ten    |   Gia  |\n");
            BeverageMenu(DatabaseBeverage[i]);
            i=temp;
        }
    }
    if(mode=1){
        string Name_edit;
        cout<<"Nhap ten moi: "; cin>>Name_edit;
       this->DatabaseBeverage[temp].setBeverageName(Name_edit);
       uint32_t price_edit;
       cout<<"Nhap gia moi: "; cin>>price_edit;
       this->DatabaseBeverage[temp].setPrice(price_edit);
       cout<<"Da sua xong\n";
    }
    else cout<<"khong tim thay ID can sua\n";

}
/*
*Function: EditBeverage
*Description: This function delete beverage
*Input: none
*Output: none
*/
void Manager::DeleteBeverage(){
     uint16_t id_delete;
    bool mode=0;
    uint8_t temp;
    printf("Nhap ID cua thuc uong can xoa: ");
    scanf("%d",&id_delete);
    vector <Beverage>::iterator it= DatabaseBeverage.begin();
    for(Beverage Bv:DatabaseBeverage){
        if(id_delete== Bv.getid()){
            DatabaseBeverage.erase(it);
            printf("da xoa thanh cong");
        } it++;
    }
}

int main(){
    uint8_t n=10;
    while(n!=0){
    printf("TRANG CHINH \n");
    printf("1. Quan Ly\n");
    printf("2. Nhan Vien\n");
    printf("0. Thoat\n");
    printf("Nhap: ");
    scanf("%d",&n);
    Manager mn;
    Employee employee(mn.getDatabaseBeverage(), mn.getNumberofTable()); 
    switch (n){
        case 1:  mn.Managerr();
        break;
        case 2:  employee.DisplayStatusTable();
        break;
    }
}

}

