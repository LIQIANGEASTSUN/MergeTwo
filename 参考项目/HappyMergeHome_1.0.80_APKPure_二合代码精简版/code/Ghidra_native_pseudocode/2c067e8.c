
/* WARNING: Possible PIC construction at 0x02c16bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c16bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c16cc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c16bf8) */
/* WARNING: Removing unreachable block (ram,0x02c16c04) */
/* WARNING: Removing unreachable block (ram,0x02c16c08) */
/* WARNING: Removing unreachable block (ram,0x02c16c20) */
/* WARNING: Removing unreachable block (ram,0x02c16c24) */
/* WARNING: Removing unreachable block (ram,0x02c16c40) */
/* WARNING: Removing unreachable block (ram,0x02c16c44) */
/* WARNING: Removing unreachable block (ram,0x02c16c5c) */
/* WARNING: Removing unreachable block (ram,0x02c16c60) */
/* WARNING: Removing unreachable block (ram,0x02c16c78) */
/* WARNING: Removing unreachable block (ram,0x02c16c7c) */
/* WARNING: Removing unreachable block (ram,0x02c16ca0) */
/* WARNING: Removing unreachable block (ram,0x02c16ca4) */
/* WARNING: Removing unreachable block (ram,0x02c16bc0) */
/* WARNING: Removing unreachable block (ram,0x02c16bc8) */
/* WARNING: Removing unreachable block (ram,0x02c16bcc) */
/* WARNING: Removing unreachable block (ram,0x02c16cc8) */
/* WARNING: Removing unreachable block (ram,0x02c16cd0) */
/* WARNING: Removing unreachable block (ram,0x02c16cd4) */
/* WARNING: Removing unreachable block (ram,0x02c16cf8) */
/* WARNING: Removing unreachable block (ram,0x02c16cfc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c167e8(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c16d20 + 0x2c16804);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c16d24 + 0x2c16818));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d28 + 0x2c16824));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d2c + 0x2c16830));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d30 + 0x2c1683c));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d34 + 0x2c16848));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d38 + 0x2c16854));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d3c + 0x2c16860));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d40 + 0x2c1686c));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d44 + 0x2c16878));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d48 + 0x2c16884));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d4c + 0x2c16890));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d50 + 0x2c1689c));
    func_0x01438628(*(undefined4 *)(_UNK_02c16d54 + 0x2c168a8));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe4,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe4,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x39c),param_2,
                          **(undefined4 **)(_UNK_02c16d58 + 0x2c1690c));
  *(char *)(param_1 + 0x398) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c16d5c + 0x2c16950);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c16d60 + 0x2c16964);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c16d64 + 0x2c16998) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c16d68 + 0x2c169b4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c16d70 + 0x2c169e8);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c16d6c + 0x2c169dc),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c16d74 + 0x2c16a34));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c16d78 + 0x2c16a68);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c16d7c + 0x2c16a7c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c16d80 + 0x2c16a94);
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
    pcVar9 = (char *)(_UNK_02c16d84 + 0x2c16aec);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c16d88 + 0x2c16b00));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c16d8c + 0x2c16ba8),0);
  puVar12 = (undefined4 *)(param_1 + 0x390);
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

