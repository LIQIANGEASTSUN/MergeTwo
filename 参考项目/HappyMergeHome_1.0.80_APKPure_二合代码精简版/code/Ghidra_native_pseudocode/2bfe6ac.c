
/* WARNING: Possible PIC construction at 0x02c0ea80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0eab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0eb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0eabc) */
/* WARNING: Removing unreachable block (ram,0x02c0eac8) */
/* WARNING: Removing unreachable block (ram,0x02c0eacc) */
/* WARNING: Removing unreachable block (ram,0x02c0eae4) */
/* WARNING: Removing unreachable block (ram,0x02c0eae8) */
/* WARNING: Removing unreachable block (ram,0x02c0eb04) */
/* WARNING: Removing unreachable block (ram,0x02c0eb08) */
/* WARNING: Removing unreachable block (ram,0x02c0eb20) */
/* WARNING: Removing unreachable block (ram,0x02c0eb24) */
/* WARNING: Removing unreachable block (ram,0x02c0eb3c) */
/* WARNING: Removing unreachable block (ram,0x02c0eb40) */
/* WARNING: Removing unreachable block (ram,0x02c0eb64) */
/* WARNING: Removing unreachable block (ram,0x02c0eb68) */
/* WARNING: Removing unreachable block (ram,0x02c0ea84) */
/* WARNING: Removing unreachable block (ram,0x02c0ea8c) */
/* WARNING: Removing unreachable block (ram,0x02c0ea90) */
/* WARNING: Removing unreachable block (ram,0x02c0eb8c) */
/* WARNING: Removing unreachable block (ram,0x02c0eb94) */
/* WARNING: Removing unreachable block (ram,0x02c0eb98) */
/* WARNING: Removing unreachable block (ram,0x02c0ebbc) */
/* WARNING: Removing unreachable block (ram,0x02c0ebc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0e6ac(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c0ebe4 + 0x2c0e6c8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebe8 + 0x2c0e6dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebec + 0x2c0e6e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebf0 + 0x2c0e6f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebf4 + 0x2c0e700));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebf8 + 0x2c0e70c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ebfc + 0x2c0e718));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec00 + 0x2c0e724));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec04 + 0x2c0e730));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec08 + 0x2c0e73c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec0c + 0x2c0e748));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec10 + 0x2c0e754));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec14 + 0x2c0e760));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ec18 + 0x2c0e76c));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fce,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fce,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x4d4),param_2,
                          **(undefined4 **)(_UNK_02c0ec1c + 0x2c0e7d0));
  *(char *)(param_1 + 0x4d0) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c0ec20 + 0x2c0e814);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c0ec24 + 0x2c0e828);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c0ec28 + 0x2c0e85c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c0ec2c + 0x2c0e878));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c0ec34 + 0x2c0e8ac);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c0ec30 + 0x2c0e8a0),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c0ec38 + 0x2c0e8f8));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c0ec3c + 0x2c0e92c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0ec40 + 0x2c0e940));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c0ec44 + 0x2c0e958);
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
    pcVar9 = (char *)(_UNK_02c0ec48 + 0x2c0e9b0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0ec4c + 0x2c0e9c4));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c0ec50 + 0x2c0ea6c),0);
  puVar12 = (undefined4 *)(param_1 + 0x4c8);
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

