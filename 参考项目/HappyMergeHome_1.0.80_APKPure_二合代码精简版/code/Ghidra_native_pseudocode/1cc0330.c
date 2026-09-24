
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cd0330(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int unaff_r10;
  int *piVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  uint *puStack_40;
  uint uStack_3c;
  
  pcVar8 = (char *)(iRam01cd0528 + 0x1cd0348);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam01cd052c + 0x1cd035c));
    func_0x01438628(*(undefined4 *)(iRam01cd0530 + 0x1cd0368));
    func_0x01438628(*(undefined4 *)(iRam01cd0534 + 0x1cd0374));
    func_0x01438628(*(undefined4 *)(iRam01cd0538 + 0x1cd0380));
    func_0x01438628(*(undefined4 *)(iRam01cd053c + 0x1cd038c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafd6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafd6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar8 = (char *)(_UNK_02939a88 + 0x29399a8);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02939a8c + 0x29399bc),param_1,0);
      *pcVar8 = '\x01';
    }
    func_0x024f56c0(auStack_48,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x024f56d0(iVar9,uVar10,&stack0xffffffd0,uVar5);
    uVar4 = func_0x035daef8(&stack0xffffffd0,0,**(undefined4 **)(_UNK_02939a90 + 0x2939a78));
    return uVar4;
  }
  puVar6 = (uint *)(param_1 + 0x50);
  uVar4 = *puVar6;
  if (uVar4 == 0) {
    uVar2 = func_0x014388d4(**(undefined4 **)(iRam01cd0540 + 0x1cd03f8));
    func_0x024eed9c(uVar2,**(undefined4 **)(iRam01cd0544 + 0x1cd040c));
    *puVar6 = uVar2;
    func_0x014385cc(puVar6,uVar2);
    uVar4 = *puVar6;
    bVar14 = uVar4 == 0;
    if (bVar14) {
      uVar15 = func_0x014388e4();
      uVar4 = (uint)((ulonglong)uVar15 >> 0x20);
      iVar1 = (int)uVar15;
      puVar7 = puVar6;
      if (bVar14) {
        puVar7 = (uint *)(param_1 + 0x4f5);
        *puVar6 = uVar4;
        uVar4 = (uint)*(byte *)(unaff_r10 + -0x69d4);
      }
      pcVar8 = (char *)(_UNK_01cd0600 + 0x1cd0564);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01cd0604 + 0x1cd0578),uVar4);
        *pcVar8 = '\x01';
      }
      iVar9 = func_0x02953fd4(0xafd8,0);
      if (iVar9 == 0) {
        uVar4 = *(uint *)(iVar1 + 0x54);
        if (uVar4 == 0) {
          uVar10 = func_0x036150a4(*(undefined4 *)(iVar1 + 0x3c),
                                   **(undefined4 **)(_UNK_01cd0608 + 0x1cd05e0));
          *(undefined4 *)(iVar1 + 0x54) = uVar10;
          func_0x014385cc((uint *)(iVar1 + 0x54),uVar10);
          return *(uint *)(iVar1 + 0x54);
        }
        return uVar4;
      }
      iVar9 = func_0x029540a4(0xafd8,0);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      pcVar8 = (char *)(_UNK_02939b90 + 0x2939ab0);
      puStack_40 = puVar7;
      uStack_3c = uVar2;
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02939b94 + 0x2939ac4),iVar1,0);
        *pcVar8 = '\x01';
      }
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_58 = 0;
      auStack_48[0] = 0;
      func_0x024f56c0(&uStack_70,0);
      uStack_58 = uStack_70;
      uStack_54 = uStack_6c;
      uStack_50 = uStack_68;
      uStack_4c = uStack_64;
      auStack_48[0] = uStack_60;
      if (*(int *)(iVar9 + 0x10) != 0) {
        func_0x01523a6c(&uStack_58,*(int *)(iVar9 + 0x10),0);
      }
      func_0x01523a6c(&uStack_58,iVar1,0);
      iVar11 = *(int *)(iVar9 + 8);
      uVar10 = *(undefined4 *)(iVar9 + 0xc);
      iVar1 = *(int *)(iVar9 + 0x10);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      uVar5 = 2;
      if (iVar1 == 0) {
        uVar5 = 1;
      }
      func_0x024f56d0(iVar11,uVar10,&uStack_58,uVar5,0,0);
      uVar4 = func_0x035daef8(&uStack_58,0,**(undefined4 **)(_UNK_02939b98 + 0x2939b80));
      return uVar4;
    }
  }
  if (*(int *)(uVar4 + 0xc) == 0) {
    iVar1 = 0;
    piVar13 = *(int **)(iRam01cd0548 + 0x1cd0460);
    while( true ) {
      iVar9 = *(int *)(param_1 + 0x3c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) + -1 <= iVar1) break;
      iVar9 = *(int *)(param_1 + 0x3c);
      iVar11 = *(int *)(param_1 + 0x50);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar10 = func_0x0152983c(iVar9,iVar1,**(undefined4 **)(iRam01cd054c + 0x1cd04a0));
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(iVar11 + 8);
      uVar4 = *(uint *)(iVar11 + 0xc);
      iVar12 = *piVar13;
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar4 + 1;
        puVar3 = (undefined4 *)(iVar9 + uVar4 * 4 + 0x10);
        *puVar3 = uVar10;
        func_0x014385cc(puVar3,uVar10);
      }
      else {
        func_0x0152874c(iVar11,uVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
      }
      iVar1 = iVar1 + 1;
    }
  }
  return *puVar6;
}

