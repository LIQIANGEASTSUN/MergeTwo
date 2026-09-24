
/* WARNING: Possible PIC construction at 0x02c1772c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c17764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c17834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c17768) */
/* WARNING: Removing unreachable block (ram,0x02c17774) */
/* WARNING: Removing unreachable block (ram,0x02c17778) */
/* WARNING: Removing unreachable block (ram,0x02c17790) */
/* WARNING: Removing unreachable block (ram,0x02c17794) */
/* WARNING: Removing unreachable block (ram,0x02c177b0) */
/* WARNING: Removing unreachable block (ram,0x02c177b4) */
/* WARNING: Removing unreachable block (ram,0x02c177cc) */
/* WARNING: Removing unreachable block (ram,0x02c177d0) */
/* WARNING: Removing unreachable block (ram,0x02c177e8) */
/* WARNING: Removing unreachable block (ram,0x02c177ec) */
/* WARNING: Removing unreachable block (ram,0x02c17810) */
/* WARNING: Removing unreachable block (ram,0x02c17814) */
/* WARNING: Removing unreachable block (ram,0x02c17730) */
/* WARNING: Removing unreachable block (ram,0x02c17738) */
/* WARNING: Removing unreachable block (ram,0x02c1773c) */
/* WARNING: Removing unreachable block (ram,0x02c17838) */
/* WARNING: Removing unreachable block (ram,0x02c17840) */
/* WARNING: Removing unreachable block (ram,0x02c17844) */
/* WARNING: Removing unreachable block (ram,0x02c17868) */
/* WARNING: Removing unreachable block (ram,0x02c1786c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17358(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c17890 + 0x2c17374);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c17894 + 0x2c17388));
    func_0x01438628(*(undefined4 *)(_UNK_02c17898 + 0x2c17394));
    func_0x01438628(*(undefined4 *)(_UNK_02c1789c + 0x2c173a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c178a0 + 0x2c173ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c178a4 + 0x2c173b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c178a8 + 0x2c173c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c178ac + 0x2c173d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c178b0 + 0x2c173dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c178b4 + 0x2c173e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c178b8 + 0x2c173f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c178bc + 0x2c17400));
    func_0x01438628(*(undefined4 *)(_UNK_02c178c0 + 0x2c1740c));
    func_0x01438628(*(undefined4 *)(_UNK_02c178c4 + 0x2c17418));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe6,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe6,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x3e4),param_2,
                          **(undefined4 **)(_UNK_02c178c8 + 0x2c1747c));
  *(char *)(param_1 + 0x3e0) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c178cc + 0x2c174c0);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c178d0 + 0x2c174d4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c178d4 + 0x2c17508) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c178d8 + 0x2c17524));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c178e0 + 0x2c17558);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c178dc + 0x2c1754c),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c178e4 + 0x2c175a4));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c178e8 + 0x2c175d8);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c178ec + 0x2c175ec));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c178f0 + 0x2c17604);
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
    pcVar9 = (char *)(_UNK_02c178f4 + 0x2c1765c);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c178f8 + 0x2c17670));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c178fc + 0x2c17718),0);
  puVar12 = (undefined4 *)(param_1 + 0x3d8);
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

