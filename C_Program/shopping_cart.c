#include<stdio.h>
#include<stdint.h>

uint8_t GIO_HANG ; 

typedef enum{
    AO          = 1 << 0,   //0b00000001
    QUAN        = 1 << 1,   //0b00000010
    VAY         = 1 << 2,   //0b00000100
    DAM         = 1 << 3,   //0b00001000
    NHAN        = 1 << 4,   //0b00010000
    VONG_TAY    = 1 << 5,   //0b00100000
    GIAY        = 1 << 6,   //0b01000000
    TUI         = 1 << 7    //0b10000000
}DoDungCaNhan;

void Them_Vao_Gio_Hang(uint8_t *gio_hang, DoDungCaNhan ten_do_dung){
    *gio_hang |= ten_do_dung;
}

void Xoa_Khoi_Gio_Hang(uint8_t *gio_hang, DoDungCaNhan ten_do_dung){
    *gio_hang &= ~ten_do_dung;
}

void Kiem_Tra_San_Pham(uint8_t gio_hang , DoDungCaNhan ten_do_dung)
{
    printf ("kiem tra san pham :\n");
        
            if ((GIO_HANG & ten_do_dung) == 1 << 0)
            {
                printf("co AO\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 1 )
            {
                printf("co QUAN\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 2 )
            {
                printf("co VAY\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 3 )
            {
                printf("co DAM\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 4)
            {
                printf("co NHAN\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 5 )
            {
                printf("co VONG_TAY\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 6 )
            {
                printf("co GIAY\n");
            }
            else if ((GIO_HANG & ten_do_dung) == 1 << 7 )
            {
                printf("co TUI\n");
            }else
            printf("khong co\n");
    
}

void Hien_Thi (uint8_t gio_hang)
{
        printf("Hien thi san pham : \t");
        if((GIO_HANG & 1 << 0) == AO ) printf("A0\t");
        if((GIO_HANG & 1 << 1 ) == QUAN) printf("QUAN\t");
        if((GIO_HANG & 1 << 2 ) == VAY) printf("VAY\t");
        if((GIO_HANG & 1 << 3) == DAM) printf("DAM\t");
        if((GIO_HANG & 1 << 4) == NHAN) printf("NHAN\t");
        if((GIO_HANG & 1 << 5) == VONG_TAY) printf("VONG_TAY\t");
        if((GIO_HANG & 1 << 6) == GIAY) printf("GIAY\t");
        if((GIO_HANG & 1 << 7) == TUI) printf("TUI\t");
}


int main ()
{   
        Them_Vao_Gio_Hang(&GIO_HANG, AO|QUAN|VAY|DAM);
        Xoa_Khoi_Gio_Hang(&GIO_HANG, QUAN);
        Kiem_Tra_San_Pham(GIO_HANG, AO);
        Hien_Thi(GIO_HANG) ;
        return 0 ; 
}