
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c80410(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01c80a2c + 0x1c80428);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c80a30 + 0x1c8043c));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a34 + 0x1c80448));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a38 + 0x1c80454));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a3c + 0x1c80460));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a40 + 0x1c8046c));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a44 + 0x1c80478));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a48 + 0x1c80484));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a4c + 0x1c80490));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a50 + 0x1c8049c));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a54 + 0x1c804a8));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a58 + 0x1c804b4));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a5c + 0x1c804c0));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a60 + 0x1c804cc));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a64 + 0x1c804d8));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a68 + 0x1c804e4));
    func_0x01438628(*(undefined4 *)(_UNK_01c80a6c + 0x1c804f0));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xadd4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x015fcde8(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
      FUN_01c7ec00(param_1,0);
      if (*(int *)(**(int **)(_UNK_01c80a70 + 0x1c80574) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c80a74 + 0x1c80590));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01c80a78 + 0x1c805b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar12 = *(int *)(iVar1 + 0x3b8);
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c80a7c + 0x1c805d4));
      func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_01c80a80 + 0x1c805ec));
      if (iVar12 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x024ef08c(iVar12,**(undefined4 **)(_UNK_01c80a84 + 0x1c8060c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef09c(&uStack_48,iVar2,**(undefined4 **)(_UNK_01c80a88 + 0x1c8064c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      puVar10 = *(undefined4 **)(_UNK_01c80a8c + 0x1c8066c);
      while (iVar2 = func_0x0151627c(&uStack_38,*puVar10), uVar4 = uStack_2c, iVar2 != 0) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x03b73d40(iVar12,uVar4,**(undefined4 **)(_UNK_01c80a90 + 0x1c80698));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x24);
        uVar7 = *(undefined4 *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x014e9678(iVar2,uVar7,0);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_01c80a94 + 0x1c8070c);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar11 = *piVar5;
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (uVar8 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            puVar3 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
            *puVar3 = uVar4;
            func_0x014385cc(puVar3,uVar4);
          }
          else {
            func_0x0152874c(iVar1,uVar4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x024ef0ac(&uStack_38,**(undefined4 **)(_UNK_01c80a98 + 0x1c80768));
      iVar2 = 0;
      puVar3 = *(undefined4 **)(_UNK_01c80aa0 + 0x1c80780);
      puVar10 = *(undefined4 **)(_UNK_01c80aa4 + 0x1c80788);
      while( true ) {
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar2) break;
        uVar4 = func_0x0152983c(iVar1,iVar2,*puVar3);
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        func_0x03b73bf8(iVar12,uVar4,*puVar10);
        iVar2 = iVar2 + 1;
      }
      iVar1 = FUN_01c733a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x01523ccc(*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(param_1 + 0x10),0);
      uVar13 = FUN_01c733a0(param_1);
      uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
      iVar12 = (int)uVar13;
      if (iVar1 == 0) {
        if (iVar12 == 0) {
          func_0x014388e4();
        }
        func_0x0268be6c(iVar12,0);
        iVar1 = FUN_01c733a0(param_1);
        uVar4 = *(undefined4 *)(param_1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ae774(iVar1,uVar4,0);
        uVar13 = FUN_01c733a0(param_1);
        uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x18);
        uVar7 = *(undefined4 *)(param_1 + 0x1c);
        if ((int)uVar13 == 0) {
          func_0x014388e4();
          uVar4 = extraout_r1_01;
        }
        func_0x026ae848((int)uVar13,uVar4,uVar9,uVar7,0);
        uVar13 = FUN_01c733a0(param_1);
        uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar7 = *(undefined4 *)(param_1 + 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x24);
        if ((int)uVar13 == 0) {
          func_0x014388e4();
          uVar4 = extraout_r1_02;
        }
        func_0x026ae918((int)uVar13,uVar4,uVar7,uVar9,0);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        func_0x014385cc((undefined4 *)(param_1 + 0x3c),0);
        *(undefined4 *)(param_1 + 0x44) = 0;
        func_0x014385cc((undefined4 *)(param_1 + 0x44),0);
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar12 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar12) {
          func_0x01523bec(*(undefined4 *)(iVar1 + 8),0,iVar12,0);
        }
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x18);
        uVar9 = *(undefined4 *)(param_1 + 0x1c);
        if (iVar12 == 0) {
          func_0x014388e4();
          uVar4 = extraout_r1;
        }
        func_0x026ae848(iVar12,uVar4,uVar7,uVar9,0);
        uVar13 = FUN_01c733a0(param_1);
        uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
        uVar9 = *(undefined4 *)(param_1 + 0x20);
        uVar7 = *(undefined4 *)(param_1 + 0x24);
        if ((int)uVar13 == 0) {
          func_0x014388e4();
          uVar4 = extraout_r1_00;
        }
        func_0x026ae918((int)uVar13,uVar4,uVar9,uVar7,0);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0xadd4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

