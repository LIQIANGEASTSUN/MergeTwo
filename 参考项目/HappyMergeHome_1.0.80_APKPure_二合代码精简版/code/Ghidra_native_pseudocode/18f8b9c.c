
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01908b9c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01908c94 + 0x1908bb0);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01908c98 + 0x1908bc4));
    func_0x01438628(*(undefined4 *)(_UNK_01908c9c + 0x1908bd0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01908ca0 + 0x1908be4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018f5b04();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_018f8b24(iVar1);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f05ac(iVar1,uVar3,**(undefined4 **)(_UNK_01908ca4 + 0x1908c34));
  iVar1 = FUN_018f5b04();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  iVar1 = FUN_018f8b90();
  if (iVar1 != 0) {
    func_0x019196d8(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01908c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

