
/* WARNING: Possible PIC construction at 0x02c495c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c496a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c495c8) */
/* WARNING: Removing unreachable block (ram,0x02c495d4) */
/* WARNING: Removing unreachable block (ram,0x02c495d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c494f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_02c49718 + 0x2c49510);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4971c + 0x2c49524));
    func_0x01438628(*(undefined4 *)(_UNK_02c49720 + 0x2c49530));
    func_0x01438628(*(undefined4 *)(_UNK_02c49724 + 0x2c4953c));
    func_0x01438628(*(undefined4 *)(_UNK_02c49728 + 0x2c49548));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd7e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xd7e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02871f94(iVar1,param_1,param_2,param_3);
    return;
  }
  piVar4 = (int *)(param_1 + 0x1c);
  if (*piVar4 != 0) {
    (*(code *)&SUB_04cd271c)(*piVar4,0,param_2,**(undefined4 **)(_UNK_02c49738 + 0x2c495c4));
    return;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4972c + 0x2c49600));
  func_0x024f1a50(iVar1,2,**(undefined4 **)(_UNK_02c49730 + 0x2c49618));
  *piVar4 = iVar1;
  func_0x014385cc(piVar4,iVar1);
  iVar1 = *piVar4;
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar6 = *(int **)(_UNK_02c49734 + 0x2c49660);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar6;
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  if (uVar7 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = param_2;
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    iVar8 = *piVar6;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    if (uVar7 < *(uint *)(iVar3 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      *(undefined4 *)(iVar3 + uVar7 * 4 + 0x10) = param_3;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38);
    param_2 = param_3;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38);
  }
  (*(code *)&SUB_04cd29cc)(iVar1,param_2,uVar2);
  return;
}

