#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    char branch[] = "root";
    char newbranch[] = "main";
    char msg[] = "branch added!";
    
    char text[] = "aaa\nbbb\nccc";
    Files_WriteT("vc/src/Main.txt",text,sizeof(text) - 1);

    VCtl vc = VCtl_New("vc","vc/.vcignore");
    
    char text0[] = "aab\nbbb\nccc";
    Files_WriteT("vc/src/Main.txt",text0,sizeof(text0) - 1);
    VCtl_UpdateBranch(&vc,"root",msg);
    
    char text1[] = "aab\nbbc\nccc";
    Files_WriteT("vc/src/Main.txt",text1,sizeof(text1) - 1);
    VCtl_MakeBranch(&vc,"root","main",msg);

    char text2[] = "aab\nbbc\nccd";
    Files_WriteT("vc/src/Main.txt",text2,sizeof(text2) - 1);
    VCtl_UpdateBranch(&vc,"main",msg);
    
    char text3[] = "aab\nbbd\nccc";
    Files_WriteT("vc/src/Main.txt",text3,sizeof(text3) - 1);
    VCtl_UpdateBranch(&vc,"root",msg);
    
    VCtl_MergeBranch(&vc,"root","main",msg);
    
    //VCtl_ReadBranches(&vc);
    //VCtl_UpdateBranch(&vc,branch,msg);
    //VCtl_BackBranch(&vc,branch);
    //VCtl_MakeBranch(&vc,branch,newbranch,msg);
    //VCtl_MergeBranch(&vc,branch,newbranch,msg);
    //VCtl_WriteBranches(&vc);
    
    VCtl_Delete(&vc);
    VCtl_Print(&vc);
    VCtl_Free(&vc);
    return 0;
}