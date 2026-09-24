
/* WARNING: Possible PIC construction at 0x02c18f18: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c18a38(int param_1,undefined4 param_2)

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
  
  pcVar7 = (char *)(_UNK_02c18f60 + 0x2c18a54);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c18f64 + 0x2c18a68));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f68 + 0x2c18a74));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f6c + 0x2c18a80));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f70 + 0x2c18a8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f74 + 0x2c18a98));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f78 + 0x2c18aa4));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f7c + 0x2c18ab0));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f80 + 0x2c18abc));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f84 + 0x2c18ac8));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f88 + 0x2c18ad4));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f8c + 0x2c18ae0));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f90 + 0x2c18aec));
    func_0x01438628(*(undefined4 *)(_UNK_02c18f94 + 0x2c18af8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x4fea,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0360ba54(*(undefined4 *)(param_1 + 0x18c),param_2,
                            **(undefined4 **)(_UNK_02c18f98 + 0x2c18b5c));
    *(char *)(param_1 + 0x188) = (char)iVar1;
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x024eecb8(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar10 = *(undefined4 **)(_UNK_02c18f9c + 0x2c18ba0);
    iVar1 = func_0x024f0e6c(iVar1,*puVar10,0);
    piVar8 = *(int **)(_UNK_02c18fa0 + 0x2c18bb4);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x024eec50(iVar1,0,0);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02c18fa4 + 0x2c18be8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c18fa8 + 0x2c18c04));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_2c = **(undefined4 **)(_UNK_02c18fb0 + 0x2c18c38);
      uStack_30 = 0;
      uVar6 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_02c18fac + 0x2c18c2c),0,1);
      uVar4 = func_0x024eecb8(param_1,0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03680314(uVar6,uVar4,**(undefined4 **)(_UNK_02c18fb4 + 0x2c18c84));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024ef308(iVar1,0);
      pcVar7 = (char *)(_UNK_02c18fb8 + 0x2c18cb8);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c18fbc + 0x2c18ccc));
        *pcVar7 = '\x01';
      }
      piVar8 = *(int **)(_UNK_02c18fc0 + 0x2c18ce4);
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
      pcVar7 = (char *)(_UNK_02c18fc4 + 0x2c18d3c);
      if (*pcVar7 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02c18fc8 + 0x2c18d50));
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
    uVar6 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c18fcc + 0x2c18df0),0);
    *(undefined4 *)(param_1 + 0x180) = uVar6;
    func_0x014385cc();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c18fd0 + 0x2c18e28),0);
    piVar8 = (int *)(param_1 + 0x184);
    *piVar8 = iVar5;
    func_0x014385cc(piVar8,iVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c18fd4 + 0x2c18e60),0);
    if (iVar5 != 0) {
      uVar6 = func_0x035e8140(iVar5,**(undefined4 **)(_UNK_02c18fd8 + 0x2c18e7c));
    }
    *(undefined4 *)(param_1 + 0x178) = uVar6;
    func_0x014385cc((undefined4 *)(param_1 + 0x178),uVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    iVar1 = func_0x024f0e6c(iVar1,**(undefined4 **)(_UNK_02c18fdc + 0x2c18eb4),0);
    if (iVar1 != 0) {
      uVar6 = func_0x035e8140(iVar1,**(undefined4 **)(_UNK_02c18fe0 + 0x2c18ed0));
    }
    *(undefined4 *)(param_1 + 0x17c) = uVar6;
    func_0x014385cc((undefined4 *)(param_1 + 0x17c),uVar6);
    if (*(int *)(param_1 + 0x180) == 0) {
      if (*piVar8 == 0) {
        return;
      }
      iVar1 = func_0x014e94d8(*piVar8,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    else {
      iVar1 = func_0x014e94d8(*(int *)(param_1 + 0x180),0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
    }
    (*(code *)&UNK_05d3ec04)(iVar1,0,0);
    return;
  }
  iVar1 = func_0x029540a4(0x4fea,0);
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

