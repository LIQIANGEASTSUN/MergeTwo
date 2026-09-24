
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1c0e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_01b1c2f8 + 0x1b1c108);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b1c2fc + 0x1b1c11c));
    func_0x01438628(*(undefined4 *)(_UNK_01b1c300 + 0x1b1c128));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x11f6,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b18c14(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x6c);
      if (param_2 <= *(int *)(param_1 + 0x6c)) {
        iVar1 = param_2;
      }
      if (param_2 < 0) {
        iVar1 = 0;
      }
      iVar6 = param_3;
      if (iVar1 < param_3) {
        iVar6 = iVar1;
      }
      if (param_3 < 0) {
        iVar6 = 0;
      }
      iVar2 = FUN_01b18c14(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
        func_0x026c6930(0,0,0);
        func_0x014388e4();
        func_0x026c69ec(0,0,0);
        func_0x014388e4();
      }
      else {
        func_0x026c6930(iVar2,0,0);
        func_0x026c69ec(iVar2,0,0);
      }
      iVar5 = *(int *)(iVar2 + 0x18);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x024f0570(iVar5,**(undefined4 **)(_UNK_01b1c304 + 0x1b1c238));
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar2,**(undefined4 **)(_UNK_01b1c308 + 0x1b1c25c));
      uVar3 = FUN_01b1b67c(param_1,0);
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      uVar3 = FUN_01b1b67c(param_1,0);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_01b1bc00(param_1,iVar1);
      FUN_01b1b190(param_1,iVar6);
      uVar3 = FUN_01b1b124(param_1);
      uVar3 = FUN_01b1b67c(param_1,uVar3);
      *(undefined4 *)(param_1 + 0x44) = uVar3;
      uVar3 = FUN_01b1bb7c(param_1);
      uVar3 = FUN_01b1b67c(param_1,uVar3);
      *(undefined4 *)(param_1 + 0x48) = uVar3;
      uVar3 = FUN_01b1b764(param_1);
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      uVar3 = FUN_01b1c094(param_1);
      *(undefined4 *)(param_1 + 0x40) = uVar3;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x11f6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

