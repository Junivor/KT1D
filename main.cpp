#include "thuvien.h"
int main() {
    const int so = 10;
    int a = so;
    int b[a];

    int sochan, tongchan_am, tongle_duong ,tichchan, tongamle, tbcchanam, tongboihai;

    nhap(a);
    nhap_mang(b, a);
    xuat_mang(b, a);

    int lua_chon;
    bool thoat = false;

    while (!thoat) {
        cout << "Menu:" << endl;
        cout << "1. Kiem tra gia tri am" << endl;
        cout << "2. In so nguyen to" << endl;
        cout << "3. Tinh tong cac phan tu la uoc cua 6" << endl;
        cout << "4. Xuat vi tri cac so hoan thien" << endl;
        cout << "..." << endl;
        cout << "19. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;

        switch (lua_chon) {
            case 1:
                dem_chan(b, a, sochan);
                break;
            case 2:
                vitri_le(b, a);
                break;
            case 3:
                in_scp(b, a);
                break;
            case 4:
                tbc_chan_am(b, a, tongchan_am);
                break;
            case 5:
                tich_chan(b, a, tichchan);
                break;
            case 6:
                in_so_nguyen_to(b, a);
                break;
            case 7:
                kiemtra_am(b, a);
                break;
            case 8:
                tbc_sole_duong(b, a, tongle_duong);
                break;
            case 9:
                uocchung_sau(b, a);
                break;
            case 10:
                tong_vitri_chan(b, a);
                break;
            case 11:
                vitri_nguyento(b, a);
                break;
            case 12:
                vitri_sole(b, a);
                break;
            case 13:
                tong_am_le(b, a, tongamle);
                break;
            case 14:
                tbc_sochan_am(b, a, tbcchanam);
                break;
            case 15:
                xuat_vi_tri_so_hoan_thien(b, a);
                break;
            case 16:
                tinhtong_boihai(b, a, tongboihai);
                break;
            case 18:

            case 0:
                thoat = true;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
                break;
        }
    }

    return 0;
}

