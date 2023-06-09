#include "thuvien.h"
void nhap(int &m) {
    do {
        cout << "Nhap mang do dai cua mang 1 chieu: a[m]: ";
        cin >> m;
    } while (m <= 0);
}

void nhap_mang(int b[], int m) {
    cout << "Nhap du lieu mang 1 chieu:" << endl;
    for (int i = 0; i < m; i++) {
        cout << "Nhap b[" << i + 1 << "]: " << endl;
        cin >> b[i];
    }
    cout << "Mang ban vua nhap co gia tri la: " << endl;
}

void xuat_mang(int b[], int m) {
    cout << "b[ ";
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    cout << "]";
}

void dem_chan(int b[], int m, int &sochan) {
    sochan = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 0) {
            sochan++;
        }
    }

    cout << "Vay ham nay co: " << sochan << " trong mang b" << endl;
}

void vitri_le(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 1) {
            cout << "Vi tri le thu " << i + 1 << " co gia tri la: " << b[i] << endl;
        }
    }
}

bool kiem_scp(int m) {
    int scp_n = sqrt(m);
    if (scp_n * scp_n == m) {
        return true;
    } else {
        return false;
    }
}

bool la_so_nguyen_to(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}


bool kiemtra_giamdan(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (b[i] < b[i + 1]) {
            return false;
        }
    }
    return true;
}

bool la_so_hoan_thien(int x) {
    int tong_uoc = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            tong_uoc += i;
        }
    }
    return tong_uoc == x;
}

bool kiemtra_sochan(int b[], int m) {
    for (int i = 0 ; i < m; i++) {
        if (b[i] % 2 == 0) {
            return true;
        }
    }
    return false;
}

bool kiemtra_mangam(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (b[i] < 0) {
            return true;
        }
    }
    return false;
}

void in_scp(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (kiem_scp(b[i])) {
            cout << "Ham nay co so chinh phuong dau tien la " << b[i] << endl;
            break;
        } else {
            cout << "Ham nay khong co so chinh phuong!" << endl;
        }
    }
}

void tbc_chan_am(int b[], int m, int &tong_chanam) {
    int dem = 0;
    tong_chanam = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 0 && b[i] < 0) {
            tong_chanam += b[i];
            dem++;
        }
    }
    if (dem != 0) {
        cout << "Trung binh cong chan am la: " << tong_chanam / dem << endl;
    } else {
        cout << "Khong co so chan am trong mang" << endl;
    }

}

// XONG ĐỀ I
//=======================================================================================================================================================

void tich_chan(int b[], int m, int &tichchan) {
    tichchan = 1;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 0) {
            tichchan *= b[i];
        }
    }
    cout << "Tich cac phan tu chan co trong mang la: " << tichchan << endl;
}

bool co_gia_tri_am(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (b[i] < 0) {
            return true;
        }
    }
    return false;
}

void kiemtra_am(int b[], int m) {
    if (co_gia_tri_am(b, m)) {
        cout << "Mang nay co gia tri am!" << endl;
    } else {
        cout << "Mang nay khong co gia tri am!" << endl;
    }
}

void in_so_nguyen_to(int b[], int m) {
    cout << "Cac so nguyen to trong mang: ";
    for (int i = 0; i < m; i++) {
        if (la_so_nguyen_to(b[i])) {
            cout << b[i] << " ";
        }
    }
    cout << endl;
}

void tbc_sole_duong(int b[], int m, int &tong_leduong) {
    tong_leduong = 0;
    int dem = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 1 && b[i] > 0) {
            dem++;
            tong_leduong += b[i];
        }
    }
    if (!dem == 0) {
        cout << "Trung binh cong so le duong cua ham nay la: " << tong_leduong / dem << endl;
    } else {
        cout << "Trong ham nay khong co so le duong!" << endl;
    }
}

// Xong đề 2
//=======================================================================================================================================================

void uocchung_sau(int b[], int m) {
    int tonguoc = 0;
    for (int i = 0; i < m; i++) {
        if (6 % b[i] == 0) {
            tonguoc += b[i];
        }
    }
    cout << "Vay uoc chung cua so co tong cong la: " << tonguoc << endl;
}

