
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03012f50(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_03013138 + 0x3012f70);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0301313c + 0x3012f84));
    func_0x01438628(*(undefined4 *)(_UNK_03013140 + 0x3012f90));
    func_0x01438628(*(undefined4 *)(_UNK_03013144 + 0x3012f9c));
    func_0x01438628(*(undefined4 *)(_UNK_03013148 + 0x3012fa8));
    func_0x01438628(*(undefined4 *)(_UNK_0301314c + 0x3012fb4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7290,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03013150 + 0x3013024) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03013154 + 0x3013040));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_03013158 + 0x3013068);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_03013160 + 0x30130c4);
        goto LAB_03013118;
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
    puVar8 = *(undefined4 **)(_UNK_0301315c + 0x3013118);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_03013118:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7290,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

