
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01971850(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01971994 + 0x1971868);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01971998 + 0x197187c));
    func_0x01438628(*(undefined4 *)(_UNK_0197199c + 0x1971888));
    func_0x01438628(*(undefined4 *)(_UNK_019719a0 + 0x1971894));
    func_0x01438628(*(undefined4 *)(_UNK_019719a4 + 0x19718a0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_019719a8 + 0x19718b4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019719ac + 0x19718d0));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_019719b0 + 0x197192c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019719b4 + 0x1971948));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01971988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

