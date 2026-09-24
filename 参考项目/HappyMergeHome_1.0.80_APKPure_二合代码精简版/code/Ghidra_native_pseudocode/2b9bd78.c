
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02babd78(undefined4 param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02babfc4 + 0x2babd98);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02babfc8 + 0x2babdb0));
    func_0x01438628(*(undefined4 *)(_UNK_02babfcc + 0x2babdbc));
    func_0x01438628(*(undefined4 *)(_UNK_02babfd0 + 0x2babdc8));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x02953fd4(0x5cba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar2 = (int *)func_0x028f9cac(iVar1,param_1,param_2,param_3,param_4,0);
    return piVar2;
  }
  *param_3 = 0;
  func_0x014385cc(param_3,0);
  *param_4 = 0;
  func_0x014385cc(param_4,0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0x50);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0xc) < 1)) {
LAB_02babf50:
    iVar1 = func_0x02bac548(param_1,param_2,param_3,param_4);
    if (iVar1 == 0) goto LAB_02babf84;
  }
  else {
    puVar5 = *(undefined4 **)(_UNK_02babfd4 + 0x2babe80);
    iVar1 = func_0x0152983c(iVar1,0,*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_24 = func_0x02c3f4b4(iVar1,0);
    iVar1 = **(int **)(**(int **)(_UNK_02babfd8 + 0x2babeac) + 0x5c);
    uVar3 = func_0x01524ffc(&uStack_24,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b665b8(iVar1,uVar3,0);
    if (iVar1 == 0) goto LAB_02babf50;
    iVar1 = *(int *)(param_2 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152983c(iVar1,0,*puVar5);
    *param_3 = iVar1;
    func_0x014385cc(param_3,iVar1);
    iVar1 = *(int *)(param_2 + 0x50);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152983c(iVar1,1,*puVar5);
    *param_4 = iVar1;
    func_0x014385cc(param_4,iVar1);
  }
  iVar1 = 0;
  if (*param_3 != 0) {
    iVar1 = *param_4;
    param_4 = (int *)0x1;
  }
  if (*param_3 != 0 && iVar1 != 0) {
    return param_4;
  }
LAB_02babf84:
  iVar1 = **(int **)(**(int **)(_UNK_02babfdc + 0x2babf90) + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b649c0(iVar1,2,0);
  return (int *)0x0;
}

