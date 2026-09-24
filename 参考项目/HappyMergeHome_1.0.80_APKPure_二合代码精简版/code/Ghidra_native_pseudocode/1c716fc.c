
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c816fc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01c81904 + 0x1c81718);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c81908 + 0x1c8172c));
    func_0x01438628(*(undefined4 *)(_UNK_01c8190c + 0x1c81738));
    func_0x01438628(*(undefined4 *)(_UNK_01c81910 + 0x1c81744));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xadd8,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01c70aa4(param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
      uVar3 = 0;
      puVar7 = *(undefined4 **)(_UNK_01c81918 + 0x1c818e8);
    }
    else {
      iVar6 = 0;
      iVar1 = 0;
      puVar7 = *(undefined4 **)(_UNK_01c81914 + 0x1c817c0);
      while( true ) {
        iVar2 = FUN_01c733a0(param_2);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar6) break;
        iVar2 = FUN_01c733a0(param_2);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b780b0(iVar2,iVar6,*puVar7);
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
          iVar2 = func_0x03b780b0(iVar2,iVar6,*puVar7);
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
        iVar6 = iVar6 + 1;
      }
      iVar6 = FUN_01c70aa4(param_2);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      puVar7 = *(undefined4 **)(_UNK_01c8191c + 0x1c818d0);
      uVar3 = *(undefined4 *)(iVar6 + 0x20);
    }
    uVar4 = *puVar7;
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar1,uVar3,uVar4);
  }
  else {
    iVar1 = func_0x029540a4(0xadd8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0291ffb4(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}

