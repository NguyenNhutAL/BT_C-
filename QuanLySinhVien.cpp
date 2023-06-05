/*
* File Name: QuanLySinhVien.cpp
* Author: Nguyen Minh Nhut
* Date: 25/05/2023
* Description: managing student
*/
#include <stdio.h>
#include <stdint.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
typedef enum{
    NAM,
    NU
}typeGioiTinh;

typedef enum{
    GIOI,
    KHA,
    TRUNGBINH,
    YEU
}TypeHocLuc;

class QuanLySinhVien{
    private:
        uint8_t ID;
        string Ten;
        typeGioiTinh GioiTinh;
        uint8_t Tuoi;
        float DiemToan;
        float DiemLy;
        float DiemHoa;
        float DiemTB;
        TypeHocLuc HocLuc;
    public:
        QuanLySinhVien(string Ten, typeGioiTinh GioiTinh, uint8_t Tuoi, float DiemToan, float DiemLy, float DiemHoa );
        uint8_t getID();
        string getTen();
        void setTen(string Ten);
        typeGioiTinh getGioiTinh();
        void setGioiTinh(typeGioiTinh GioiTinh);
        uint8_t getTuoi();
        void setTuoi(uint8_t Tuoi);
        float getDiemToan();
        void setDiemToan(float DiemToan);
        float getDiemLy();
        void setDiemLy(float DiemLy);
        float getDiemHoa();
        void setDiemHoa(float DiemHoa);
        float getDiemTB();
        TypeHocLuc getHocLuc();

};

QuanLySinhVien::QuanLySinhVien(string Ten, typeGioiTinh GioiTinh, uint8_t Tuoi, float DiemToan, float DiemLy, float DiemHoa ){
    static uint8_t ID= 101;
    QuanLySinhVien::ID = ID;
    ID++;
    QuanLySinhVien::Ten = Ten;
    QuanLySinhVien::GioiTinh = GioiTinh;
    QuanLySinhVien::Tuoi = Tuoi;
    QuanLySinhVien::DiemToan = DiemToan;
    QuanLySinhVien::DiemLy = DiemLy;
    QuanLySinhVien::DiemHoa = DiemHoa;
}
/*
* Class: SinhVien
* Function: getID
* Description: This function use for getting id of student
* Input:
*   Dont have input parameters
* Output:
*   return: ID of Student
*/
uint8_t QuanLySinhVien::getID(){
    return this->ID;
}
/*
* Class: SinhVien
* Function: getTen
* Description: This function use for getting name of student
* Input:
*   Dont have input parameters
* Output:
*   return: Name of Student
*/
string QuanLySinhVien::getTen(){
    return this->Ten;
}
/*
* Class: SinhVien
* Function: setTen
* Description: This function use for setting name of a Student
* Input:
*   Ten: name of Student
* Output:
*   return: None
*/
void QuanLySinhVien::setTen(string Ten){
    this->Ten= Ten;
}
/*
* Class: SinhVien
* Function: getGioiTinh
* Description: This function use for getting sex of student
* Input:
*   Dont have input parameters
* Output:
*   return: Sex of Student
*/
typeGioiTinh QuanLySinhVien::getGioiTinh(){
    return this->GioiTinh;
}
/*
* Class: SinhVien
* Function: setGioiTinh
* Description: This function use for setting sex of a Student
* Input:
*   GioiTinh: sex of Student
* Output:
*   return: None
*/
void QuanLySinhVien::setGioiTinh(typeGioiTinh GioiTinh){
    this->GioiTinh=GioiTinh;
}
/*
* Class: SinhVien
* Function: getTuoi
* Description: This function use for getting age of student
* Input:
*   Dont have input parameters
* Output:
*   return: Age of Student
*/
uint8_t QuanLySinhVien::getTuoi(){
    return this->Tuoi;
}
/*
* Class: SinhVien
* Function: setTuoi
* Description: This function use for setting age of a Student
* Input:
*   tuoi: age of Student
* Output:
*   return: None
*/
void QuanLySinhVien::setTuoi(uint8_t Tuoi){
    this->Tuoi= Tuoi;
}
/*
* Class: SinhVien
* Function: getDiemToan
* Description: This function use for getting mark of Math
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Math
*/
float QuanLySinhVien::getDiemToan(){
    return this->DiemToan;
}
/*
* Class: SinhVien
* Function: setDiemToan
* Description: This function use for setting mark of Math
* Input:
*   DiemToan: mark of Math
* Output:
*   return: None
*/
void QuanLySinhVien::setDiemToan(float DiemToan){
    this->DiemToan= DiemToan;
}
/*
* Class: SinhVien
* Function: getDiemLy
* Description: This function use for getting mark of Physic
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Physic
*/
float QuanLySinhVien::getDiemLy(){
    return this->DiemLy;
}
/*
* Class: SinhVien
* Function: setDiemLy
* Description: This function use for setting mark of Physic
* Input:
*   diemLy: mark of Physic
* Output:
*   return: None
*/
void QuanLySinhVien::setDiemLy(float DiemLy){
    this->DiemLy= DiemLy;
}
/*
* Class: SinhVien
* Function: getDiemHoa
* Description: This function use for getting mark of Chemistry
* Input:
*   Dont have input parameters
* Output:
*   return: Mark of Chemistry
*/
float QuanLySinhVien::getDiemHoa(){
    return this->DiemHoa;
}
/*
* Class: SinhVien
* Function: setDiemHoa
* Description: This function use for setting mark of Chemistry
* Input:
*   diemHoa: mark of Chemistry
* Output:
*   return: None
*/
void QuanLySinhVien::setDiemHoa(float DiemHoa){
    this->DiemHoa= DiemHoa;
}
/*
* Class: SinhVien
* Function: getDiemTrungBinh
* Description: This function use for getting average mark
* Input:
*   Dont have input parameters
* Output:
*   return: Average mark
*/
float QuanLySinhVien::getDiemTB(){
    return (DiemToan + DiemLy + DiemHoa)/3;
}
/*
* Class: SinhVien
* Function: getHocLuc
* Description: This function use for getting ability of Student
* Input:
*   Dont have input parameters
* Output:
*   return: Ability of Student
*/
TypeHocLuc QuanLySinhVien::getHocLuc(){
    if(QuanLySinhVien::getDiemTB() >= 8)
        return GIOI;
    else if( (QuanLySinhVien::getDiemTB() >= 6.5) && (QuanLySinhVien::getDiemTB() < 8))
        return KHA;
    else if( (QuanLySinhVien::getDiemTB()) >= 5 && (QuanLySinhVien::getDiemTB() < 6.5))
        return TRUNGBINH;
    else
        return YEU;

}
   
