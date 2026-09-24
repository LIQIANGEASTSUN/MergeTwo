
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_018f9460(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar6 = (char *)(_UNK_018f9704 + 0x18f947c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018f9708 + 0x18f9490));
    func_0x01438628(*(undefined4 *)(_UNK_018f970c + 0x18f949c));
    func_0x01438628(*(undefined4 *)(_UNK_018f9710 + 0x18f94a8));
    func_0x01438628(*(undefined4 *)(_UNK_018f9714 + 0x18f94b4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1d78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1d78,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0289504c + 0x2894f58);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02895050 + 0x2894f6c),param_1,param_2,0);
      *pcVar6 = '\x01';
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar5,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02895054 + 0x289503c));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_018f9718 + 0x18f9514));
  func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_018f971c + 0x18f9528));
  if (((*(int *)(param_1 + 0x44) != 0) && (0 < param_2)) &&
     (iVar9 = *(int *)(*(int *)(param_1 + 0x44) + 0xc), iVar9 != 0)) {
    if (param_2 < iVar9) {
      iVar9 = param_2;
    }
    if (*(int *)(**(int **)(_UNK_018f9720 + 0x18f9564) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = FUN_018f5b04();
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x018f9728(iVar2);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *(int *)(iVar2 + 0x80);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar11 = *(int *)(iVar7 + 0xc) - (iVar9 + iVar2 * 6);
    while( true ) {
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0xc) + iVar2 * -6 <= (int)uVar11) break;
      iVar9 = *(int *)(param_1 + 0x44);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar9 + 0xc) <= uVar11) {
        func_0x014388e8();
      }
      if (*(int *)(iVar9 + uVar11 * 4 + 0x10) != 0) {
        iVar9 = *(int *)(param_1 + 0x44);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar11) {
          func_0x014388e8();
        }
        iVar9 = *(int *)(iVar9 + uVar11 * 4 + 0x10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(param_1 + 0x44);
        *(uint *)(iVar9 + 0x24) = uVar11;
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar11) {
          func_0x014388e8();
        }
        uVar10 = *(undefined4 *)(iVar7 + uVar11 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar1 + 8);
        uVar8 = *(uint *)(iVar1 + 0xc);
        piVar4 = *(int **)(_UNK_018f9724 + 0x18f96a4);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar7 = *piVar4;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (uVar8 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar8 + 1;
          puVar3 = (undefined4 *)(iVar9 + uVar8 * 4 + 0x10);
          *puVar3 = uVar10;
          func_0x014385cc(puVar3,uVar10);
        }
        else {
          func_0x0152874c(iVar1,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
        }
      }
      uVar11 = uVar11 + 1;
    }
  }
  return iVar1;
}

