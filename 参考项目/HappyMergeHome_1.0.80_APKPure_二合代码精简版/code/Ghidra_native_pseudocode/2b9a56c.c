
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02baa56c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02baa92c + 0x2baa588);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baa930 + 0x2baa59c));
    func_0x01438628(*(undefined4 *)(_UNK_02baa934 + 0x2baa5a8));
    func_0x01438628(*(undefined4 *)(_UNK_02baa938 + 0x2baa5b4));
    func_0x01438628(*(undefined4 *)(_UNK_02baa93c + 0x2baa5c0));
    func_0x01438628(*(undefined4 *)(_UNK_02baa940 + 0x2baa5cc));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  iVar1 = func_0x02953fd4(0xfc0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfc0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02869298(iVar1,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02c19900(iVar1,0);
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02baa944 + 0x2baa65c));
  func_0x024eed9c(iVar2,**(undefined4 **)(_UNK_02baa948 + 0x2baa670));
  iVar9 = *(int *)(param_2 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024eecb8(iVar9,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar9 = *(int *)(iVar2 + 8);
  uVar11 = *(uint *)(iVar2 + 0xc);
  piVar7 = *(int **)(_UNK_02baa94c + 0x2baa6c4);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  iVar12 = *piVar7;
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  if (uVar11 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar11 + 1;
    puVar4 = (undefined4 *)(iVar9 + uVar11 * 4 + 0x10);
    *puVar4 = uVar3;
    func_0x014385cc(puVar4,uVar3);
  }
  else {
    func_0x0152874c(iVar2,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
  }
  piVar7 = *(int **)(_UNK_02baa950 + 0x2baa71c);
  iVar9 = *(int *)(param_2 + 0xc);
  iVar12 = **(int **)(*piVar7 + 0x5c);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  piVar5 = (int *)func_0x024eecb8(iVar9,0);
  iVar9 = *(int *)(param_2 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uStack_28 = func_0x02c1969c(iVar9,0);
  uVar3 = func_0x01524ffc(&uStack_28,0);
  if (iVar12 == 0) {
    func_0x014388e4();
  }
  piVar10 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && (piVar10 = piVar5, *piVar5 != **(int **)(_UNK_02baa954 + 0x2baa798))
     ) {
    piVar10 = (int *)0x0;
  }
  func_0x02b647b4(iVar12,3,piVar10,0,uVar3,1,iVar2,0);
  iVar2 = *(int *)(param_2 + 0xc);
  iVar9 = **(int **)(*piVar7 + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_28 = func_0x02c1969c(iVar2,0);
  uVar3 = func_0x01524ffc(&uStack_28,0);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_28 = func_0x02c1969c(iVar2,0);
  uVar6 = func_0x01524ffc(&uStack_28,0);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  func_0x02b6127c(iVar9,5,uVar3,uVar6,0);
  if (-1 < *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) == iVar1) goto LAB_02baa8d4;
    iVar2 = **(int **)(*piVar7 + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b67abc(iVar2,3,0);
    if (iVar2 != 0) {
      iVar2 = **(int **)(*piVar7 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x02b6146c(iVar2,0);
    }
  }
  *(int *)(param_1 + 0x10) = iVar1;
LAB_02baa8d4:
  iVar1 = **(int **)(*piVar7 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67abc(iVar1,3,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02c312b8(iVar1,1,0);
  }
  return;
}

