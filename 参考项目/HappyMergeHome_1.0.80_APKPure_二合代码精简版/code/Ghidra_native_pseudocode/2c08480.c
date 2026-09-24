
/* WARNING: Possible PIC construction at 0x02c18854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1888c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1895c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c18890) */
/* WARNING: Removing unreachable block (ram,0x02c1889c) */
/* WARNING: Removing unreachable block (ram,0x02c188a0) */
/* WARNING: Removing unreachable block (ram,0x02c188b8) */
/* WARNING: Removing unreachable block (ram,0x02c188bc) */
/* WARNING: Removing unreachable block (ram,0x02c188d8) */
/* WARNING: Removing unreachable block (ram,0x02c188dc) */
/* WARNING: Removing unreachable block (ram,0x02c188f4) */
/* WARNING: Removing unreachable block (ram,0x02c188f8) */
/* WARNING: Removing unreachable block (ram,0x02c18910) */
/* WARNING: Removing unreachable block (ram,0x02c18914) */
/* WARNING: Removing unreachable block (ram,0x02c18938) */
/* WARNING: Removing unreachable block (ram,0x02c1893c) */
/* WARNING: Removing unreachable block (ram,0x02c18858) */
/* WARNING: Removing unreachable block (ram,0x02c18860) */
/* WARNING: Removing unreachable block (ram,0x02c18864) */
/* WARNING: Removing unreachable block (ram,0x02c18960) */
/* WARNING: Removing unreachable block (ram,0x02c18968) */
/* WARNING: Removing unreachable block (ram,0x02c1896c) */
/* WARNING: Removing unreachable block (ram,0x02c18990) */
/* WARNING: Removing unreachable block (ram,0x02c18994) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c18480(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c189b8 + 0x2c1849c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c189bc + 0x2c184b0));
    func_0x01438628(*(undefined4 *)(_UNK_02c189c0 + 0x2c184bc));
    func_0x01438628(*(undefined4 *)(_UNK_02c189c4 + 0x2c184c8));
    func_0x01438628(*(undefined4 *)(_UNK_02c189c8 + 0x2c184d4));
    func_0x01438628(*(undefined4 *)(_UNK_02c189cc + 0x2c184e0));
    func_0x01438628(*(undefined4 *)(_UNK_02c189d0 + 0x2c184ec));
    func_0x01438628(*(undefined4 *)(_UNK_02c189d4 + 0x2c184f8));
    func_0x01438628(*(undefined4 *)(_UNK_02c189d8 + 0x2c18504));
    func_0x01438628(*(undefined4 *)(_UNK_02c189dc + 0x2c18510));
    func_0x01438628(*(undefined4 *)(_UNK_02c189e0 + 0x2c1851c));
    func_0x01438628(*(undefined4 *)(_UNK_02c189e4 + 0x2c18528));
    func_0x01438628(*(undefined4 *)(_UNK_02c189e8 + 0x2c18534));
    func_0x01438628(*(undefined4 *)(_UNK_02c189ec + 0x2c18540));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe9,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe9,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x42c),param_2,
                          **(undefined4 **)(_UNK_02c189f0 + 0x2c185a4));
  *(char *)(param_1 + 0x428) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c189f4 + 0x2c185e8);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c189f8 + 0x2c185fc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c189fc + 0x2c18630) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c18a00 + 0x2c1864c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c18a08 + 0x2c18680);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c18a04 + 0x2c18674),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c18a0c + 0x2c186cc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c18a10 + 0x2c18700);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c18a14 + 0x2c18714));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c18a18 + 0x2c1872c);
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
    pcVar9 = (char *)(_UNK_02c18a1c + 0x2c18784);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c18a20 + 0x2c18798));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c18a24 + 0x2c18840),0);
  puVar12 = (undefined4 *)(param_1 + 0x420);
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

