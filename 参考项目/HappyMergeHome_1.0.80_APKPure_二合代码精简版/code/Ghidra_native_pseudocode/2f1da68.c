
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f2da68(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02f2dbac + 0x2f2da80);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2dbb0 + 0x2f2da94));
    func_0x01438628(*(undefined4 *)(_UNK_02f2dbb4 + 0x2f2daa0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2dbb8 + 0x2f2daac));
    func_0x01438628(*(undefined4 *)(_UNK_02f2dbbc + 0x2f2dab8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02f2dbc0 + 0x2f2dacc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2dbc4 + 0x2f2dae8));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02f2dbc8 + 0x2f2db44) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2dbcc + 0x2f2db60));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f2dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

