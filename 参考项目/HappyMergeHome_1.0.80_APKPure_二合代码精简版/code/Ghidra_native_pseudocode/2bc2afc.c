
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bd2afc(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  pcVar5 = (char *)(_UNK_02bd2cd4 + 0x2bd2b1c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd2cd8 + 0x2bd2b34));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2cdc + 0x2bd2b40));
    func_0x01438628(*(undefined4 *)(_UNK_02bd2ce0 + 0x2bd2b4c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1dd6,0);
  if (iVar1 == 0) {
    if ((param_3 < 0x10) && ((1 << (param_3 & 0xff) & 0xbc2cU) != 0)) {
      iVar1 = FUN_02bad050(param_1,param_4);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x024f2200(iVar1,param_2,**(undefined4 **)(_UNK_02bd2ce4 + 0x2bd2bfc));
      iVar1 = FUN_02bad204(param_1,uVar2,param_4);
      if (*(int *)(**(int **)(_UNK_02bd2ce8 + 0x2bd2c28) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd2cec + 0x2bd2c44));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x026ffbe0(iVar3,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x014e6e04((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_026f7088(iVar1,uVar4,(int)uVar6,uVar4,0);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      FUN_02bd0b60(param_1,*(undefined4 *)(param_2 + 8),uVar2,param_4,0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1dd6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028b56f8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}

