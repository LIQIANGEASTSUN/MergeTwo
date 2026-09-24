
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3bd98(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
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
  
  pcVar4 = (char *)(_UNK_02c3c060 + 0x2c3bdb4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3c064 + 0x2c3bdc8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c068 + 0x2c3bdd4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c06c + 0x2c3bde0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c070 + 0x2c3bdec));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c074 + 0x2c3bdf8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c078 + 0x2c3be04));
    func_0x01438628(*(undefined4 *)(_UNK_02c3c07c + 0x2c3be10));
    *pcVar4 = '\x01';
  }
  iVar10 = 0;
  iVar1 = func_0x02953fd4(0xe94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe94,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028955b0 + 0x28954bc);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028955b4 + 0x28954d0),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar10,uVar5,&uStack_38,uVar3,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_028955b8 + 0x28955a0));
    return iVar1;
  }
  if (param_2 != 0) {
    iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_02c3c080 + 0x2c3be7c));
    func_0x024f0510(iVar10,**(undefined4 **)(_UNK_02c3c084 + 0x2c3be90));
    uVar5 = *(undefined4 *)(param_2 + 8);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar10 + 8);
    uVar6 = *(uint *)(iVar10 + 0xc);
    piVar2 = *(int **)(_UNK_02c3c088 + 0x2c3bec8);
    *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
    iVar1 = *piVar2;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    if (uVar6 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar10 + 0xc) = uVar6 + 1;
      *(undefined4 *)(iVar7 + uVar6 * 4 + 0x10) = uVar5;
    }
    else {
      func_0x024f0520(iVar10,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = 100;
    puVar9 = *(undefined4 **)(_UNK_02c3c08c + 0x2c3bf1c);
    while( true ) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(param_2 + 0x4c) < 1) {
        return iVar10;
      }
      if (iVar1 == 0) break;
      if (*(int *)(**(int **)(_UNK_02c3c098 + 0x2c3bf44) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x014e9518(*puVar9);
      uVar5 = *(undefined4 *)(param_2 + 0x4c);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      param_2 = func_0x029a6fa8(iVar7,uVar5,0);
      if (param_2 != 0) {
        uVar5 = *(undefined4 *)(param_2 + 8);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar10 + 8);
        uVar6 = *(uint *)(iVar10 + 0xc);
        piVar2 = *(int **)(_UNK_02c3c09c + 0x2c3bfbc);
        *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
        iVar8 = *piVar2;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (uVar6 < *(uint *)(iVar7 + 0xc)) {
          *(uint *)(iVar10 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar7 + uVar6 * 4 + 0x10) = uVar5;
        }
        else {
          func_0x024f0520(iVar10,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar1 = iVar1 + -1;
    }
    uVar5 = func_0x01524ffc(param_2 + 8,0);
    uVar5 = func_0x014e9568(uVar5,**(undefined4 **)(_UNK_02c3c090 + 0x2c3c024),0);
    if (*(int *)(**(int **)(_UNK_02c3c094 + 0x2c3c038) + 0x74) == 0) {
      func_0x014387a4();
    }
    func_0x024ef174(uVar5,0);
  }
  return iVar10;
}

