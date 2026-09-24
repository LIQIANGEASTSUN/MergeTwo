
/* WARNING: Possible PIC construction at 0x02c14f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c14f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1502c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c14f60) */
/* WARNING: Removing unreachable block (ram,0x02c14f6c) */
/* WARNING: Removing unreachable block (ram,0x02c14f70) */
/* WARNING: Removing unreachable block (ram,0x02c14f88) */
/* WARNING: Removing unreachable block (ram,0x02c14f8c) */
/* WARNING: Removing unreachable block (ram,0x02c14fa8) */
/* WARNING: Removing unreachable block (ram,0x02c14fac) */
/* WARNING: Removing unreachable block (ram,0x02c14fc4) */
/* WARNING: Removing unreachable block (ram,0x02c14fc8) */
/* WARNING: Removing unreachable block (ram,0x02c14fe0) */
/* WARNING: Removing unreachable block (ram,0x02c14fe4) */
/* WARNING: Removing unreachable block (ram,0x02c15008) */
/* WARNING: Removing unreachable block (ram,0x02c1500c) */
/* WARNING: Removing unreachable block (ram,0x02c14f28) */
/* WARNING: Removing unreachable block (ram,0x02c14f30) */
/* WARNING: Removing unreachable block (ram,0x02c14f34) */
/* WARNING: Removing unreachable block (ram,0x02c15030) */
/* WARNING: Removing unreachable block (ram,0x02c15038) */
/* WARNING: Removing unreachable block (ram,0x02c1503c) */
/* WARNING: Removing unreachable block (ram,0x02c15060) */
/* WARNING: Removing unreachable block (ram,0x02c15064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c14b50(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c15088 + 0x2c14b6c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1508c + 0x2c14b80));
    func_0x01438628(*(undefined4 *)(_UNK_02c15090 + 0x2c14b8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c15094 + 0x2c14b98));
    func_0x01438628(*(undefined4 *)(_UNK_02c15098 + 0x2c14ba4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1509c + 0x2c14bb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c150a0 + 0x2c14bbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c150a4 + 0x2c14bc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c150a8 + 0x2c14bd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c150ac + 0x2c14be0));
    func_0x01438628(*(undefined4 *)(_UNK_02c150b0 + 0x2c14bec));
    func_0x01438628(*(undefined4 *)(_UNK_02c150b4 + 0x2c14bf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c150b8 + 0x2c14c04));
    func_0x01438628(*(undefined4 *)(_UNK_02c150bc + 0x2c14c10));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fdf,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fdf,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x324),param_2,
                          **(undefined4 **)(_UNK_02c150c0 + 0x2c14c74));
  *(char *)(param_1 + 800) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c150c4 + 0x2c14cb8);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c150c8 + 0x2c14ccc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c150cc + 0x2c14d00) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c150d0 + 0x2c14d1c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c150d8 + 0x2c14d50);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c150d4 + 0x2c14d44),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c150dc + 0x2c14d9c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c150e0 + 0x2c14dd0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c150e4 + 0x2c14de4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c150e8 + 0x2c14dfc);
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
    pcVar9 = (char *)(_UNK_02c150ec + 0x2c14e54);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c150f0 + 0x2c14e68));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c150f4 + 0x2c14f10),0);
  puVar12 = (undefined4 *)(param_1 + 0x318);
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

