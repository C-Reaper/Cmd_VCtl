#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    // char text[] = "#include <stdio.h>\nint main(){\n\treturn 0;\n}";
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);

    VCtl vc = VCtl_New("vc","vc/.vcignore");

    //VCtl_Init(&vc);
    
    VCtl_ReadBranches(&vc);
    
    // text[39] = '1';
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);
    // VCtl_UpdateBranch(&vc,"root","root got updated 1!");
    
    // text[39] = '2';
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);
    // VCtl_UpdateBranch(&vc,"root","root got updated 2!");

    // text[39] = '3';
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);
    // VCtl_UpdateBranch(&vc,"root","root got updated 3!");

    // text[39] = '4';
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);
    // VCtl_UpdateBranch(&vc,"root","root got updated 4!");

    //Files_Create("vc/src/Header0.h");
    //VCtl_MakeBranch(&vc,"root","main","main got added!");
    //Files_Create("vc/src/Header1.h");
    //VCtl_UpdateBranch(&vc,"main","main got updated!");
    //VCtl_WriteBranches(&vc);

    //VCtl_ReadBranches(&vc);
    VCtl_BackBranch(&vc,"root");

    VCtl_WriteBranches(&vc);
    
    VCtl_Print(&vc);
    VCtl_Free(&vc);
    return 0;
}