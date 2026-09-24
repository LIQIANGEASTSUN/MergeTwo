
/* WARNING: Possible PIC construction at 0x02c0ff14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c0ff4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c1001c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0ff50) */
/* WARNING: Removing unreachable block (ram,0x02c0ff5c) */
/* WARNING: Removing unreachable block (ram,0x02c0ff60) */
/* WARNING: Removing unreachable block (ram,0x02c0ff78) */
/* WARNING: Removing unreachable block (ram,0x02c0ff7c) */
/* WARNING: Removing unreachable block (ram,0x02c0ff98) */
/* WARNING: Removing unreachable block (ram,0x02c0ff9c) */
/* WARNING: Removing unreachable block (ram,0x02c0ffb4) */
/* WARNING: Removing unreachable block (ram,0x02c0ffb8) */
/* WARNING: Removing unreachable block (ram,0x02c0ffd0) */
/* WARNING: Removing unreachable block (ram,0x02c0ffd4) */
/* WARNING: Removing unreachable block (ram,0x02c0fff8) */
/* WARNING: Removing unreachable block (ram,0x02c0fffc) */
/* WARNING: Removing unreachable block (ram,0x02c0ff18) */
/* WARNING: Removing unreachable block (ram,0x02c0ff20) */
/* WARNING: Removing unreachable block (ram,0x02c0ff24) */
/* WARNING: Removing unreachable block (ram,0x02c10020) */
/* WARNING: Removing unreachable block (ram,0x02c10028) */
/* WARNING: Removing unreachable block (ram,0x02c1002c) */
/* WARNING: Removing unreachable block (ram,0x02c10050) */
/* WARNING: Removing unreachable block (ram,0x02c10054) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0fb40(int param_1,undefined4 param_2)

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
  
  pcVar9 = (char *)(_UNK_02c10078 + 0x2c0fb5c);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c1007c + 0x2c0fb70));
    func_0x01438628(*(undefined4 *)(_UNK_02c10080 + 0x2c0fb7c));
    func_0x01438628(*(undefined4 *)(_UNK_02c10084 + 0x2c0fb88));
    func_0x01438628(*(undefined4 *)(_UNK_02c10088 + 0x2c0fb94));
    func_0x01438628(*(undefined4 *)(_UNK_02c1008c + 0x2c0fba0));
    func_0x01438628(*(undefined4 *)(_UNK_02c10090 + 0x2c0fbac));
    func_0x01438628(*(undefined4 *)(_UNK_02c10094 + 0x2c0fbb8));
    func_0x01438628(*(undefined4 *)(_UNK_02c10098 + 0x2c0fbc4));
    func_0x01438628(*(undefined4 *)(_UNK_02c1009c + 0x2c0fbd0));
    func_0x01438628(*(undefined4 *)(_UNK_02c100a0 + 0x2c0fbdc));
    func_0x01438628(*(undefined4 *)(_UNK_02c100a4 + 0x2c0fbe8));
    func_0x01438628(*(undefined4 *)(_UNK_02c100a8 + 0x2c0fbf4));
    func_0x01438628(*(undefined4 *)(_UNK_02c100ac + 0x2c0fc00));
    *pcVar9 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x4fd1,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x4fd1,0);
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
  iVar3 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x1bc),param_2,
                          **(undefined4 **)(_UNK_02c100b0 + 0x2c0fc64));
  *(char *)(param_1 + 0x1b8) = (char)iVar3;
  if (iVar3 == 0) {
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar12 = *(undefined4 **)(_UNK_02c100b4 + 0x2c0fca8);
  iVar3 = func_0x024f0e6c(iVar3,*puVar12,0);
  piVar10 = *(int **)(_UNK_02c100b8 + 0x2c0fcbc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar7 = func_0x024eec50(iVar3,0,0);
  if (iVar7 != 0) {
    if (*(int *)(**(int **)(_UNK_02c100bc + 0x2c0fcf0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c100c0 + 0x2c0fd0c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = **(undefined4 **)(_UNK_02c100c8 + 0x2c0fd40);
    uStack_30 = 0;
    uVar8 = func_0x036ac4cc(iVar3,**(undefined4 **)(_UNK_02c100c4 + 0x2c0fd34),0,1);
    uVar6 = func_0x024eecb8(param_1,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x03680314(uVar8,uVar6,**(undefined4 **)(_UNK_02c100cc + 0x2c0fd8c));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar7 = func_0x024ef308(iVar3,0);
    pcVar9 = (char *)(_UNK_02c100d0 + 0x2c0fdc0);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c100d4 + 0x2c0fdd4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_02c100d8 + 0x2c0fdec);
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
    pcVar9 = (char *)(_UNK_02c100dc + 0x2c0fe44);
    if (*pcVar9 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02c100e0 + 0x2c0fe58));
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
  uVar8 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c100e4 + 0x2c0ff00),0);
  puVar12 = (undefined4 *)(param_1 + 0x1b0);
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

