
/* WARNING: Possible PIC construction at 0x02c1829c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c182d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c183a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c182d8) */
/* WARNING: Removing unreachable block (ram,0x02c182e4) */
/* WARNING: Removing unreachable block (ram,0x02c182e8) */
/* WARNING: Removing unreachable block (ram,0x02c18300) */
/* WARNING: Removing unreachable block (ram,0x02c18304) */
/* WARNING: Removing unreachable block (ram,0x02c18320) */
/* WARNING: Removing unreachable block (ram,0x02c18324) */
/* WARNING: Removing unreachable block (ram,0x02c1833c) */
/* WARNING: Removing unreachable block (ram,0x02c18340) */
/* WARNING: Removing unreachable block (ram,0x02c18358) */
/* WARNING: Removing unreachable block (ram,0x02c1835c) */
/* WARNING: Removing unreachable block (ram,0x02c18380) */
/* WARNING: Removing unreachable block (ram,0x02c18384) */
/* WARNING: Removing unreachable block (ram,0x02c182a0) */
/* WARNING: Removing unreachable block (ram,0x02c182a8) */
/* WARNING: Removing unreachable block (ram,0x02c182ac) */
/* WARNING: Removing unreachable block (ram,0x02c183a8) */
/* WARNING: Removing unreachable block (ram,0x02c183b0) */
/* WARNING: Removing unreachable block (ram,0x02c183b4) */
/* WARNING: Removing unreachable block (ram,0x02c183d8) */
/* WARNING: Removing unreachable block (ram,0x02c183dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17ec8(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c18400 + 0x2c17ee4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c18404 + 0x2c17ef8));
    func_0x01438628(*(undefined4 *)(_UNK_02c18408 + 0x2c17f04));
    func_0x01438628(*(undefined4 *)(_UNK_02c1840c + 0x2c17f10));
    func_0x01438628(*(undefined4 *)(_UNK_02c18410 + 0x2c17f1c));
    func_0x01438628(*(undefined4 *)(_UNK_02c18414 + 0x2c17f28));
    func_0x01438628(*(undefined4 *)(_UNK_02c18418 + 0x2c17f34));
    func_0x01438628(*(undefined4 *)(_UNK_02c1841c + 0x2c17f40));
    func_0x01438628(*(undefined4 *)(_UNK_02c18420 + 0x2c17f4c));
    func_0x01438628(*(undefined4 *)(_UNK_02c18424 + 0x2c17f58));
    func_0x01438628(*(undefined4 *)(_UNK_02c18428 + 0x2c17f64));
    func_0x01438628(*(undefined4 *)(_UNK_02c1842c + 0x2c17f70));
    func_0x01438628(*(undefined4 *)(_UNK_02c18430 + 0x2c17f7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c18434 + 0x2c17f88));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fe8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fe8,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x414),param_2,
                          **(undefined4 **)(_UNK_02c18438 + 0x2c17fec));
  *(char *)(param_1 + 0x410) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c1843c + 0x2c18030);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c18440 + 0x2c18044);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c18444 + 0x2c18078) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c18448 + 0x2c18094));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c18450 + 0x2c180c8);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c1844c + 0x2c180bc),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c18454 + 0x2c18114));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c18458 + 0x2c18148);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c1845c + 0x2c1815c));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c18460 + 0x2c18174);
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
    pcVar9 = (char *)(_UNK_02c18464 + 0x2c181cc);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c18468 + 0x2c181e0));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c1846c + 0x2c18288),0);
  puVar12 = (undefined4 *)(param_1 + 0x408);
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

