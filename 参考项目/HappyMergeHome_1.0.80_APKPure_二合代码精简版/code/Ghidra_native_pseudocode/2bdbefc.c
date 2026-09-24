
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02bebefc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02bec204 + 0x2bebf18);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bec208 + 0x2bebf2c));
    func_0x01438628(*(undefined4 *)(_UNK_02bec20c + 0x2bebf38));
    func_0x01438628(*(undefined4 *)(_UNK_02bec210 + 0x2bebf44));
    func_0x01438628(*(undefined4 *)(_UNK_02bec214 + 0x2bebf50));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xe84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xe84,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0289504c + 0x2894f58);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02895050 + 0x2894f6c),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02895054 + 0x289503c));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02bec218 + 0x2bebfb0));
  func_0x024eed9c(iVar1,**(undefined4 **)(_UNK_02bec21c + 0x2bebfc4));
  iVar6 = 4;
  piVar11 = *(int **)(_UNK_02bec220 + 0x2bebfdc);
  iStack_28 = param_2;
  do {
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar8 = iVar6 - 4;
    if (*(int *)(iVar10 + 0xc) <= (int)uVar8) {
      return iVar1;
    }
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar10 + 0xc) <= uVar8) {
      func_0x014388e8();
    }
    if (*(int *)(iVar10 + iVar6 * 4) != 0) {
      iVar10 = *(int *)(param_1 + 0x44);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar10 = *(int *)(iVar10 + iVar6 * 4);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar10 + 0x14) != 1) {
        iVar10 = *(int *)(param_1 + 0x44);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar10 = *(int *)(iVar10 + iVar6 * 4);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar10 + 0x14) != 3) goto LAB_02bec1f0;
      }
      iVar10 = *(int *)(param_1 + 0x44);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar8) {
        func_0x014388e8();
      }
      iVar10 = *(int *)(iVar10 + iVar6 * 4);
      if (iVar10 == 0) {
        func_0x014388e4();
      }
      iVar10 = func_0x02c3f4b4(iVar10,0);
      if (iVar10 == param_2) {
        iVar10 = *(int *)(param_1 + 0x44);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar8) {
          func_0x014388e8();
        }
        iVar10 = *(int *)(iVar10 + iVar6 * 4);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar10 + 0xc);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x024eec50(uVar7,0,0);
        if (iVar10 == 0) {
          iVar10 = *(int *)(param_1 + 0x44);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar10 + 0xc) <= uVar8) {
            func_0x014388e8();
          }
          uVar7 = *(undefined4 *)(iVar10 + iVar6 * 4);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          iVar10 = *(int *)(iVar1 + 0x10) + 1;
          piVar3 = *(int **)(_UNK_02bec224 + 0x2bec19c);
          *(int *)(iVar1 + 0x10) = iVar10;
          iVar12 = *piVar3;
          if (iVar9 == 0) {
            func_0x014388e4(iVar10,iVar1);
          }
          if (uVar8 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            puVar2 = (undefined4 *)(iVar9 + uVar8 * 4 + 0x10);
            *puVar2 = uVar7;
            func_0x014385cc(puVar2,uVar7);
            param_2 = iStack_28;
          }
          else {
            func_0x0152874c(iVar1,uVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            param_2 = iStack_28;
          }
        }
      }
    }
LAB_02bec1f0:
    iVar6 = iVar6 + 1;
  } while( true );
}

