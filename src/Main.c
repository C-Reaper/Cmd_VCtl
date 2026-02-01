#include "/home/codeleaded/System/Static/Library/VCtl.h"

int main(int argc,char **argv){
    char cmd[] = "update";
    char branch[] = "main";
    char newbranch[] = "main";
    char msg[] = "branch added!";
    
    // char text[] = "#include <stdio.h>\nint main(){\n\treturn 0;\n}";
    // Files_WriteT("vc/src/Main.c",text,sizeof(text) - 1);

    VCtl vc = VCtl_New("vc","vc/.vcignore");
    VCtl_ReadBranches(&vc);

    if(CStr_Cmp(cmd,"init")){
        printf("[VCtl]: main -> init!\n");
    }else if(CStr_Cmp(cmd,"update")){
        VCtl_UpdateBranch(&vc,branch,msg);
    }else if(CStr_Cmp(cmd,"back")){
        VCtl_BackBranch(&vc,branch);
    }else if(CStr_Cmp(cmd,"branch")){
        VCtl_MakeBranch(&vc,branch,newbranch,msg);
    }else if(CStr_Cmp(cmd,"merge")){
        VCtl_MergeBranch(&vc,branch,newbranch,msg);
    }

    VCtl_WriteBranches(&vc);
    
    VCtl_Print(&vc);
    VCtl_Free(&vc);
    return 0;
}