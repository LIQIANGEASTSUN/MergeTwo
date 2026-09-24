
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c74b78(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01c74da4 + 0x1c74b94);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c74da8 + 0x1c74ba8));
    func_0x01438628(*(undefined4 *)(_UNK_01c74dac + 0x1c74bb4));
    func_0x01438628(*(undefined4 *)(_UNK_01c74db0 + 0x1c74bc0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xad5a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c70aa4(param_2);
    if (iVar1 == 0) {
      uVar3 = 0;
      uVar4 = 0;
      puVar8 = *(undefined4 **)(_UNK_01c74db8 + 0x1c74d88);
    }
    else {
      iVar7 = 0;
      iVar1 = 0;
      puVar8 = *(undefined4 **)(_UNK_01c74db4 + 0x1c74c3c);
      while( true ) {
        iVar2 = FUN_01c733a0(param_2);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar7) break;
        iVar2 = FUN_01c733a0(param_2);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar7,*puVar8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar2 + 0x28) == '\0') {
          iVar2 = FUN_01c733a0(param_2);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar7,*puVar8);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(char *)(iVar2 + 0x39) != '\0') {
            iVar1 = iVar1 + 1;
          }
        }
        else {
          iVar1 = iVar1 + 1;
        }
        iVar7 = iVar7 + 1;
      }
      iVar7 = FUN_01c70aa4(param_2);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(int *)(iVar7 + 0x20) - iVar1;
      uVar3 = uVar3 & ~((int)uVar3 >> 0x1f);
      iVar1 = FUN_01c70aa4(param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      puVar8 = *(undefined4 **)(_UNK_01c74dbc + 0x1c74d70);
      uVar4 = *(undefined4 *)(iVar1 + 0x20);
    }
    uVar5 = *puVar8;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,uVar3,uVar4,uVar5);
  }
  else {
    iVar1 = func_0x029540a4(0xad5a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0291ffb4(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

