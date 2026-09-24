
/* WARNING: Possible PIC construction at 0x02c10a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c10abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c10b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c10ac0) */
/* WARNING: Removing unreachable block (ram,0x02c10acc) */
/* WARNING: Removing unreachable block (ram,0x02c10ad0) */
/* WARNING: Removing unreachable block (ram,0x02c10ae8) */
/* WARNING: Removing unreachable block (ram,0x02c10aec) */
/* WARNING: Removing unreachable block (ram,0x02c10b08) */
/* WARNING: Removing unreachable block (ram,0x02c10b0c) */
/* WARNING: Removing unreachable block (ram,0x02c10b24) */
/* WARNING: Removing unreachable block (ram,0x02c10b28) */
/* WARNING: Removing unreachable block (ram,0x02c10b40) */
/* WARNING: Removing unreachable block (ram,0x02c10b44) */
/* WARNING: Removing unreachable block (ram,0x02c10b68) */
/* WARNING: Removing unreachable block (ram,0x02c10b6c) */
/* WARNING: Removing unreachable block (ram,0x02c10a88) */
/* WARNING: Removing unreachable block (ram,0x02c10a90) */
/* WARNING: Removing unreachable block (ram,0x02c10a94) */
/* WARNING: Removing unreachable block (ram,0x02c10b90) */
/* WARNING: Removing unreachable block (ram,0x02c10b98) */
/* WARNING: Removing unreachable block (ram,0x02c10b9c) */
/* WARNING: Removing unreachable block (ram,0x02c10bc0) */
/* WARNING: Removing unreachable block (ram,0x02c10bc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c106b0(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c10be8 + 0x2c106cc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c10bec + 0x2c106e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c10bf0 + 0x2c106ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c10bf4 + 0x2c106f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c10bf8 + 0x2c10704));
    func_0x01438628(*(undefined4 *)(_UNK_02c10bfc + 0x2c10710));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c00 + 0x2c1071c));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c04 + 0x2c10728));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c08 + 0x2c10734));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c0c + 0x2c10740));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c10 + 0x2c1074c));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c14 + 0x2c10758));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c18 + 0x2c10764));
    func_0x01438628(*(undefined4 *)(_UNK_02c10c1c + 0x2c10770));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd3,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd3,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x1ec),param_2,
                          **(undefined4 **)(_UNK_02c10c20 + 0x2c107d4));
  *(char *)(param_1 + 0x1e8) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c10c24 + 0x2c10818);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c10c28 + 0x2c1082c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c10c2c + 0x2c10860) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c10c30 + 0x2c1087c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c10c38 + 0x2c108b0);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c10c34 + 0x2c108a4),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c10c3c + 0x2c108fc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c10c40 + 0x2c10930);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c10c44 + 0x2c10944));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c10c48 + 0x2c1095c);
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
    pcVar9 = (char *)(_UNK_02c10c4c + 0x2c109b4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c10c50 + 0x2c109c8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c10c54 + 0x2c10a70),0);
  puVar12 = (undefined4 *)(param_1 + 0x1e0);
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

