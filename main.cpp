#include "TXLib.h"

int main()
    {
    txCreateWindow (1540, 800);

    string question;
    HDC pic1;
    string answer1;
    HDC pic2;
    string answer2;
    HDC pic3;
    string answer3;

    int n_question = 0;
    if(n_question == 1)
    {
        txTransparentBlt(txDC(),0 ,0  , 1540, 800  ,txLoadImage("��������/�������.bmp"), 0, 0, RGB(512, 68, 68));
        question = "��� �� ����� � ����?";
        pic1 = txLoadImage("��������/������.bmp");
        answer1 = "������ �������";
        pic2 = txLoadImage("��������/�����.bmp");
        answer2 = "������� ����� �����";
        pic3 = txLoadImage("��������/��������.bmp");
        answer3 = "��������";
    }
    else
    {
        question = "��� �� ����� � ����?";
        pic2 = txLoadImage("��������/�����.bmp");
        answer2 = "������� ����� �����";
        pic3 = txLoadImage("��������/��������.bmp");
        answer3 = "��������";
        pic1 = txLoadImage("��������/������.bmp");
        answer1 = "������ �������";
    }

    while(true)
    {
     txBegin();


//������
    txTransparentBlt(txDC(),0 ,0  , 1540, 800  ,txLoadImage("��������/�������.bmp"), 0, 0, RGB(512, 68, 68));
    txSetColor (TX_BLACK);
    txSetFillColor (TX_TRANSPARENT);
    //������� �����
    txRectangle (250, 25, 1240, 110);
    txSelectFont("Times New Roman", 25);

    txSetFillColor (TX_WHITE);
    //������� ������ �������
    txRectangle(1340, 35, 1515, 90);
    txDrawText(1340, 35, 1515, 90, "������ � _");
    //������� ������ �������
    txRectangle (250, 25, 1240, 110);
    txDrawText(250, 25, 1240, 110, question.c_str());

    //������� �������� ������� ������

    txBitBlt(txDC(), 30, 225, 400, 400, pic1);
    //������� �������� ������� ������

    txBitBlt(txDC(), 560, 225, 400, 400, pic2);
    //������� �������� �������� ������

    txBitBlt(txDC(), 1100, 225, 400, 400, pic3);

    //������� ������ ������� ������
    txRectangle (70, 590, 400, 660);
    txDrawText(70, 590, 400, 660, answer1.c_str());
    //������� ������ ������� ������
    txRectangle (580, 590, 940, 660);
    txDrawText(580, 590, 940, 660, answer2.c_str());
    //������� ������ �������� ������
    txRectangle (1115, 590, 1470, 660);
    txDrawText(1115, 590, 1470, 660, answer3.c_str());
    txEnd();

    }
    txDeleteDC(pic1);
    txDeleteDC(pic2);
    txDeleteDC(pic3);

txTextCursor (false);
return 0;
    }

