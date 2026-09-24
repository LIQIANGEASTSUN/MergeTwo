
/* WARNING: Possible PIC construction at 0x01aeadd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01aeaddc) */
/* WARNING: Removing unreachable block (ram,0x01aeade8) */
/* WARNING: Removing unreachable block (ram,0x01aeadec) */
/* WARNING: Removing unreachable block (ram,0x01aeae14) */
/* WARNING: Removing unreachable block (ram,0x01aeadf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01aeacf0(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01aeae2c + 0x1aead10);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01aeae30 + 0x1aead24));
    func_0x01438628(*(undefined4 *)(_UNK_01aeae34 + 0x1aead30));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xa4af,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    iVar3 = FUN_01ae9a14(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
      param_1 = iVar3;
    }
    if (iVar3 != 0 && iVar1 != 0) {
      if (0 < iVar1) {
        uVar2 = (*(code *)&SUB_04cfd760)(param_1,0,**(undefined4 **)(_UNK_01aeae38 + 0x1aeadd0));
        return uVar2;
      }
      *param_3 = 1;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0xa4af,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02933960(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