class Menu{
    private:
    vector <QuanLySinhVien> Database;
    public:
        Menu();
        void ThemSV();
        void CapNhatThongTinSV();
        void XoaSV();
        void TimKiemSV();
        void SapXepSVTheoTen();
        void SapXepSVTheoDiem();
        void HienThiDSSV();
        void GhiDSSV();

};
/*
* Class: Menu
* Function: constructor of class Menu
* Description: This function is use to show list command
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
Menu::Menu(){
    int kiemtr=10;
    while(kiemtr!=0){
        cout<<"Nhan '1' de them sinh vien \n";
        cout<<"Nhan '2' de cap nhat danh sach SV\n";
        cout<<"Nhan '3' de xoa SV\n";
        cout<<"Nhan '4' de tim kiem SV\n";
        cout<<"Nhan '5' de sap xep sinh vien theo ten\n";
        cout<<"Nhan '6' de sap xep sinh vien theo diem\n";
        cout<<"Nhan '7' de hien thi danh sach sinh vien\n";
        cout<<"Nhan '8' de ghi danh sach sinh vien\n";
        cout<<"Nhan '0' de thoat\n";
        cout<<"Lua chon cua ban la: ";
        cin>>kiemtr;
        switch(kiemtr){
            case 1: { Menu::ThemSV();                }break;
            case 2: { Menu::CapNhatThongTinSV();     }break;
            case 3: { Menu::XoaSV();                 }break;
            case 4: { Menu::TimKiemSV();             }break;
            case 5: { Menu::SapXepSVTheoTen();       }break;
            case 6: { Menu::SapXepSVTheoDiem();      }break;
            case 7: { Menu::HienThiDSSV();           }break;
            case 8: { //Menu::GhiDSSV();            
               }break;
            default:                                  break;
    
        }
    }
}
/*
* Class: Menu
* Function: ThemSV
* Description: This function is use to add studen information
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::ThemSV(){
    string Ten;
    string s_GioiTinh;
    typeGioiTinh GT;
    bool test= 0;
    int age;
    float Diem_Toan;
    float DiemLy;
    float DiemHoa;
    cout<<"NHAP THONG TIN SINH VIEN\n";
    cout<<"Nhap ten SV: ";
    cin>>Ten;
    cout<<"Nhap tuoi: ";
    cin>>age;
    cout<<"Nhap gioi tinh (Nam/Nu): ";
    cin>>s_GioiTinh;
    while(test!=1){
        if(s_GioiTinh=="Nam"){
            GT=NAM;
            test=1;
        }
        else if(s_GioiTinh== "Nu"){
            GT=NU;
            test=1;
        }
        else {
            printf("khong hop le. Nhap lai gioi tinh (Nam/Nu): ");
            cin>>s_GioiTinh;
        }
    };
    cout<<"Nhap diem Toan: ";
    cin>>Diem_Toan;
    cout<<"Nhap diem Ly: ";
    cin>>DiemLy;
    cout<<"Nhap diem Hoa: ";
    cin>>DiemHoa;
    QuanLySinhVien sv(Ten,GT,age,Diem_Toan,DiemLy,DiemHoa);
    Database.push_back(sv);
    printf("Da nhap thanh cong\n");

}
/*
* Class: Menu
* Function: CapNhatThongTinSv
* Description: This function is use to update student information
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::CapNhatThongTinSV(){
    int IDCapNhat;
    cout << "Nhap ID sinh vien can cap nhat: ";
    cin>>IDCapNhat;
    int it = 0;
    for(QuanLySinhVien sv : Database){
        if (sv.getID() == IDCapNhat){
            string Ten;
            string s_GioiTinh;
            typeGioiTinh GT;
            bool test= 0;
            int age;
            float Diem_Toan;
            float DiemLy;
            float DiemHoa;
            cout<<"NHAP THONG TIN SINH VIEN\n";
            cout<<"Nhap ten SV: ";
            cin>>Ten;
            cout<<"Nhap tuoi: ";
            cin>>age;
            cout<<"Nhap gioi tinh (Nam/Nu): ";
            cin>>s_GioiTinh;
            while(test!=1){
                if(s_GioiTinh=="Nam"){
                    GT=NAM;
                    test=1;
                }
                else if(s_GioiTinh== "Nu"){
                    GT=NU;
                    test=1;
                }
                else {
                    printf("khong hop le. Nhap lai gioi tinh (Nam/Nu): ");
                    cin>>s_GioiTinh;
                }
            };
            cout<<"Nhap diem Toan: ";
            cin>>Diem_Toan;
            cout<<"Nhap diem Ly: ";
            cin>>DiemLy;
            cout<<"Nhap diem Hoa: ";
            cin>>DiemHoa;
            sv.setTen(Ten);
            sv.setDiemHoa(DiemHoa);
            sv.setDiemToan(Diem_Toan);
            sv.setDiemLy(DiemLy);
            sv.setGioiTinh(GT);
            sv.setTuoi(age);
            sv.getDiemTB();
            sv.getHocLuc();
            Database[it] = sv;
            cout<<" Da cap nhat sinh vien co ID : "<<sv.getID()<<"\n";
        }
        it ++;
    }
}
/*
* Class: Menu
* Function: HienThiDSSV
* Description: This function is use to show a table of student informtion
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::HienThiDSSV(){
    cout<<"Danh Sach Sinh Vien: \n";
    printf("|   ID   |          Ten         |  Tuoi  | Gioi tinh | D.TB  | D.Toan|  D.Ly |  D.Hoa |  Hoc Luc |\n");
    for(QuanLySinhVien data: Database){
        string gtinh;
        if (data.getGioiTinh()== NAM) gtinh= "Nam";
        else gtinh= "Nu";

        string hocluc;
        if(data.getHocLuc()== GIOI) hocluc="Gioi";
        else if(data.getHocLuc()==KHA) hocluc="Kha ";
        else if(data.getHocLuc()==TRUNGBINH) hocluc="TBinh";
        else hocluc= "Yeu ";
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("|  %-6d|  %-20s|  %-6d|  %-9s| %-6.2f| %-6.2f| %-6.2f|  %-6.2f|  %-8s| \n",data.getID(),data.getTen().c_str(),data.getTuoi(),gtinh.c_str(), data.getDiemTB(), data.getDiemToan(),data.getDiemLy(),data.getDiemHoa(),hocluc.c_str());

    }
}
/*
* Class: Menu
* Function: XoaSV
* Description: This function is use to delete studenta
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::XoaSV(){
    int id_delete;
    cout << "ID sinh vien can xoa la: ";
    cin>>id_delete;
    vector <QuanLySinhVien>::iterator it= Database.begin();
    for(QuanLySinhVien sv : Database){
        if (sv.getID() == id_delete){
            Database.erase(it);
            cout <<"--Da xoa thanh cong sinh vien--" <<endl ;
        } 
        it++;
    }
}
/*
* Class: Menu
* Function: TimKiemSV
* Description: This function is use to find a student information
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::TimKiemSV(){
    string Ten_cantim;
    cout<<"Nhap ten can tim: ";
    cin>>Ten_cantim;
    for(QuanLySinhVien sv : Database){
        if (sv.getTen() == Ten_cantim){
            cout<<"Thong tin sinh vien can tim la: \n";
            printf("|   ID   |          Ten         |  Tuoi  | Gioi tinh | D.TB  | D.Toan|  D.Ly |  D.Hoa |  Hoc Luc |\n");
            string gtinh;
            if (sv.getGioiTinh()== NAM) gtinh= "Nam";
            else gtinh= "Nu";

            string hocluc;
            if(sv.getHocLuc()== GIOI) hocluc="Gioi";
            else if(sv.getHocLuc()==KHA) hocluc="Kha ";
            else if(sv.getHocLuc()==TRUNGBINH) hocluc="TBinh";
            else hocluc= "Yeu ";
            printf("-------------------------------------------------------------------------------------------------\n");
            printf("|  %-6d|  %-20s|  %-6d|  %-9s| %-6.2f| %-6.2f| %-6.2f|  %-6.2f|  %-8s| \n",sv.getID(),sv.getTen().c_str(),sv.getTuoi(),gtinh.c_str(), sv.getDiemTB(), sv.getDiemToan(),sv.getDiemLy(),sv.getDiemHoa(),hocluc.c_str());
        } 
    }
}
/*
* Class: Menu
* Function: SapXepSVTheoTen
* Description: This function is use to arrange all student by name
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::SapXepSVTheoTen(){
    int size = Database.size();
    for(int i = 0; i < size; i++){
        for (int j = i+1 ; j < size; j++){
            if (Database[i].getTen() > Database[j].getTen()){
                    Database.push_back(Database[i]);
                    Database[i] = Database[j];
                    Database[j] = Database[size];
                    Database.pop_back();
            }
        }
    }
    printf("Da sap xep danh sach SV theo ten\n");
}
/*
* Class: Menu
* Function: SapXepSVTheoTen
* Description: This function is use to arrange all student by GPA
* Input:
*   Dont have input parameters
* Output:
*   return: none
*/
void Menu::SapXepSVTheoDiem(){
    int size = Database.size();
    for(int i = 0; i < size; i++){
        for (int j = i+1 ; j < size; j++){
            if (Database[i].getDiemTB() > Database[j].getDiemTB()){
                    Database.push_back(Database[i]);
                    Database[i] = Database[j];
                    Database[j] = Database[size];
                    Database.pop_back();
            }
        }
    }
    printf("Da sap xep danh sach SV theo ten\n");  
}
int main(){
    // QuanLySinhVien sv1("nguyen minh nhut",NAM,18,3.5,7,10);
    Menu nhap;

}