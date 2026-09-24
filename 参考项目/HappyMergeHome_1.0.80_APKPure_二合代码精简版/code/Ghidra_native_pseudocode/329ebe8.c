
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032aebe8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_032aedd0 + 0x32aec08);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032aedd4 + 0x32aec1c));
    func_0x01438628(*(undefined4 *)(_UNK_032aedd8 + 0x32aec28));
    func_0x01438628(*(undefined4 *)(_UNK_032aeddc + 0x32aec34));
    func_0x01438628(*(undefined4 *)(_UNK_032aede0 + 0x32aec40));
    func_0x01438628(*(undefined4 *)(_UNK_032aede4 + 0x32aec4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8292,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032aede8 + 0x32aecbc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032aedec + 0x32aecd8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_032aedf0 + 0x32aed00);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_032aedf8 + 0x32aed5c);
        goto LAB_032aedb0;
      }
      iVar2 = func_0x04cfd760(iVar1,iVar7,*puVar8);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar2 + 8) == param_3) break;
      iVar7 = iVar7 + 1;
    }
    iVar2 = func_0x04cfd760(iVar1,iVar7,*puVar8);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x18);
    iVar1 = func_0x04cfd760(iVar1,iVar7,*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar8 = *(undefined4 **)(_UNK_032aedf4 + 0x32aedb0);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_032aedb0:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x8292,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

