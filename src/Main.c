#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    char branch[] = "root";
    char newbranch[] = "main";
    
    char text[] = "aaa\nbbb";
    Files_WriteT("vc/src/Main.txt",text,sizeof(text) - 1);

    VCtl vc = VCtl_New("vc","vc/.vcignore");
    
    char text0[] = "aaa\nbbb";
    Files_WriteT("vc/src/Main.txt",text0,sizeof(text0) - 1);
    VCtl_UpdateBranch(&vc,"root","root updated!");
    
    char text1[] = "aab\nbbc";
    Files_WriteT("vc/src/Main.txt",text1,sizeof(text1) - 1);
    VCtl_MakeBranch(&vc,"root","main","main got added!");

    char text2[] = "aac\nbbd";
    Files_WriteT("vc/src/Main.txt",text2,sizeof(text2) - 1);
    VCtl_UpdateBranch(&vc,"root","root updated again!");
    
    VCtl_SetFileKeep(&vc,(VCtl_FileKeep[]){
        VCtl_FileKeep_New("vc/src/Main.txt",CStrCmp_KeepMap_Make((CStrCmp_Keep[]){
            CStrCmp_Keep_New(0U,CSTRCMP_KEEP_FIRST),
            CStrCmp_Keep_New(1U,CSTRCMP_KEEP_SECOND),
            CStrCmp_Keep_Null()
        })),
        VCtl_FileKeep_Null()
    });
    VCtl_MergeBranch(&vc,"root","main","merge of root and main!");
    
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