
/* WARNING: Possible PIC construction at 0x02c15a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c15acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c15b9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c15ad0) */
/* WARNING: Removing unreachable block (ram,0x02c15adc) */
/* WARNING: Removing unreachable block (ram,0x02c15ae0) */
/* WARNING: Removing unreachable block (ram,0x02c15af8) */
/* WARNING: Removing unreachable block (ram,0x02c15afc) */
/* WARNING: Removing unreachable block (ram,0x02c15b18) */
/* WARNING: Removing unreachable block (ram,0x02c15b1c) */
/* WARNING: Removing unreachable block (ram,0x02c15b34) */
/* WARNING: Removing unreachable block (ram,0x02c15b38) */
/* WARNING: Removing unreachable block (ram,0x02c15b50) */
/* WARNING: Removing unreachable block (ram,0x02c15b54) */
/* WARNING: Removing unreachable block (ram,0x02c15b78) */
/* WARNING: Removing unreachable block (ram,0x02c15b7c) */
/* WARNING: Removing unreachable block (ram,0x02c15a98) */
/* WARNING: Removing unreachable block (ram,0x02c15aa0) */
/* WARNING: Removing unreachable block (ram,0x02c15aa4) */
/* WARNING: Removing unreachable block (ram,0x02c15ba0) */
/* WARNING: Removing unreachable block (ram,0x02c15ba8) */
/* WARNING: Removing unreachable block (ram,0x02c15bac) */
/* WARNING: Removing unreachable block (ram,0x02c15bd0) */
/* WARNING: Removing unreachable block (ram,0x02c15bd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c156c0(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c15bf8 + 0x2c156dc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c15bfc + 0x2c156f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c00 + 0x2c156fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c04 + 0x2c15708));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c08 + 0x2c15714));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c0c + 0x2c15720));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c10 + 0x2c1572c));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c14 + 0x2c15738));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c18 + 0x2c15744));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c1c + 0x2c15750));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c20 + 0x2c1575c));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c24 + 0x2c15768));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c28 + 0x2c15774));
    func_0x01438628(*(undefined4 *)(_UNK_02c15c2c + 0x2c15780));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe1,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x354),param_2,
                          **(undefined4 **)(_UNK_02c15c30 + 0x2c157e4));
  *(char *)(param_1 + 0x350) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c15c34 + 0x2c15828);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c15c38 + 0x2c1583c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c15c3c + 0x2c15870) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c15c40 + 0x2c1588c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c15c48 + 0x2c158c0);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c15c44 + 0x2c158b4),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c15c4c + 0x2c1590c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c15c50 + 0x2c15940);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c15c54 + 0x2c15954));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c15c58 + 0x2c1596c);
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
    pcVar9 = (char *)(_UNK_02c15c5c + 0x2c159c4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c15c60 + 0x2c159d8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c15c64 + 0x2c15a80),0);
  puVar12 = (undefined4 *)(param_1 + 0x348);
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

