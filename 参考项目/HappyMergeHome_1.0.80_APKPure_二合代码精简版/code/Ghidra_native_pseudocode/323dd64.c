
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0324dd64(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_0324dea8 + 0x324dd7c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0324deac + 0x324dd90));
    func_0x01438628(*(undefined4 *)(_UNK_0324deb0 + 0x324dd9c));
    func_0x01438628(*(undefined4 *)(_UNK_0324deb4 + 0x324dda8));
    func_0x01438628(*(undefined4 *)(_UNK_0324deb8 + 0x324ddb4));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0324debc + 0x324ddc8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0324dec0 + 0x324dde4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_0324dec4 + 0x324de40) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0324dec8 + 0x324de5c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0324de9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