void tong_vitri_chan(int b[], int m) {
    int tong_vitri_chan = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            tong_vitri_chan += b[i];

        }

    }
    cout << "Tong gia tri tai vi tri toa do so chan la " << tong_vitri_chan << endl;
}

void tongduong_chiaba(int b[], int m) {
    int tongduong = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 3 == 0 && b[i] > 0) {
            tongduong += b[i];
        }
    }
    cout << "Tong so duong chia het cho ba la: " << tongduong << endl;
}



void vitri_nguyento(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (la_so_nguyen_to(b[i])) {
            cout << "Vi tri so nguyen to trong mang la: " << i << endl;
        }
    }
    cout << endl;
}

void in_kq_giamdan(int b[], int m) {
    if (kiemtra_giamdan(b, m)) {
        cout << "Mang nay giam dan" << endl;
    } else {
        cout << "Mang nay khong giam dan" << endl;
    }
}

// Xong đề 3
//=======================================================================================================================================================

void vitri_sole(int b[], int m) {
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 1) {
            cout << "Vi tri so le la: " << i << endl;
        }
    }
}

void xuat_vi_tri_so_hoan_thien(int b[], int m) {
    cout << "Vi tri cac so hoan thien trong mang: ";
    for (int i = 0; i < m; i++) {
        if (la_so_hoan_thien(b[i])) {
            cout << i << " ";
        }
    }
    cout << endl;
}

void tong_am_le(int b[], int m, int &tongamle) {
    tongamle = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 1 && b[i] > 0) {
            tongamle += b[i];
        }
    }
    cout << "Tong am co so le trong ham nay la: " << tongamle << endl;
}

void tbc_sochan_am(int b[], int m, int &tbcchanam) {
    tbcchanam = 0;
    int dem = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 0 && b[i] < 0) {
            tbcchanam += b[i];
            dem++;
        }
    }
    if (!dem == 0) {
        cout << "Trung binh cong chan am la: " << tbcchanam / dem << endl;
    } else {
        cout << "Trong ham nay khong co so chan am" << endl;
    }
}

void tinhtong_boihai(int b[], int m, int &tongboihai) {
    tongboihai = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 2 == 0) {
            tongboihai += b[i];
        }
    }
    cout << "Tong boi hai cua mang nay la " << tongboihai << endl;
}

void demso_nguyento(int b[], int m) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        if (la_so_nguyen_to(b[i])) {
            dem++;
        }
    }
    if (dem == 0) {
        cout << "Ham nay khong co so nguyen to" << endl;
    } else {
        cout << "Ham nay co " << dem << " so nguyen to" << endl;
    }
}

void demboi5(int b[], int m) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] == 1 && b[i] % 5 == 0) {
            dem++;
        }
    }
    if (dem == 0) {
        cout << "Mang nay khong co phan tu nao la boi cua so le 5" << endl;
    } else {
        cout << "Trong mang nay co " << dem << " phan tu la boi cua so le 5 trong mang" << endl;
    }
}

void tong_cuavitri_chan(int b[], int m) {
    int tongvitrichan = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            tongvitrichan += b[i];
        }
    }
    cout << "Tong vi tri chan la: " << tongvitrichan << endl;
}

void phantu_nhonhat(int b[], int m) {
    int nhonhat = b[0];
    for (int i = 0; i < m; i++) {
        nhonhat = min(nhonhat, b[i]);
    }
    cout << "Phan tu nho nhat co trong mang nay la: " << nhonhat << endl;
}

void demphantuboi5(int b[], int m) {
    int dem = 0;
    for (int i = 0; i < m; i++) {
        if (b[i] % 5 == 0) {
            dem++;
        }
    }
    cout << "Co " << dem << " phan tu boi 5 trong mang" << endl;
}

void inkqkiemtra_chan(int b[], int m) {
    if (kiemtra_sochan(b, m)) {
        cout << "Ham nay co so chan" << endl;
    } else {
        cout << "Ham nay khong co so chan" << endl;
    }
}

void inkqkiemtra_mangam(int b[], int m) {
    if (kiemtra_mangam(b, m)) {
        cout << "Ham nay co so am" << endl;
    } else {
        cout << "Ham nay khong co so am" << endl;
    }
}

