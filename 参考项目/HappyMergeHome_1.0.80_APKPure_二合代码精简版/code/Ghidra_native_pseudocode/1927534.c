
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01937534(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_01937678 + 0x193754c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0193767c + 0x1937560));
    func_0x01438628(*(undefined4 *)(_UNK_01937680 + 0x193756c));
    func_0x01438628(*(undefined4 *)(_UNK_01937684 + 0x1937578));
    func_0x01438628(*(undefined4 *)(_UNK_01937688 + 0x1937584));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0193768c + 0x1937598) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01937690 + 0x19375b4));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_01937694 + 0x1937610) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01937698 + 0x193762c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0193766c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

