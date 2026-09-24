
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a02614(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)(_UNK_02a02758 + 0x2a0262c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02a0275c + 0x2a02640));
    func_0x01438628(*(undefined4 *)(_UNK_02a02760 + 0x2a0264c));
    func_0x01438628(*(undefined4 *)(_UNK_02a02764 + 0x2a02658));
    func_0x01438628(*(undefined4 *)(_UNK_02a02768 + 0x2a02664));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02a0276c + 0x2a02678) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a02770 + 0x2a02694));
  uVar4 = *(undefined4 *)(param_1 + 8);
  uVar5 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x02b82850(iVar1,uVar4,uVar5,uVar3,1,0xffffffff,0xffffffff,0);
  if (*(int *)(**(int **)(_UNK_02a02774 + 0x2a026f0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02a02778 + 0x2a0270c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  func_0x0299ab14(iVar1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a0274c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

