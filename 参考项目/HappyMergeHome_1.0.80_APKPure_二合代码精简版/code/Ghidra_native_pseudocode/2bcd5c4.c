
/* WARNING: Possible PIC construction at 0x02bdd730: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bdd734) */
/* WARNING: Removing unreachable block (ram,0x02bdd74c) */
/* WARNING: Removing unreachable block (ram,0x02bdd750) */
/* WARNING: Removing unreachable block (ram,0x02bdd75c) */
/* WARNING: Removing unreachable block (ram,0x02bdd760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdd5c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int extraout_r3;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  
  pcVar7 = (char *)(_UNK_02bdd77c + 0x2bdd5e4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdd780 + 0x2bdd5fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bdd784 + 0x2bdd608));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5cfe,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x5cfe,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x028f9628(iVar2,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar2 = FUN_02bad050(param_1,param_4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_02bdd788 + 0x2bdd6a4);
  uVar3 = func_0x03b780b0(iVar2,param_2,*puVar9);
  iVar2 = FUN_02bad050(param_1,param_4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar2 + 0x10);
  iVar2 = FUN_02bad050(param_1,param_4);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  piVar4 = (int *)func_0x03b780b0(iVar2,param_3,*puVar9);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar6 = **(int **)(_UNK_02bdd78c + 0x2bdd730);
  uVar12 = 0x2bdd734;
  iVar2 = iVar6;
  iVar10 = iVar8;
  piVar11 = piVar4;
  if (iVar8 == 0) {
    func_0x024f83d4();
    iVar2 = extraout_r3;
  }
  uVar3 = func_0x04cfd760(iVar8,param_2,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x5c),iVar2,
                          iVar10,param_4,param_1,piVar11,uVar3,uVar12);
  if (piVar4 == (int *)0x0) {
    func_0x024f83d4();
  }
  iVar2 = (**(code **)(*piVar4 + 0xc0))(piVar4,uVar3,*(undefined4 *)(*piVar4 + 0xc4));
  if (iVar2 != 0) {
    return;
  }
  if (iVar8 == 0) {
    func_0x024f83d4();
  }
  func_0x04cfd7ac(iVar8,param_2,piVar4,
                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 100));
  pcVar7 = (char *)(_UNK_03b775fc + 0x3b77504);
  if (*pcVar7 == '\0') {
    func_0x024f83cc(*(undefined4 *)(_UNK_03b77600 + 0x3b77518),
                    *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x24));
    func_0x024f83cc(*(undefined4 *)(_UNK_03b77604 + 0x3b77524));
    *pcVar7 = '\x01';
  }
  piVar4 = *(int **)(_UNK_03b77608 + 0x3b77538);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x024f83d8();
  }
  puVar9 = *(undefined4 **)(_UNK_03b7760c + 0x3b77554);
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x024f83d4();
  }
  uVar5 = *(uint *)(iVar2 + 0x60);
  cVar1 = *(char *)(iVar8 + 0x18);
  *(uint *)(iVar2 + 0x60) = uVar5 + 1;
  *(uint *)(iVar2 + 100) = *(int *)(iVar2 + 100) + (uint)(0xfffffffe < uVar5);
  if (cVar1 != '\0') {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  if (*(char *)(iVar8 + 0x19) != '\0') {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x024f83d8();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x024f83d4();
    }
    *(undefined1 *)(iVar2 + 0x39) = 1;
  }
  return;
}

