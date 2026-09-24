
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032a7920(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
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
  
  pcVar7 = (char *)(_UNK_032a7bc4 + 0x32a793c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a7bc8 + 0x32a7950));
    func_0x01438628(*(undefined4 *)(_UNK_032a7bcc + 0x32a795c));
    func_0x01438628(*(undefined4 *)(_UNK_032a7bd0 + 0x32a7968));
    func_0x01438628(*(undefined4 *)(_UNK_032a7bd4 + 0x32a7974));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1f36,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1f36,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0289504c + 0x2894f58);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02895050 + 0x2894f6c),param_1,param_2,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar10,&uStack_38,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02895054 + 0x289503c));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032a7bd8 + 0x32a79d4));
  func_0x04cfd1b4(iVar1,**(undefined4 **)(_UNK_032a7bdc + 0x32a79e8));
  if (((*(int *)(param_1 + 0x44) != 0) && (0 < param_2)) &&
     (iVar6 = *(int *)(*(int *)(param_1 + 0x44) + 0xc), iVar6 != 0)) {
    if (param_2 < iVar6) {
      iVar6 = param_2;
    }
    if (*(int *)(**(int **)(_UNK_032a7be0 + 0x32a7a24) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_032a3fc4();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x032a7be8(iVar2);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar8 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(iVar2 + 0x80);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(int *)(iVar8 + 0xc) - (iVar6 + iVar2 * 6);
    while( true ) {
      iVar6 = *(int *)(param_1 + 0x44);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) + iVar2 * -6 <= (int)uVar11) break;
      iVar6 = *(int *)(param_1 + 0x44);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar6 + 0xc) <= uVar11) {
        func_0x014388e8();
      }
      if (*(int *)(iVar6 + uVar11 * 4 + 0x10) != 0) {
        iVar6 = *(int *)(param_1 + 0x44);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar11) {
          func_0x014388e8();
        }
        iVar6 = *(int *)(iVar6 + uVar11 * 4 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar8 = *(int *)(param_1 + 0x44);
        *(uint *)(iVar6 + 0x24) = uVar11;
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar8 + 0xc) <= uVar11) {
          func_0x014388e8();
        }
        uVar10 = *(undefined4 *)(iVar8 + uVar11 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar6 = *(int *)(iVar1 + 8);
        uVar9 = *(uint *)(iVar1 + 0xc);
        piVar4 = *(int **)(_UNK_032a7be4 + 0x32a7b64);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar4;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        if (uVar9 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar9 + 1;
          puVar3 = (undefined4 *)(iVar6 + uVar9 * 4 + 0x10);
          *puVar3 = uVar10;
          func_0x014385cc(puVar3,uVar10);
        }
        else {
          func_0x04cfda38(iVar1,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
      uVar11 = uVar11 + 1;
    }
  }
  return iVar1;
}

