
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fd9e68(undefined4 *param_1,undefined4 param_2,int param_3)

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
  
  pcVar5 = (char *)(_UNK_02fda050 + 0x2fd9e88);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fda054 + 0x2fd9e9c));
    func_0x01438628(*(undefined4 *)(_UNK_02fda058 + 0x2fd9ea8));
    func_0x01438628(*(undefined4 *)(_UNK_02fda05c + 0x2fd9eb4));
    func_0x01438628(*(undefined4 *)(_UNK_02fda060 + 0x2fd9ec0));
    func_0x01438628(*(undefined4 *)(_UNK_02fda064 + 0x2fd9ecc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7115,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02fda068 + 0x2fd9f3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02fda06c + 0x2fd9f58));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_02fda070 + 0x2fd9f80);
    while( true ) {
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar7) {
        uVar6 = 0;
        uVar3 = 0;
        puVar8 = *(undefined4 **)(_UNK_02fda078 + 0x2fd9fdc);
        goto LAB_02fda030;
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
    puVar8 = *(undefined4 **)(_UNK_02fda074 + 0x2fda030);
    uVar3 = *(undefined4 *)(iVar1 + 0x1c);
LAB_02fda030:
    uVar4 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,uVar6,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0x7115,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028d869c(&uStack_28,iVar1,param_2,param_3,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

