
/* WARNING: Possible PIC construction at 0x02c115f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1162c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c116fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c11630) */
/* WARNING: Removing unreachable block (ram,0x02c1163c) */
/* WARNING: Removing unreachable block (ram,0x02c11640) */
/* WARNING: Removing unreachable block (ram,0x02c11658) */
/* WARNING: Removing unreachable block (ram,0x02c1165c) */
/* WARNING: Removing unreachable block (ram,0x02c11678) */
/* WARNING: Removing unreachable block (ram,0x02c1167c) */
/* WARNING: Removing unreachable block (ram,0x02c11694) */
/* WARNING: Removing unreachable block (ram,0x02c11698) */
/* WARNING: Removing unreachable block (ram,0x02c116b0) */
/* WARNING: Removing unreachable block (ram,0x02c116b4) */
/* WARNING: Removing unreachable block (ram,0x02c116d8) */
/* WARNING: Removing unreachable block (ram,0x02c116dc) */
/* WARNING: Removing unreachable block (ram,0x02c115f8) */
/* WARNING: Removing unreachable block (ram,0x02c11600) */
/* WARNING: Removing unreachable block (ram,0x02c11604) */
/* WARNING: Removing unreachable block (ram,0x02c11700) */
/* WARNING: Removing unreachable block (ram,0x02c11708) */
/* WARNING: Removing unreachable block (ram,0x02c1170c) */
/* WARNING: Removing unreachable block (ram,0x02c11730) */
/* WARNING: Removing unreachable block (ram,0x02c11734) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c11220(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c11758 + 0x2c1123c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1175c + 0x2c11250));
    func_0x01438628(*(undefined4 *)(_UNK_02c11760 + 0x2c1125c));
    func_0x01438628(*(undefined4 *)(_UNK_02c11764 + 0x2c11268));
    func_0x01438628(*(undefined4 *)(_UNK_02c11768 + 0x2c11274));
    func_0x01438628(*(undefined4 *)(_UNK_02c1176c + 0x2c11280));
    func_0x01438628(*(undefined4 *)(_UNK_02c11770 + 0x2c1128c));
    func_0x01438628(*(undefined4 *)(_UNK_02c11774 + 0x2c11298));
    func_0x01438628(*(undefined4 *)(_UNK_02c11778 + 0x2c112a4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1177c + 0x2c112b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c11780 + 0x2c112bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c11784 + 0x2c112c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c11788 + 0x2c112d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1178c + 0x2c112e0));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd5,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd5,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x21c),param_2,
                          **(undefined4 **)(_UNK_02c11790 + 0x2c11344));
  *(char *)(param_1 + 0x218) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c11794 + 0x2c11388);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c11798 + 0x2c1139c);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c1179c + 0x2c113d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c117a0 + 0x2c113ec));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c117a8 + 0x2c11420);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c117a4 + 0x2c11414),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c117ac + 0x2c1146c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c117b0 + 0x2c114a0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c117b4 + 0x2c114b4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c117b8 + 0x2c114cc);
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
    pcVar9 = (char *)(_UNK_02c117bc + 0x2c11524);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c117c0 + 0x2c11538));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c117c4 + 0x2c115e0),0);
  puVar12 = (undefined4 *)(param_1 + 0x210);
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

