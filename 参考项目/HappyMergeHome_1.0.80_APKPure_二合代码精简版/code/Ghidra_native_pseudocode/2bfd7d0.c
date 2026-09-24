
/* WARNING: Possible PIC construction at 0x02c0dba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0dbdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0dcac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0dbe0) */
/* WARNING: Removing unreachable block (ram,0x02c0dbec) */
/* WARNING: Removing unreachable block (ram,0x02c0dbf0) */
/* WARNING: Removing unreachable block (ram,0x02c0dc08) */
/* WARNING: Removing unreachable block (ram,0x02c0dc0c) */
/* WARNING: Removing unreachable block (ram,0x02c0dc28) */
/* WARNING: Removing unreachable block (ram,0x02c0dc2c) */
/* WARNING: Removing unreachable block (ram,0x02c0dc44) */
/* WARNING: Removing unreachable block (ram,0x02c0dc48) */
/* WARNING: Removing unreachable block (ram,0x02c0dc60) */
/* WARNING: Removing unreachable block (ram,0x02c0dc64) */
/* WARNING: Removing unreachable block (ram,0x02c0dc88) */
/* WARNING: Removing unreachable block (ram,0x02c0dc8c) */
/* WARNING: Removing unreachable block (ram,0x02c0dba8) */
/* WARNING: Removing unreachable block (ram,0x02c0dbb0) */
/* WARNING: Removing unreachable block (ram,0x02c0dbb4) */
/* WARNING: Removing unreachable block (ram,0x02c0dcb0) */
/* WARNING: Removing unreachable block (ram,0x02c0dcb8) */
/* WARNING: Removing unreachable block (ram,0x02c0dcbc) */
/* WARNING: Removing unreachable block (ram,0x02c0dce0) */
/* WARNING: Removing unreachable block (ram,0x02c0dce4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d7d0(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c0dd08 + 0x2c0d7ec);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd0c + 0x2c0d800));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd10 + 0x2c0d80c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd14 + 0x2c0d818));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd18 + 0x2c0d824));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd1c + 0x2c0d830));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd20 + 0x2c0d83c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd24 + 0x2c0d848));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd28 + 0x2c0d854));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd2c + 0x2c0d860));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd30 + 0x2c0d86c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd34 + 0x2c0d878));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd38 + 0x2c0d884));
    func_0x01438628(*(undefined4 *)(_UNK_02c0dd3c + 0x2c0d890));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fcc,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fcc,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x480),param_2,
                          **(undefined4 **)(_UNK_02c0dd40 + 0x2c0d8f4));
  *(char *)(param_1 + 0x47c) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c0dd44 + 0x2c0d938);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c0dd48 + 0x2c0d94c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c0dd4c + 0x2c0d980) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c0dd50 + 0x2c0d99c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c0dd58 + 0x2c0d9d0);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c0dd54 + 0x2c0d9c4),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c0dd5c + 0x2c0da1c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c0dd60 + 0x2c0da50);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0dd64 + 0x2c0da64));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c0dd68 + 0x2c0da7c);
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
    pcVar9 = (char *)(_UNK_02c0dd6c + 0x2c0dad4);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c0dd70 + 0x2c0dae8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c0dd74 + 0x2c0db90),0);
  puVar12 = (undefined4 *)(param_1 + 0x474);
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

