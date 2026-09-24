
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3f32c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_02c3f410 + 0x2c3f344);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3f414 + 0x2c3f358));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f418 + 0x2c3f364));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5d3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d3f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0289d554 + 0x289d460);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0289d558 + 0x289d474),param_1,param_2,0);
      *pcVar7 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0289d55c + 0x289d544));
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_02c3f41c + 0x2c3f3c0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c3f420 + 0x2c3f3dc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x029a6fa8(iVar1,param_2,0);
  pcVar7 = (char *)(_UNK_02c3c060 + 0x2c3bdb4);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3c064 + 0x2c3bdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c068 + 0x2c3bdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c06c + 0x2c3bde0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c070 + 0x2c3bdec));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c074 + 0x2c3bdf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c078 + 0x2c3be04));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c07c + 0x2c3be10));
    *pcVar7 = '\x01';
  }
  iVar11 = 0;
  iVar4 = func_0x02953fd4(0xe94,0);
  if (iVar4 == 0) {
    if (iVar1 != 0) {
      iVar11 = func_0x014388d4(**(undefined4 **)(_UNK_02c3c080 + 0x2c3be7c));
      func_0x024f0510(iVar11,**(undefined4 **)(_UNK_02c3c084 + 0x2c3be90));
      uVar5 = *(undefined4 *)(iVar1 + 8);
      if (iVar11 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar11 + 8);
      uVar6 = *(uint *)(iVar11 + 0xc);
      piVar2 = *(int **)(_UNK_02c3c088 + 0x2c3bec8);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      iVar4 = *piVar2;
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      if (uVar6 < *(uint *)(iVar8 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar6 + 1;
        *(undefined4 *)(iVar8 + uVar6 * 4 + 0x10) = uVar5;
      }
      else {
        func_0x024f0520(iVar11,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar4 = 100;
      puVar10 = *(undefined4 **)(_UNK_02c3c08c + 0x2c3bf1c);
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x4c) < 1) {
          return iVar11;
        }
        if (iVar4 == 0) break;
        if (*(int *)(**(int **)(_UNK_02c3c098 + 0x2c3bf44) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = func_0x014e9518(*puVar10);
        uVar5 = *(undefined4 *)(iVar1 + 0x4c);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029a6fa8(iVar8,uVar5,0);
        if (iVar1 != 0) {
          uVar5 = *(undefined4 *)(iVar1 + 8);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar11 + 8);
          uVar6 = *(uint *)(iVar11 + 0xc);
          piVar2 = *(int **)(_UNK_02c3c09c + 0x2c3bfbc);
          *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
          iVar9 = *piVar2;
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (uVar6 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(iVar11 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar8 + uVar6 * 4 + 0x10) = uVar5;
          }
          else {
            func_0x024f0520(iVar11,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar4 = iVar4 + -1;
      }
      uVar5 = func_0x01524ffc(iVar1 + 8,0);
      uVar5 = func_0x014e9568(uVar5,**(undefined4 **)(_UNK_02c3c090 + 0x2c3c024),0);
      if (*(int *)(**(int **)(_UNK_02c3c094 + 0x2c3c038) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x024ef174(uVar5,0);
    }
    return iVar11;
  }
  iVar4 = func_0x029540a4(0xe94,0);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uStack_1c = uStack_20;
  uStack_20 = uStack_24;
  pcVar7 = (char *)(_UNK_028955b0 + 0x28954bc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_028955b4 + 0x28954d0),param_1,iVar1,0);
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar4 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar4 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,iVar1,0);
  iVar11 = *(int *)(iVar4 + 8);
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = *(int *)(iVar4 + 0x10);
  if (iVar11 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar11,uVar5,&uStack_38,uVar3,0,0);
  iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028955b8 + 0x28955a0));
  return iVar1;
}

