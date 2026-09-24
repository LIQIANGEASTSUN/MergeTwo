
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01725a24(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01725b68 + 0x1725a3c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01725b6c + 0x1725a50));
    func_0x01438628(*(undefined4 *)(_UNK_01725b70 + 0x1725a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01725b74 + 0x1725a68));
    func_0x01438628(*(undefined4 *)(_UNK_01725b78 + 0x1725a74));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01725b7c + 0x1725a88) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01725b80 + 0x1725aa4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_01725b84 + 0x1725b00) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01725b88 + 0x1725b1c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01725b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

