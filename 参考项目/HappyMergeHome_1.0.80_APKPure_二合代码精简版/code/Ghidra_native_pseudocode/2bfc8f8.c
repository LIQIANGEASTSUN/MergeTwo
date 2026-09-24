
/* WARNING: Possible PIC construction at 0x02c0cde4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c0cde8) */
/* WARNING: Removing unreachable block (ram,0x02c0cdf4) */
/* WARNING: Removing unreachable block (ram,0x02c0cdf8) */
/* WARNING: Removing unreachable block (ram,0x02c0ce10) */
/* WARNING: Removing unreachable block (ram,0x02c0ce14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0c8f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
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
  
  pcVar7 = (char *)(_UNK_02c0ce2c + 0x2c0c914);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce30 + 0x2c0c928));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce34 + 0x2c0c934));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce38 + 0x2c0c940));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce3c + 0x2c0c94c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce40 + 0x2c0c958));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce44 + 0x2c0c964));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce48 + 0x2c0c970));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce4c + 0x2c0c97c));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce50 + 0x2c0c988));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce54 + 0x2c0c994));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce58 + 0x2c0c9a0));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce5c + 0x2c0c9ac));
    func_0x01438628(*(undefined4 *)(_UNK_02c0ce60 + 0x2c0c9b8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fca,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x4fca,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x3b4),param_2,
                          **(undefined4 **)(_UNK_02c0ce64 + 0x2c0ca1c));
  *(char *)(param_1 + 0x3b0) = (char)iVar1;
  if (iVar1 != 0) {
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar10 = *(undefined4 **)(_UNK_02c0ce68 + 0x2c0ca60);
    iVar1 = func_0x024f0e6c(iVar1,*puVar10,0);
    piVar8 = *(int **)(_UNK_02c0ce6c + 0x2c0ca74);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x024eec50(iVar1,0,0);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02c0ce70 + 0x2c0caa8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c0ce74 + 0x2c0cac4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_2c = **(undefined4 **)(_UNK_02c0ce7c + 0x2c0caf8);
      uStack_30 = 0;
      uVar6 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_02c0ce78 + 0x2c0caec),0,1);
      uVar4 = func_0x024eecb8(param_1,0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03680314(uVar6,uVar4,**(undefined4 **)(_UNK_02c0ce80 + 0x2c0cb44));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024ef308(iVar1,0);
      pcVar7 = (char *)(_UNK_02c0ce84 + 0x2c0cb78);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c0ce88 + 0x2c0cb8c));
        *pcVar7 = '\x01';
      }
      piVar8 = *(int **)(_UNK_02c0ce8c + 0x2c0cba4);
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      uVar9 = puVar2[2];
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      func_0x024ef1f8(iVar5,uVar4,uVar6,uVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024ef308(iVar1,0);
      pcVar7 = (char *)(_UNK_02c0ce90 + 0x2c0cbfc);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c0ce94 + 0x2c0cc10));
        *pcVar7 = '\x01';
      }
      iVar3 = *(int *)(*piVar8 + 0x5c);
      uVar6 = *(undefined4 *)(iVar3 + 0xc);
      uVar4 = *(undefined4 *)(iVar3 + 0x10);
      uVar9 = *(undefined4 *)(iVar3 + 0x14);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      func_0x024ef328(iVar5,uVar6,uVar4,uVar9);
      if (iVar1 == 0) {
        func_0x014388e4();
        func_0x024ef2f8(0,*puVar10,0);
        func_0x014388e4();
      }
      else {
        func_0x024ef2f8(iVar1,*puVar10,0);
      }
      iVar1 = func_0x024ef308(iVar1,0);
    }
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0ce98 + 0x2c0ccb8),0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    puVar10 = *(undefined4 **)(_UNK_02c0ce9c + 0x2c0cce0);
    uVar6 = func_0x035e8140(iVar5,*puVar10);
    *(undefined4 *)(param_1 + 0x3a0) = uVar6;
    func_0x014385cc();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0cea0 + 0x2c0cd10),0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x035e8140(iVar5,*puVar10);
    *(undefined4 *)(param_1 + 0x3a4) = uVar6;
    func_0x014385cc();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0cea4 + 0x2c0cd60),0);
    *(undefined4 *)(param_1 + 0x3a8) = uVar6;
    func_0x014385cc();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c0cea8 + 0x2c0cd94),0);
    *(undefined4 *)(param_1 + 0x3ac) = uVar6;
    func_0x014385cc((undefined4 *)(param_1 + 0x3ac),uVar6);
    iVar1 = *(int *)(param_1 + 0x3a8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x014e94d8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    (*(code *)&UNK_05d3ec04)(iVar1,0,0);
    return;
  }
  return;
}

