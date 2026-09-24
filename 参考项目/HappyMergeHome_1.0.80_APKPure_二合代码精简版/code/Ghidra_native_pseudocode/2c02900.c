
/* WARNING: Possible PIC construction at 0x02c12cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c12d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c12ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c12d10) */
/* WARNING: Removing unreachable block (ram,0x02c12d1c) */
/* WARNING: Removing unreachable block (ram,0x02c12d20) */
/* WARNING: Removing unreachable block (ram,0x02c12d38) */
/* WARNING: Removing unreachable block (ram,0x02c12d3c) */
/* WARNING: Removing unreachable block (ram,0x02c12d58) */
/* WARNING: Removing unreachable block (ram,0x02c12d5c) */
/* WARNING: Removing unreachable block (ram,0x02c12d74) */
/* WARNING: Removing unreachable block (ram,0x02c12d78) */
/* WARNING: Removing unreachable block (ram,0x02c12d90) */
/* WARNING: Removing unreachable block (ram,0x02c12d94) */
/* WARNING: Removing unreachable block (ram,0x02c12db8) */
/* WARNING: Removing unreachable block (ram,0x02c12dbc) */
/* WARNING: Removing unreachable block (ram,0x02c12cd8) */
/* WARNING: Removing unreachable block (ram,0x02c12ce0) */
/* WARNING: Removing unreachable block (ram,0x02c12ce4) */
/* WARNING: Removing unreachable block (ram,0x02c12de0) */
/* WARNING: Removing unreachable block (ram,0x02c12de8) */
/* WARNING: Removing unreachable block (ram,0x02c12dec) */
/* WARNING: Removing unreachable block (ram,0x02c12e10) */
/* WARNING: Removing unreachable block (ram,0x02c12e14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12900(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c12e38 + 0x2c1291c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c12e3c + 0x2c12930));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e40 + 0x2c1293c));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e44 + 0x2c12948));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e48 + 0x2c12954));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e4c + 0x2c12960));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e50 + 0x2c1296c));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e54 + 0x2c12978));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e58 + 0x2c12984));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e5c + 0x2c12990));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e60 + 0x2c1299c));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e64 + 0x2c129a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e68 + 0x2c129b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c12e6c + 0x2c129c0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd9,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd9,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x27c),param_2,
                          **(undefined4 **)(_UNK_02c12e70 + 0x2c12a24));
  *(char *)(param_1 + 0x278) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c12e74 + 0x2c12a68);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c12e78 + 0x2c12a7c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c12e7c + 0x2c12ab0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c12e80 + 0x2c12acc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c12e88 + 0x2c12b00);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c12e84 + 0x2c12af4),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c12e8c + 0x2c12b4c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c12e90 + 0x2c12b80);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c12e94 + 0x2c12b94));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c12e98 + 0x2c12bac);
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
    pcVar9 = (char *)(_UNK_02c12e9c + 0x2c12c04);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c12ea0 + 0x2c12c18));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c12ea4 + 0x2c12cc0),0);
  puVar12 = (undefined4 *)(param_1 + 0x270);
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

