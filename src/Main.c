#include "../inc/Container/Array.h"
#include "../inc/Library/AffineTransform.h"

int main(int argc,char **argv){
    AffineTransform at = AffineTransform_New();
    AffineTransform_Calc(&at,(Vec2){ 0.0f,0.0f });

    Array a = Array_New(10,sizeof(int));
    Array_Set(&a,(int[]){ 0 },0);
    Array_Print(&a);
    Array_Free(&a);
    return 0;
}