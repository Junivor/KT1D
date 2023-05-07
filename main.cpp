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
        cout << "1. Dem so chan trong mang" << endl;
        cout << "2. Dem vi tri so le co trong mang" << endl;
        cout << "3. In so chinh phuong dau tien co trong mang" << endl;
        cout << "4. In ket qua trung binh cong chan am" << endl;
        cout << "5. In ra tich chan cua phan tu mang" << endl;
        cout << "6. In ra so nguyen to trong mang" << endl;
        cout << "7. Kiem tra co so am nao trong mang hay khong" << endl;
        cout << "8. Tinh trung binh cong so le duong co trong mang" << endl;
        cout << "9. Tinh uoc chung cua sau trong mang" << endl;
        cout << "10. Tinh tong vi tri cua so chan" << endl;
        cout << "11. Tinh tong so duong chia het cho ba" << endl;
        cout << "12. Kiem tra ham co giam dan hay khong" << endl;
        cout << "13. In ra vi tri so nguyen to trong mang" << endl;
        cout << "14. In ra vi tri so le" << endl;
        cout << "15. In tong so trong do co so am va la so le" << endl;
        cout << "16. Tinh trung binh cong so chan va la so am" << endl;
        cout << "17. In ra vi tri so hoan thien" << endl;
        cout << "18. Tinh tong khi so do la boi hai" << endl;
        cout << "19. Dem so nguyen to" << endl;
        cout << "20. Dem nhung so nao la boi cua so 5 trong mang" << endl;
        cout << "21. Tinh tong cua nhung so o vi tri chan" << endl;
        cout << "22. So sanh va tim ra phan tu nho nhat trong mang" << endl;
        cout << "23. Dem co bao nhieu phan tu la boi cua 5" << endl;
        cout << "24. Kiem tra xem mang nay co so chan khong" << endl;
        cout << "25. Kiem tra xem mang nay co so am khong" << endl;
        cout << "0. Thoat" << endl;
        cout << "Nhap lua chon: ";
        cin >> lua_chon;

        switch (lua_chon) {
            case 0:
                thoat = true;
                break;
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
                tongduong_chiaba(b, a);
                break;
            case 12:
                in_kq_giamdan(b, a);
                break;
            case 13:
                vitri_nguyento(b, a);
                break;
            case 14:
                vitri_sole(b, a);
                break;
            case 15:
                tong_am_le(b, a, tongamle);
                break;
            case 16:
                tbc_sochan_am(b, a, tbcchanam);
                break;
            case 17:
                xuat_vi_tri_so_hoan_thien(b, a);
                break;
            case 18:
                tinhtong_boihai(b, a, tongboihai);
                break;
            case 19:
                demso_nguyento(b, a);
                break;
            case 20:
                demboi5(b, a);
                break;
            case 21:
                tong_cuavitri_chan(b, a);
                break;
            case 22:
                phantu_nhonhat(b, a);
                break;
            case 23:
                demphantuboi5(b, a);
                break;
            case 24:
                inkqkiemtra_chan(b, a);
                break;
            case 25:
                inkqkiemtra_mangam(b, a);
                break;
            default:
                cout << "Lua chon khong hop le. Vui long nhap lai." << endl;
                break;
        }
    }

    return 0;
}

