
/* WARNING: Possible PIC construction at 0x02c0f95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0f994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0fa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0f998) */
/* WARNING: Removing unreachable block (ram,0x02c0f9a4) */
/* WARNING: Removing unreachable block (ram,0x02c0f9a8) */
/* WARNING: Removing unreachable block (ram,0x02c0f9c0) */
/* WARNING: Removing unreachable block (ram,0x02c0f9c4) */
/* WARNING: Removing unreachable block (ram,0x02c0f9e0) */
/* WARNING: Removing unreachable block (ram,0x02c0f9e4) */
/* WARNING: Removing unreachable block (ram,0x02c0f9fc) */
/* WARNING: Removing unreachable block (ram,0x02c0fa00) */
/* WARNING: Removing unreachable block (ram,0x02c0fa18) */
/* WARNING: Removing unreachable block (ram,0x02c0fa1c) */
/* WARNING: Removing unreachable block (ram,0x02c0fa40) */
/* WARNING: Removing unreachable block (ram,0x02c0fa44) */
/* WARNING: Removing unreachable block (ram,0x02c0f960) */
/* WARNING: Removing unreachable block (ram,0x02c0f968) */
/* WARNING: Removing unreachable block (ram,0x02c0f96c) */
/* WARNING: Removing unreachable block (ram,0x02c0fa68) */
/* WARNING: Removing unreachable block (ram,0x02c0fa70) */
/* WARNING: Removing unreachable block (ram,0x02c0fa74) */
/* WARNING: Removing unreachable block (ram,0x02c0fa98) */
/* WARNING: Removing unreachable block (ram,0x02c0fa9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0f588(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02c0fac0 + 0x2c0f5a4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0fac4 + 0x2c0f5b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fac8 + 0x2c0f5c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0facc + 0x2c0f5d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fad0 + 0x2c0f5dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fad4 + 0x2c0f5e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fad8 + 0x2c0f5f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fadc + 0x2c0f600));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fae0 + 0x2c0f60c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fae4 + 0x2c0f618));
    func_0x01438628(*(undefined4 *)(_UNK_02c0fae8 + 0x2c0f624));
    func_0x01438628(*(undefined4 *)(_UNK_02c0faec + 0x2c0f630));
    func_0x01438628(*(undefined4 *)(_UNK_02c0faf0 + 0x2c0f63c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0faf4 + 0x2c0f648));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd0,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar6,0,0);
    return;
  }
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x528),param_2,
                          **(undefined4 **)(_UNK_02c0faf8 + 0x2c0f6ac));
  *(char *)(param_1 + 0x524) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c0fafc + 0x2c0f6f0);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c0fb00 + 0x2c0f704);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c0fb04 + 0x2c0f738) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c0fb08 + 0x2c0f754));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c0fb10 + 0x2c0f788);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c0fb0c + 0x2c0f77c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c0fb14 + 0x2c0f7d4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c0fb18 + 0x2c0f808);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0fb1c + 0x2c0f81c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c0fb20 + 0x2c0f834);
    puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
    uVar6 = *puVar4;
    uVar8 = puVar4[1];
    uVar11 = puVar4[2];
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef1f8(iVar7,uVar6,uVar8,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c0fb24 + 0x2c0f88c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0fb28 + 0x2c0f8a0));
      *pcVar9 = '\x01';
    }
    iVar5 = *(int *)(*piVar10 + 0x5c);
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
    uVar6 = *(undefined4 *)(iVar5 + 0x10);
    uVar11 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uStack_30 = 0;
    func_0x024ef328(iVar7,uVar8,uVar6,uVar11);
    if (iVar3 == 0) {
      func_0x014388e4();
      func_0x024ef2f8(0,*puVar12,0);
      func_0x014388e4();
    }
    else {
      func_0x024ef2f8(iVar3,*puVar12,0);
    }
    iVar3 = func_0x024ef308(iVar3,0);
  }
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c0fb2c + 0x2c0f948),0);
  puVar12 = (undefined4 *)(param_1 + 0x51c);
  *puVar12 = uVar8;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar12 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar12 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

