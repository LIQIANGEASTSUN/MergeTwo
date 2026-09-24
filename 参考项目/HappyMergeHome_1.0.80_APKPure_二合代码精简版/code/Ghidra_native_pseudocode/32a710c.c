
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b710c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_032b720c + 0x32b7120);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b7210 + 0x32b7134));
    func_0x01438628(*(undefined4 *)(_UNK_032b7214 + 0x32b7140));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_032b7218 + 0x32b7154) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032a3fc4(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_032a6fe4(iVar1,0);
  uVar3 = *(undefined4 *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x03b75ba0(iVar1,uVar3,**(undefined4 **)(_UNK_032b721c + 0x32b71ac));
  iVar1 = FUN_032a3fc4(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + 1;
  iVar1 = FUN_032a7050(0);
  if (iVar1 != 0) {
    func_0x032b7220();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x032b7204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

