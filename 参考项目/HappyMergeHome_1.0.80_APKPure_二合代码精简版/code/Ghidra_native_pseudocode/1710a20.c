
/* WARNING: Possible PIC construction at 0x01720b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01720b58) */
/* WARNING: Removing unreachable block (ram,0x01720b64) */
/* WARNING: Removing unreachable block (ram,0x01720b68) */
/* WARNING: Removing unreachable block (ram,0x01720b90) */
/* WARNING: Removing unreachable block (ram,0x01720b74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01720a20(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01720ba8 + 0x1720a40);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01720bac + 0x1720a54));
    func_0x01438628(*(undefined4 *)(_UNK_01720bb0 + 0x1720a60));
    func_0x01438628(*(undefined4 *)(_UNK_01720bb4 + 0x1720a6c));
    func_0x01438628(*(undefined4 *)(_UNK_01720bb8 + 0x1720a78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b9e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01720bbc + 0x1720adc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01720bc0 + 0x1720af8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = *(int *)(iVar1 + 0x2c);
    iVar1 = 0;
    *param_3 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0xc);
    }
    if (iVar4 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(iVar4,0,**(undefined4 **)(_UNK_01720bc4 + 0x1720b4c));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x8b9e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02924984(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

