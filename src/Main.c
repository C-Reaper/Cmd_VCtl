#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    VCtl vc = VCtl_New(".",".vcignore");
    
    //VCtl_Init(&vc);
    VCtl_ReadAnchor(&vc);

    VCtl_MakeBranch(&vc,"root","main","main got added!");
    VCtl_UpdateBranch(&vc,"main","main got updated!");

    VCtl_MakeBranch(&vc,"main","master","master got added!");
    VCtl_UpdateBranch(&vc,"main","feature 1 got added!");

    VCtl_UpdateBranch(&vc,"main","feature 2 got added!");
    VCtl_UpdateBranch(&vc,"master","feature 1 got added!");

    VCtl_WriteBranches(&vc);
    
    VCtl_Print(&vc);
    VCtl_Free(&vc);
    return 0;
}