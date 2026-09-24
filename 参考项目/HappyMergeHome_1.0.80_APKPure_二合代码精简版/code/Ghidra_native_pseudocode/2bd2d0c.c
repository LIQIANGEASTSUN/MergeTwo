
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be2d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  pcVar4 = (char *)(_UNK_02be2ecc + 0x2be2d2c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be2ed0 + 0x2be2d40));
    func_0x01438628(*(undefined4 *)(_UNK_02be2ed4 + 0x2be2d4c));
    func_0x01438628(*(undefined4 *)(_UNK_02be2ed8 + 0x2be2d58));
    func_0x01438628(*(undefined4 *)(_UNK_02be2edc + 0x2be2d64));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5c66,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad204(param_1,param_2,param_3);
    if (*(int *)(**(int **)(_UNK_02be2ee0 + 0x2be2ddc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be2ee4 + 0x2be2df8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(undefined4 *)(iVar1 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar2 = 0;
    iVar3 = func_0x029a6fa8(iVar3,uVar5,0);
    if ((iVar3 != 0) && (*(int *)(iVar1 + 0xc) == 6)) {
      if (*(char *)(iVar1 + 0x60) == '\0') {
        if (*(int *)(**(int **)(_UNK_02be2ee8 + 0x2be2e6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be2eec + 0x2be2e88));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar6 = func_0x026ffbe0(iVar3,0);
        iVar3 = func_0x014e6e04((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
        iVar3 = iVar3 - *(int *)(iVar1 + 0x30);
        iVar2 = *(int *)(iVar1 + 0x98) - iVar3;
        if (*(int *)(iVar1 + 0x98) < iVar3) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = *(int *)(iVar1 + 100);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5c66,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}

