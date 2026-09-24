
/* WARNING: Possible PIC construction at 0x02c1271c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c12754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c12824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c12758) */
/* WARNING: Removing unreachable block (ram,0x02c12764) */
/* WARNING: Removing unreachable block (ram,0x02c12768) */
/* WARNING: Removing unreachable block (ram,0x02c12780) */
/* WARNING: Removing unreachable block (ram,0x02c12784) */
/* WARNING: Removing unreachable block (ram,0x02c127a0) */
/* WARNING: Removing unreachable block (ram,0x02c127a4) */
/* WARNING: Removing unreachable block (ram,0x02c127bc) */
/* WARNING: Removing unreachable block (ram,0x02c127c0) */
/* WARNING: Removing unreachable block (ram,0x02c127d8) */
/* WARNING: Removing unreachable block (ram,0x02c127dc) */
/* WARNING: Removing unreachable block (ram,0x02c12800) */
/* WARNING: Removing unreachable block (ram,0x02c12804) */
/* WARNING: Removing unreachable block (ram,0x02c12720) */
/* WARNING: Removing unreachable block (ram,0x02c12728) */
/* WARNING: Removing unreachable block (ram,0x02c1272c) */
/* WARNING: Removing unreachable block (ram,0x02c12828) */
/* WARNING: Removing unreachable block (ram,0x02c12830) */
/* WARNING: Removing unreachable block (ram,0x02c12834) */
/* WARNING: Removing unreachable block (ram,0x02c12858) */
/* WARNING: Removing unreachable block (ram,0x02c1285c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12348(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c12880 + 0x2c12364);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c12884 + 0x2c12378));
    func_0x01438628(*(undefined4 *)(_UNK_02c12888 + 0x2c12384));
    func_0x01438628(*(undefined4 *)(_UNK_02c1288c + 0x2c12390));
    func_0x01438628(*(undefined4 *)(_UNK_02c12890 + 0x2c1239c));
    func_0x01438628(*(undefined4 *)(_UNK_02c12894 + 0x2c123a8));
    func_0x01438628(*(undefined4 *)(_UNK_02c12898 + 0x2c123b4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1289c + 0x2c123c0));
    func_0x01438628(*(undefined4 *)(_UNK_02c128a0 + 0x2c123cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c128a4 + 0x2c123d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c128a8 + 0x2c123e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c128ac + 0x2c123f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c128b0 + 0x2c123fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c128b4 + 0x2c12408));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd8,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x264),param_2,
                          **(undefined4 **)(_UNK_02c128b8 + 0x2c1246c));
  *(char *)(param_1 + 0x260) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c128bc + 0x2c124b0);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c128c0 + 0x2c124c4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c128c4 + 0x2c124f8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c128c8 + 0x2c12514));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c128d0 + 0x2c12548);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c128cc + 0x2c1253c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c128d4 + 0x2c12594));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c128d8 + 0x2c125c8);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c128dc + 0x2c125dc));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c128e0 + 0x2c125f4);
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
    pcVar9 = (char *)(_UNK_02c128e4 + 0x2c1264c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c128e8 + 0x2c12660));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c128ec + 0x2c12708),0);
  puVar12 = (undefined4 *)(param_1 + 600);
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

