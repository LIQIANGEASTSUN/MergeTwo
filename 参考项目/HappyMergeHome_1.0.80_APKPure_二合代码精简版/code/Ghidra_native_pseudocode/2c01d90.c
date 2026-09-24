
/* WARNING: Possible PIC construction at 0x02c12164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1219c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1226c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c121a0) */
/* WARNING: Removing unreachable block (ram,0x02c121ac) */
/* WARNING: Removing unreachable block (ram,0x02c121b0) */
/* WARNING: Removing unreachable block (ram,0x02c121c8) */
/* WARNING: Removing unreachable block (ram,0x02c121cc) */
/* WARNING: Removing unreachable block (ram,0x02c121e8) */
/* WARNING: Removing unreachable block (ram,0x02c121ec) */
/* WARNING: Removing unreachable block (ram,0x02c12204) */
/* WARNING: Removing unreachable block (ram,0x02c12208) */
/* WARNING: Removing unreachable block (ram,0x02c12220) */
/* WARNING: Removing unreachable block (ram,0x02c12224) */
/* WARNING: Removing unreachable block (ram,0x02c12248) */
/* WARNING: Removing unreachable block (ram,0x02c1224c) */
/* WARNING: Removing unreachable block (ram,0x02c12168) */
/* WARNING: Removing unreachable block (ram,0x02c12170) */
/* WARNING: Removing unreachable block (ram,0x02c12174) */
/* WARNING: Removing unreachable block (ram,0x02c12270) */
/* WARNING: Removing unreachable block (ram,0x02c12278) */
/* WARNING: Removing unreachable block (ram,0x02c1227c) */
/* WARNING: Removing unreachable block (ram,0x02c122a0) */
/* WARNING: Removing unreachable block (ram,0x02c122a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c11d90(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c122c8 + 0x2c11dac);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c122cc + 0x2c11dc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c122d0 + 0x2c11dcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c122d4 + 0x2c11dd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c122d8 + 0x2c11de4));
    func_0x01438628(*(undefined4 *)(_UNK_02c122dc + 0x2c11df0));
    func_0x01438628(*(undefined4 *)(_UNK_02c122e0 + 0x2c11dfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c122e4 + 0x2c11e08));
    func_0x01438628(*(undefined4 *)(_UNK_02c122e8 + 0x2c11e14));
    func_0x01438628(*(undefined4 *)(_UNK_02c122ec + 0x2c11e20));
    func_0x01438628(*(undefined4 *)(_UNK_02c122f0 + 0x2c11e2c));
    func_0x01438628(*(undefined4 *)(_UNK_02c122f4 + 0x2c11e38));
    func_0x01438628(*(undefined4 *)(_UNK_02c122f8 + 0x2c11e44));
    func_0x01438628(*(undefined4 *)(_UNK_02c122fc + 0x2c11e50));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd7,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd7,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x24c),param_2,
                          **(undefined4 **)(_UNK_02c12300 + 0x2c11eb4));
  *(char *)(param_1 + 0x248) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c12304 + 0x2c11ef8);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c12308 + 0x2c11f0c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c1230c + 0x2c11f40) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c12310 + 0x2c11f5c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c12318 + 0x2c11f90);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c12314 + 0x2c11f84),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c1231c + 0x2c11fdc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c12320 + 0x2c12010);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c12324 + 0x2c12024));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c12328 + 0x2c1203c);
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
    pcVar9 = (char *)(_UNK_02c1232c + 0x2c12094);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c12330 + 0x2c120a8));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c12334 + 0x2c12150),0);
  puVar12 = (undefined4 *)(param_1 + 0x240);
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

