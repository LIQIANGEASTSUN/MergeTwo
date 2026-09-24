
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017e3b74(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_017e3c6c + 0x17e3b88);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017e3c70 + 0x17e3b9c));
    func_0x01438628(*(undefined4 *)(_UNK_017e3c74 + 0x17e3ba8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017e3c78 + 0x17e3bbc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_017d0b50();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_017d3cec(iVar1);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x024f05ac(iVar1,uVar3,**(undefined4 **)(_UNK_017e3c7c + 0x17e3c0c));
  iVar1 = FUN_017d0b50();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  iVar1 = FUN_017d3d58();
  if (iVar1 != 0) {
    func_0x017f42a4(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x017e3c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

