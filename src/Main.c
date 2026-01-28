#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    VCtl vc = VCtl_New("vc","vc/.vcignore");
    
    //VCtl_Init(&vc);
    //Files_Create("vc/src/Header0.h");
    //VCtl_MakeBranch(&vc,"root","main","main got added!");
    //Files_Create("vc/src/Header1.h");
    //VCtl_UpdateBranch(&vc,"main","main got updated!");
    //VCtl_WriteBranches(&vc);

    VCtl_ReadBranches(&vc);
    VCtl_BackBranch(&vc,"main");
    
    VCtl_Print(&vc);
    VCtl_Free(&vc);
    return 0;
}