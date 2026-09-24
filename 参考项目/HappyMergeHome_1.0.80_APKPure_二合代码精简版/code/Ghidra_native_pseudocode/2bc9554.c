
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd9554(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  
  pcVar3 = (char *)(_UNK_02bd9774 + 0x2bd9574);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd9778 + 0x2bd9588));
    func_0x01438628(*(undefined4 *)(_UNK_02bd977c + 0x2bd9594));
    func_0x01438628(*(undefined4 *)(_UNK_02bd9780 + 0x2bd95a0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cef,0);
  if (iVar1 == 0) {
    if (param_2 != -1) {
      if (*(int *)(**(int **)(_UNK_02bd9784 + 0x2bd960c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd9788 + 0x2bd9628));
      iVar2 = FUN_02bad050(param_1,param_3);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar5 = *(undefined4 **)(_UNK_02bd978c + 0x2bd9670);
      iVar2 = func_0x03b780b0(iVar2,param_2,*puVar5);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(undefined4 *)(iVar2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029a6fa8(iVar1,uVar4,0);
      if (iVar1 != 0) {
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03b780b0(iVar1,param_2,*puVar5);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026f6f10(iVar1,0,0);
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x03b780b0(iVar1,param_2,*puVar5);
        uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((int)uVar6 == 0) {
          func_0x014388e4();
          uVar4 = extraout_r1;
        }
        FUN_026f6d70((int)uVar6,uVar4,0,0,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5cef,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028cf098(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

