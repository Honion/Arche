#include <windows.h>
#include <stdio.h>
#include "constantes.h"


HINSTANCE instance;
HWND hEdit[2];


LRESULT CALLBACK procedureFenetrePrincipale(HWND, UINT, WPARAM, LPARAM);


BOOL APIENTRY aPropos_procedure(HWND hDlg,UINT uMsg,WPARAM wParam,LPARAM lParam);

     HWND afficheEditUneLigne (HWND fenetrePrincipale)
{
HWND hEdit=CreateWindow(
                        "EDIT",
                        "Modifiez le texte SVP",
                         WS_VISIBLE|WS_CHILD|WS_BORDER|ES_CENTER ,
                         50,10,500,20,fenetrePrincipale,NULL,instance,NULL);

return hEdit;
}


int WinMain (HINSTANCE cetteInstance, HINSTANCE precedenteInstance,
LPSTR lignesDeCommande, int modeDAffichage)
{
    HWND fenetrePrincipale;
    MSG message;
    WNDCLASS classeFenetre;
    instance = cetteInstance;
    classeFenetre.style = 0;
    classeFenetre.lpfnWndProc = procedureFenetrePrincipale;
    classeFenetre.cbClsExtra = 0;
    classeFenetre.cbWndExtra = 0;
    classeFenetre.hInstance = NULL;
    classeFenetre.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    classeFenetre.hCursor = LoadCursor(NULL, IDC_ARROW);
    classeFenetre.hbrBackground = (HBRUSH)(1 + COLOR_BTNFACE);
    classeFenetre.hbrBackground = (HBRUSH)GetStockObject(GRAY_BRUSH);
    classeFenetre.lpszMenuName = NULL;
    classeFenetre.lpszClassName = "classeF";
    // On prévoit quand même le cas où ça échoue
    if(!RegisterClass(&classeFenetre)) return FALSE;
    fenetrePrincipale = CreateWindow("classeF", "Arche Univ 2014 !", WS_OVERLAPPEDWINDOW,
                                   CW_USEDEFAULT, CW_USEDEFAULT, 0, 0,
                                                   NULL, LoadMenu(instance, "ID_MENU"), cetteInstance, NULL);
    if (!fenetrePrincipale) return FALSE;
    ShowWindow(fenetrePrincipale, 3);
    UpdateWindow(fenetrePrincipale);
    while (GetMessage(&message, NULL, 0, 0))
    {
        TranslateMessage(&message);
        DispatchMessage(&message);
    }
    return message.wParam;
}
LRESULT CALLBACK procedureFenetrePrincipale(HWND fenetrePrincipale, UINT message, WPARAM wParam, LPARAM lParam)
{
    static HWND boutons[2] = {NULL};
    HWND hWndEdit[2];
    switch (message)
    {
        case WM_CREATE:
               // hEdit[0]=afficheEditUneLigne(fenetrePrincipale);
                boutons[0] = CreateWindow("BUTTON", "Connexion", WS_CHILD | WS_VISIBLE,
        						800, 550, 320, 30, fenetrePrincipale, (HMENU)ID_B_PARLER, instance, NULL);
                boutons[1] = CreateWindow("BUTTON", "Quitter Arche", WS_CHILD | WS_VISIBLE,
       							 800, 630, 320, 30, fenetrePrincipale, (HMENU)ID_B_QUITTER, instance, NULL);
        	    hWndEdit[0] =  CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("Edit"), TEXT("Identifiant"),
                               WS_CHILD | WS_VISIBLE, 880, 430, 150,
                               30, fenetrePrincipale, NULL, NULL, NULL);
            	hWndEdit[1] =  CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("Edit"), TEXT("Mot de Passe"),
                               WS_CHILD | WS_VISIBLE, 880, 480, 150,
                               30, fenetrePrincipale, NULL, NULL, NULL);
            return 0;
        case WM_COMMAND:
            switch(LOWORD(wParam))
            {
                case ID_B_APROPOS:
                    DialogBox(instance, "APROPOS", fenetrePrincipale, (DLGPROC)aPropos_procedure);
                    break;
                case ID_B_PARLER:
                    MessageBox(fenetrePrincipale, "Aucun Fichier à déposer", "Alerte !", MB_ICONINFORMATION);
                    break;
                case ID_B_QUITTER:
                    SendMessage(fenetrePrincipale, WM_DESTROY, 0, 0);
                    break;
            }
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        
        case WM_PAINT :
        	{
        	  HBRUSH hbRed, hbGreen, hbrOld;
              HPEN hp2px, hpOld;
              HFONT NewFont, OldFont;
              LOGFONT lf;

              char st[] = "ARCHE UNIVERSITE" ;

              PAINTSTRUCT ps;
              HDC hdc = BeginPaint(fenetrePrincipale, &ps);
              SetBkMode(hdc, TRANSPARENT);

             // Rectangle(hdc, 20, 60, 120, 100);

            //  hp2px = CreatePen(PS_SOLID, 2, 0x00FF0000);
             // hpOld = SelectObject(hdc,hp2px);

            //  hbRed = CreateSolidBrush(0x000000FF);
             // hbrOld = SelectObject(hdc,hbRed);

              Rectangle(hdc, 160, 60, 260, 100);

             // hbGreen = CreateHatchBrush(HS_DIAGCROSS, 0x0000BB00);
             // SelectObject(hdc,hbGreen);
             // DeleteObject(hbRed);

            //  Ellipse(hdc, 300, 20, 400, 120);

              MoveToEx(hdc, 780, 400, NULL);
              LineTo(hdc, 1130, 400);
              
              MoveToEx(hdc, 780, 700, NULL);
              LineTo(hdc, 1130, 700);

             // SelectObject(hdc,hbrOld);
            //  DeleteObject(hbGreen);

            //  SelectObject(hdc,hpOld);
            //  DeleteObject(hp2px);


             // NewFont = CreateFontIndirect(&lf);
             // OldFont = SelectObject(hdc,NewFont);

              SetTextColor(hdc, 0x000000FF);
              TextOut(hdc, 880, 180, st, lstrlen(st));

            //  SelectObject(hdc,OldFont);
           //   DeleteObject(NewFont);

              EndPaint(fenetrePrincipale, &ps);
              return 0;
			}
        default:
            return DefWindowProc(fenetrePrincipale, message, wParam, lParam);
    }
}

BOOL APIENTRY aPropos_procedure(HWND boiteDeDialogue,UINT message,WPARAM wParam,LPARAM lParam)
{
    switch (message)
    {
      case WM_INITDIALOG:
         return TRUE;
      case WM_COMMAND:
         if (LOWORD(wParam) == IDCANCEL || LOWORD(wParam) == IDOK)
         {
           EndDialog(boiteDeDialogue,0);
           return TRUE;
         }
         return 0;
      default:
         return FALSE;
    }
}
